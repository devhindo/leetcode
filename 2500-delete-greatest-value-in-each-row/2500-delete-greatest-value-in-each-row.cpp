class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for(auto &v : grid) sort(v.begin(),v.end());
        int a=0;
        for(int i=grid[0].size()-1; i>=0; i--) {
            int t=INT_MIN;
            for(int j=0; j<grid.size(); j++) {
                t = max(t,grid[j][i]);
            }
            a += t;
        }
        return a;
    }
};