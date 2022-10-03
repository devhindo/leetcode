class Solution {
public:
    void moveZeroes(vector<int>& nums) { 
        // Floyd’s slow and fast pointers approach.
        int slow = 0;
        int fast = 1;
        while(fast < nums.size()) {
            if(nums[slow] == 0) {
                if(nums[fast] == 0) {
                    fast++;
                } else {
                    swap(nums[slow],nums[fast]);
                    slow++;
                    fast++;
                }
            } else {
                slow++;
                fast++;
            }
        }
    }
};