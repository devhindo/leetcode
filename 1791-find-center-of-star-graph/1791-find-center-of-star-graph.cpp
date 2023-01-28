class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int>m;
        for(auto e : edges) {
            m[e[0]]++;
            m[e[1]]++;
        }
        for(auto e : m) {
            if(e.second==m.size()-1) return e.first;
        }
        return -1;
    }
};