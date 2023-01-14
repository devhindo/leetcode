class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        map<int,int>m;
        for(auto& n : nums) m[n]++;
        for(auto& e : m) {
            pq.push({e.second,e.first});
        }
        vector<int>v;
        for(int i=k; i; i--) {
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};