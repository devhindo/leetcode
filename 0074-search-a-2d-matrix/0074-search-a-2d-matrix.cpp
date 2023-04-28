class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int s=0;
        int e=m*n-1;
        while(s<=e) {
            int c = (s+e)/2;
            int i,j;
            if(c>=n) {
                j=c%n;
                i=c/n;
            } else {
                i=0;
                j=c;
            }
            if(matrix[i][j]==target) return true;
            else if(matrix[i][j]>target) e=c-1;
            else {s=c+1;}
        }
        return false;
    }
};