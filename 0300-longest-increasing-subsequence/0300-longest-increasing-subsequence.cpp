class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>LIS(nums.size(),1);
        for(int i=1; i<LIS.size(); i++) {
            vector<int>sub;
            for(int j=0; j<i; j++) {
                if(nums[j]<nums[i]) {
                    sub.push_back(1+LIS[j]);
                }
            }
            if(!sub.size()) continue;
            auto tmp = max_element(sub.begin(),sub.end());
            int x = *tmp;
            LIS[i] = x;
        }
        auto lis = max_element(LIS.begin(),LIS.end());
        int nm = *lis;
        return  nm;
    }
};