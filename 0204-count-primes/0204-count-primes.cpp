class Solution {
public:
    int countPrimes(int n) {
        if(n==0 || n==1) return 0;
        vector<bool>v(n,true);
        v[0] = v[1] = false;
        int c = 0;
        for(int i=2; i*i<n; i++) {
            if(v[i]) {
                for(int j=i*2; j<n; j+=i) {
                    v[j] = false;
                }
            }
        }
        for(int i=0; i<v.size(); i++) {
            if(v[i]) c++;
        }
        return c;
    }
};