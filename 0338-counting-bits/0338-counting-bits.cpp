class Solution {
public:
    int count(int n) {
        int c=0;
        while(n) {
            if(n&1) c++;
            n = n>>1;
        }
        return c;
    }
    vector<int> countBits(int n) {
        vector<int>v(n+1);
        for(int i=0; i<v.size(); i++) {
            v[i] = count(i);
        }
        return v;
    }
};