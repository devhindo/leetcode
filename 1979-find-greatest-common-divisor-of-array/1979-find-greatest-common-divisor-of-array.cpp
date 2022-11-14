class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=nums[nums.size()-1]; i>=1; i--)
            if(nums[0] % i == 0 && nums[nums.size()-1] % i == 0) return i;
        return 0;
    }
};