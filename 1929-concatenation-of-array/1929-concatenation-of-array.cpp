class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int>a;
        a.insert(a.begin(),nums.begin(),nums.end());
        auto itr = a.begin() + n;
        a.insert(itr,nums.begin(),nums.end());
        return a;
    }
};