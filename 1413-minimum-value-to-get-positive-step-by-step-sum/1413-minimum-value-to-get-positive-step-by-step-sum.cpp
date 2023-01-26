class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int c=1,s=1;
        for(int i=0; i<nums.size(); i++) {
            c += nums[i];
            if(c<1) {
                s += 1+abs(c);
                c += 1+abs(c);
            }
        }
        return s;
    }
};