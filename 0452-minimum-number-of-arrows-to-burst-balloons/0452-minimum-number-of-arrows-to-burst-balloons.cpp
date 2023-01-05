class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),[](vector<int>&v1,vector<int>&v2){
            if(v1[0]<v2[0]) {
                return true;
            } else if(v1[0]==v2[0]) {
                return v1[1]>v2[1];
            }
            return false;
        });
        int c=1;
        pair<int,int>p = {points[0][0],points[0][1]};
        for(int i=1; i<points.size(); i++) {
            if(points[i][0] > p.second) {
                c++;
                p = {points[i][0],points[i][1]};
            } else {
                p = {points[i][0],min(p.second,points[i][1])};
            }
    
        }
        return  c;
    }
};