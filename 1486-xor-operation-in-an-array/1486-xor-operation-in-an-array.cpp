class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>nums(n);
        for(int i=0; i<n; i++) {
            nums[i] = start + 2 * i;
        }
        int t = 0;
        for(int d : nums) t ^= d;
        return t;
    }
};