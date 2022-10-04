class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        return nums.size() > unordered_set(nums.begin(),nums.end()).size();
    }
};