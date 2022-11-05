class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int m=1;
        set<int>s;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] <= 0) continue;
            if(s.find(nums[i]) != s.end()) continue;
            if(nums[i] > m) {
                s.insert(nums[i]);
            } else if(nums[i] == m) {
                m++;
            }
        }
        for(auto itr = s.begin(); itr != s.end(); itr++) {
            if(*itr == m) {
                m++;
            } else {
                return m;
            }
        }
        return m;
    }
};