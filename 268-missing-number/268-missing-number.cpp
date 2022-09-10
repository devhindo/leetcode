class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missed;
        set<int> s(nums.begin(), nums.end());
        for(auto i=0; i<=nums.size(); i++) {
            if(s.find(i) == s.end()) {
                missed = i;
                break; 
            }
        };
        return missed;
    }
};