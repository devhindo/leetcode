class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        vector<int>v;
        vector<int>ans;
        int m=0;
        while(pow(2,m) < n) {
            m++;
        }
        if(pow(2,m) == n) {
            v.push_back(pow(2,m));
            n -= pow(2,m);
        }
        m--;
        while(n) {
            if(pow(2,m) <= n) {
                v.push_back(pow(2,m));
                n -= pow(2,m);
            }
            m--;
        }
        sort(v.begin(),v.end());
        int mod = pow(10,9)+7;
        for(int i=0; i<queries.size(); i++) {
            long long p=1;
            for(int j=queries[i][0]; j<=queries[i][1]; j++) {
                p *= v[j];
                p = p % mod;
            }
            int x = (int)p;
            ans.push_back(x);
            p=1;
        }
        return ans;
    }
};