class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0,index=0;
        while(i < nums.size()) {
            if(nums[i] != val) {
                nums[index] = nums[i];
                index++;
            }
            i++;
        }
        return index;
    }
};