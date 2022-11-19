class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s=0,e=nums.size()-1;
        while(s<nums.size()-1 && nums[s] == nums[s+1]) s++;
        while(e>0 && nums[e] == nums[e-1]) e--;
        return set<int>(nums.begin(),nums.end()).size() != 1 ? e-s-1 : 0;
    }
};