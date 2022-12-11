class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s,m,e;
        s=0;
        e=nums.size()-1;
        while(s<=e) {
            m=(s+e)/2;
            if(nums[m] == target) {
                return m;
            } else if(nums[m] > target) {
                e=m-1;
            } else {
                s=m+1;
            }
        }
        return e+1;
    }
};