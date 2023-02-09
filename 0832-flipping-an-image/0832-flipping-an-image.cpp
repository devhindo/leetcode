class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(auto& v : image) {
            reverse(v.begin(),v.end());
            for(auto& n : v) {
                if(n) n = 0;
                else {n=1;}
            }
        }
        return image;
    }
};