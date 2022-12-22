class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        map<int,int>m;
        for(auto n : nums) m[n]++;
        vector<int>ans(2);
        for(auto e : m) {
            if(e.second==1) {
                ans[1]++;
            } else {
                if(e.second%2==0) {
                    ans[0] += (e.second/2);
                } else {
                    ans[1]++;
                    ans[0] += ((--e.second)/2);
                }
            }
        }
        return ans;
    }
};