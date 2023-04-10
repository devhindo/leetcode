class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int c = nums[0],m=c;
        for(int i=1; i<nums.size(); i++) {
            if(nums[i]>c && nums[i]+c<nums[i]) {
                c = 0;
            }
            c += nums[i];
            m = max(m,c);
        }
        return m;
    }
};