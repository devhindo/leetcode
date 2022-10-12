class Solution {
public:
    bool isTriangle(int a, int b, int c) {
        return a+b > c && a+c > b && b+c > a;
    }
    int largestPerimeter(vector<int>& nums) {
        sort(begin(nums),end(nums));
        for(int i=nums.size()-1; i-2 >= 0; i--) {
            if(nums[i]+nums[i-1] > nums[i-2] && nums[i]+nums[i-2] > nums[i-1] && nums[i-1]+nums[i-2] > nums[i]) {
                if(nums[i]+nums[i-1]>nums[i-2])
                    return nums[i]+nums[i-1]+nums[i-2];
            } 
        }
        return 0;
    }
};