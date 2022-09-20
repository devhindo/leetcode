class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int total=nums.size();
        for(auto i=0; i<nums.size(); i++) {
            total ^= nums[i];
            total ^= i;
        }
        return total;
    }
};