class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) { //  1,3,5,4,7
    int start = 0, end = 1, longest = 1;
    while (end < nums.size()) {
        if (nums[end] > nums[end - 1]) {
            if (longest < (end - start + 1)) {
                longest = end - start + 1;
            }
            end++;
        }
        else {
            longest = max(longest, end-start);
            start = end;
            end++;
        }
    }
    return longest;
    }
};