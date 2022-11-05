class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        int i=0, c=1;
        for(auto itr=s.begin(); itr != s.end(); itr++) {
            if(*itr <= 0)
                continue;
            if(*itr != c) {
                return c;
            }
            c++;
        }
        return c;
    }
};