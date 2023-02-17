class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=0; i<nums.size()-1; i++) {
            if(nums[i]==nums[i+1]) {
                nums[i] *= 2;
                nums[i+1] = 0;
            }
        }
        int i=0,j=0;
        while(i<nums.size()) {
            if(nums[i]) {
                i++;
            } else {
                j=i;
                while(j<nums.size() && !nums[j]) {
                    j++;
                }
                if(j==nums.size()) break;
                swap(nums[i],nums[j]);
            }
        }
        return nums;
    }
};