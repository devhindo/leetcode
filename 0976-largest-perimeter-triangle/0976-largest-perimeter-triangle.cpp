class Solution {
public:
    bool isTriangle(int a, int b, int c) {
        return a+b > c && a+c > b && b+c > a;
    }
    int largestPerimeter(vector<int>& nums) {
        int largest = 0;
        sort(begin(nums),end(nums));
        int i = nums.size()-1;
        while(i-2 >= 0) {
            if(isTriangle(nums[i],nums[i-1],nums[i-2])) {
                largest = (nums[i]+nums[i-1]+nums[i-2]) > largest ? nums[i]+nums[i-1]+nums[i-2] : largest;
            } 
            i--;
        }
        return largest;
    }
};