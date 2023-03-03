class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int s=0,e=nums.size()-1,m;
        while(s<=e) {
            m=(s+e)/2;
            if((m==0 && nums[m]<nums[m+1])) return nums[m];
            if(m==nums.size()-1 && nums[m] < nums[m-1]) return nums[m];
            if(m>0 && nums[m]<nums[m-1]) return nums[m];
            else if(nums[m]>nums[e]) {
                s = m+1;
            } else {
                e = m-1;
            }
        }
        return -1;
    }
};