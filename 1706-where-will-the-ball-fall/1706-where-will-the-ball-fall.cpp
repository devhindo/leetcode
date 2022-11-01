class Solution {
public:
    int end(vector<vector<int>>& grid, int c) {
        int r=0;
        while(r < grid.size()) {
            if(grid[r][c] == 1) {
                if(c+1 >= grid[0].size() || grid[r][c+1] == -1) return -1;
                r++;
                c++;
            } else {
                if(c-1 < 0 || grid[r][c-1] == 1) return -1;
                r++;
                c--;
            }
        }
        return c;
    }
    vector<int> findBall(vector<vector<int>>& grid) {
        vector<int>ans;
        for(int i=0; i<grid[0].size(); i++) {
            ans.push_back(end(grid,i));
        }
        return ans;
    }
};