class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>LIS(nums.size(),1);
        for(int i=1; i<LIS.size(); i++) {
            for(int j=0; j<i; j++) {
                if(nums[j]<nums[i]) {
                    LIS[i] = LIS[j]+1 > LIS[i] ? LIS[j]+1 : LIS[i];
                }
            }
        }
        return *max_element(LIS.begin(),LIS.end());
    }
};