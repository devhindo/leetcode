class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int s=0,e=nums.size()-1,mid;
        while(s<=e) {
            mid = (s+e)/2;
            if(mid==0) {
                if(nums[mid]!=nums[mid+1]) {
                    return nums[mid];
                }
            } else if(mid==nums.size()-1) {
                if(nums[mid]!=nums[mid-1]) {
                    return nums[mid];
                }
            } else {
                if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]) {
                    return nums[mid];
                }
            }

            if(nums[mid]==nums[mid-1] && (mid+1)%2==0) {
                s=mid+1;
            } else if(nums[mid]==nums[mid+1] && (mid+2)%2==0) {
                s=mid+1;
            } else {
                e=mid-1;
            }
        }
        return 0;
    }
};