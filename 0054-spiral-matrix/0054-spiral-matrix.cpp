class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>v;
        int i=0,j=0,m=matrix[0].size(),n=matrix.size(),bu=0,bl=0,vs=m*n;
        bool r=true,l=false,d=false,u=false;
        while(v.size() != vs) {
            v.push_back(matrix[i][j]);
            if(r) {
                if(j==m-1) {
                    r=false;
                    d=true;
                    i++;
                    bu++;
                } else {
                    j++;
                }
            }
            else if(d) {
                if(i==n-1) {
                    d=false;
                    l=true;
                    j--;
                    m--;
                } else {
                    i++;
                }
            } else if(l) {
                if(j==bl) {
                    l=false;
                    u=true;
                    i--;
                    n--;
                } else {
                    j--;
                }
            } else {
                if(i==bu) {
                    u=false;
                    r=true;
                    j++;
                    bl++;
                } else {
                    i--;
                }
            }
        }
        return v;
    }
};