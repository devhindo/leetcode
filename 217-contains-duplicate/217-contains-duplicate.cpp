class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> dup;
        for(auto i=0; i<nums.size(); i++) {
            if(dup.find(nums[i]) == dup.end()) {
                dup[nums[i]] = 0;
            } else {
                return true;
            }
        }
        return false;
    }
};