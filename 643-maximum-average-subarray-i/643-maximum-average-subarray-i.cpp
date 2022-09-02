class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max=INT_MIN, currentAverage=NULL;
        double currentSum=0;
        int n = nums.size();
        for(auto i=0; i<n; i++) {
            currentSum = currentSum + nums[i];
            if(i>(k-2)) {
                currentAverage = currentSum / k;
                if(currentAverage > max) {
                    max = currentAverage;
                }
                currentSum = currentSum - nums[i-k+1];
                
            }
        }
        return max;
    }
};