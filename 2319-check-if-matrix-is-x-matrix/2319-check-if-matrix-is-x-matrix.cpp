class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int k=grid.size()-1;
        for(int i=0; i<grid.size(); i++) {
            if(!grid[i][i]) return false;
            if(!grid[i][k]) return false;
            k--;
        }
        k=grid.size()-1;
        for(int i=0; i<grid.size(); i++) {
            for(int j=0; j<grid.size(); j++) {
                if(i==j) continue;
                if(j==k) continue;
                if(grid[i][j]) return false;
            }
            k--;
        }
        return true;
    }
};