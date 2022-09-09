class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>freq;
        int size=nums.size();
        int majority;
        int i;
        for(i=0; i<size; i++) {
            if(freq.find(nums[i]) == freq.end()) {
                freq[nums[i]] = 0;
            }
            double maj = ((double)size)/2;
            freq[nums[i]]++;
            if(freq[nums[i]] > maj) {
                majority = nums[i];
            }
        }
        return majority;
    }
};