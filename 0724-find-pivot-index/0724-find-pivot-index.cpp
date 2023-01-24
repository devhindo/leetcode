class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int r=0,l=0;
        for(int i=nums.size()-1; i>=0; i--) r += nums[i];
        for(int i=0; i<nums.size(); i++) {
            r -= nums[i];
            if(r==l) return i;
            l += nums[i];
        }
        return -1;
    }
};