class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>p;
        p.push_back(nums[0]);
        for(int i=1; i<nums.size(); i++) {
            p.push_back(p[i-1]+nums[i]);
        }
        if(p[0]==p[p.size()-1]) return 0;
        for(int i=1; i<p.size(); i++) {
            if(p[i-1] == (p[p.size()-1]-p[i])) return i;
        }
        return -1;
    }
};