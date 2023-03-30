class Solution {
public:
    int findGCD(vector<int>& nums) {
        int s=nums[0],g=nums[1];
        for(int i=0; i<nums.size(); i++) {
            s = nums[i] < s ? nums[i] : s;
            g = nums[i] > g ? nums[i] : g;
        }
        int r;
        while(r) {
            r = g%s;
            if(r==0) return s;
            g=s;
            s=r;
        }
        return -1;
    }
};