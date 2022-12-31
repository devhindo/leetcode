class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int s=0;
        int n = mat.size();
        if(n%2 != 0) s -= mat[n/2][n/2];
        int i=0,j=0,b=n-1;
        while(i<n) {
            s += mat[i][j++];
            s += mat[i][b--];
            i++;
        }
        return s;
    }
};