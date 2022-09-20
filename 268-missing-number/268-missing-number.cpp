class Solution {
public:
    int missingNumber(vector<int>& nums) {
        set<int>s;
        for(auto i=0; i<=nums.size(); i++) s.insert(i);
        for(int num : nums) s.erase(num);
        return *s.begin();
    }
};