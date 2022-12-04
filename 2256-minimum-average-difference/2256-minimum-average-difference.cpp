class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int>av(n);
        long long b=0,f=0;
        for(auto n : nums) b += n;
        pair<int,int>min = {INT_MAX,-1};
        for(int i=nums.size()-1; i>=0; i--) {
            double bt = b/(i+1);
            int fi = n-i-1;
            double ft = fi ? f/fi : 0; 
            double avr=abs(bt-ft);
            av[i] = floor(avr);
            min = min.first < avr ? min : pair<int,int>{avr,i};
            b -= nums[i];
            f += nums[i];
        }
        return min.second;
    }
};