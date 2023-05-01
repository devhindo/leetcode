class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        vector<int>v(nums.size());
        v[0] = 1;
        int mx = 1;
        for(int i=1; i<nums.size(); i++) {
            if(nums[i]<=nums[i-1]) {
                v[i] = 1;
            } else {
                v[i] = 1 + v[i-1];
            }
            mx = max(mx,v[i]);
        }    
        return mx;
    }
};