class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size() < 3) return nums[0];
        sort(begin(nums),end(nums));
        int i=0;
        for(; i<nums.size()-2; i=i+3) {
            if(nums[i] == nums[i+1]) {
                if(nums[i+1] != nums[i+2]) {
                    return nums[i+2];
                }
            } else {
                return nums[i];
            }
        }
        return nums[i];
    }
};