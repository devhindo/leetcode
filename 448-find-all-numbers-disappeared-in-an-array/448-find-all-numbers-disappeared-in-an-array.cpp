class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>d;
        set<int>s(nums.begin(), nums.end());
        for(int i=1; i<=nums.size(); i++) {
            if(s.find(i) == s.end()) d.push_back(i);
        } 
        return d;
    }
};