class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        int m = *s.rbegin();
        int i=0;
        for(auto e=s.rbegin(); e != s.rend(); e++) {
            i++;
            if(i==3) m = *e;
        }
        return m;
    }
};