class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> v;
        unordered_map<int,int>m;
        for(int i=0; i<nums.size(); i++) {
            for(int j=0; j<nums[i].size(); j++) {
                m[nums[i][j]]++;
            }
        }
        for(auto itr = m.begin(); itr != m.end(); itr++) {
            if(itr->second == nums.size()) {
                v.push_back(itr->first);
            }
        }
        sort(v.begin(), v.end());
        return v;
    }
};