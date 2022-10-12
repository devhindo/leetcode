class Solution {
public:
    bool isTriangle(int a, int b, int c) {
        return a+b > c && a+c > b && b+c > a;
    }
    int largestPerimeter(vector<int>& nums) {
        int largest = 0;
        sort(begin(nums),end(nums));
        int i = nums.size()-1;
        int j = i-1;
        int k = j-1;
        while(i >= 0 && j >= 0 && k >= 0) {
            if(isTriangle(nums[i],nums[j],nums[k])) {
                largest = (nums[i]+nums[j]+nums[k]) > largest ? nums[i]+nums[j]+nums[k] : largest;
            } 
            i--;
            j--;
            k--;
        }
        return largest;
    }
};