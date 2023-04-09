class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>postfix(n);
        vector<int>prefix(n);
        prefix[0] = nums[0];
        for(int i=1; i<n; i++) {
            prefix[i] = nums[i] * prefix[i-1];
        }
        postfix[n-1] = nums[n-1];
        for(int i=n-2; i>=0; i--) {
            postfix[i] = postfix[i+1] * nums[i];
        }
        nums[0] = postfix[1];
        nums[n-1] = prefix[n-2];
        for(int i=1; i<n-1; i++) {
            nums[i] = postfix[i+1] * prefix[i-1];
        }
        return nums;
    }
};