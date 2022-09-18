class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,index=0;
        while(i < nums.size()-1) {
            if(nums[i] != nums[i+1]) {
                nums[index] = nums[i];
                index++;
            } 
            i++;
        }
        nums[index] = nums[i];
        return ++index;
    }
};