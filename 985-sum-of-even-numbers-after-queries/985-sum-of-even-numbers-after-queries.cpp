class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int sum=0;
        for(int num : nums) if(num % 2 == 0) sum += num;
        vector<int>o;
        for(auto i=0; i<queries.size(); i++) {
            if(nums[queries[i][1]] % 2 == 0) {
                sum -= nums[queries[i][1]];
            } 
            nums[queries[i][1]] += queries[i][0];
            if(nums[queries[i][1]] % 2 == 0) {
                sum += nums[queries[i][1]];
            }
            o.push_back(sum);
        }
        return o;
    }
};