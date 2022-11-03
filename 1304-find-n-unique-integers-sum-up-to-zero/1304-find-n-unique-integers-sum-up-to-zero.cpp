class Solution {
public:
    vector<int> sumZero(int n) {
        int i=1;
        vector<int>v;
        for(; i<n; i=i+2) {
            v.push_back(i);
            v.push_back(-i);
        }
        if(n%2!=0) v.push_back(0);
        return v;
    }
};