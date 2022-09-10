class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, vector<int>>m;
        for (auto i = 0; i < nums.size(); i++) {
            if (m.find(nums[i]) == m.end()) {
                m.insert(pair<int, vector<int>>(nums[i], { i }));
            } else {
                m[nums[i]].push_back(i);
                for (auto j = 0; j < m[nums[i]].size() - 1; j++) {
                    if (abs(m[nums[i]][j] - m[nums[i]][j + 1]) <= k) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};