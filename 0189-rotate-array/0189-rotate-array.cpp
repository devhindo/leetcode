class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int tmp;
        while(k >= nums.size()) {
            k = k - nums.size();
        }
        auto first = nums.end() - k;
        auto last = nums.end();
        vector<int>a(first,last);
        nums.erase(first,last);
        nums.insert(nums.begin(), a.begin(), a.end());
    }
};