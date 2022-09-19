class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(auto i=0; i<nums.size()-1; i++) nums[0] ^=nums[i+1];
        return nums[0];
    }
};