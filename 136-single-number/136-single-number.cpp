class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>m;
        for(auto n : nums) m[n]++;
        for(auto itr : m) if(itr.second == 1) return itr.first; 
        return 0;
    }
};