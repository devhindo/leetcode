class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int w = mat.size();
        int h = mat[0].size();
        if(w*h != r*c) return mat;
        vector<vector<int>>m(r,vector<int>(c));
        int iR = 0;
        int iC = 0;
        for(int i=0; i<mat.size(); i++) {
            for(int j=0; j<mat[i].size(); j++) {
                m[iR][iC] = mat[i][j];
                iC++;
                if(iC == c) {
                    iC = 0;
                    iR++;
                }
            }
        }
        return m;
    }
};