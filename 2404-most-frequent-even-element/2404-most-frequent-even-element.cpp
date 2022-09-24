class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        pair<int,int> pop = {-1,0};
        unordered_map<int,int>m;
        for(int num : nums) if(num % 2 == 0) m[num]++;
        for(auto itr=m.begin(); itr != m.end(); itr++) {
            if(itr->second == pop.second && itr->first < pop.first) {
                pop.first = itr->first;
            } else if(itr->second > pop.second) {
                pop = *itr;
            } 
        } 
    return pop.first;
    }
};