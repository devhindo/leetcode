class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ng=0;
        for(auto& n : nums) {
            if(n==0) {
                return 0;
            } else if(n<0) {
                ng++;
            }
        }
        return ng%2 ? -1 : 1;
    }
};