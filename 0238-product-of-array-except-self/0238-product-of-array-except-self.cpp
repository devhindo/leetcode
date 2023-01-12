class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p=1;
        int z=0;
        for(int i=0; i<size(nums); i++) {
            if(nums[i]==0) {
                z++;
            } else {
                p *= nums[i];
            }
        }
        if(z>1) {
            return vector<int>(size(nums));
            
        } else if(z==1) {
            for(int i=0; i<size(nums); i++) {
                if(nums[i]) nums[i]=0;
                else {
                    nums[i]=p;
                }
            }
        } else {
            for(int i=0; i<nums.size(); i++) {
                int x=nums[i];
                p /= x;
                nums[i] = p;
                p *= x;
            }
        }
        return nums;
    }
};