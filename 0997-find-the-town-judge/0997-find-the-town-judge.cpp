class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1 && !trust.size()) return 1;
        map<int,pair<vector<int>,vector<int>>>m;
        for(auto r : trust) {
            m[r[1]].second.push_back(r[0]);
            m[r[0]].first.push_back(r[1]);
        }
        for(auto e : m) {
            if(e.second.second.size() == n-1 && !e.second.first.size()) return e.first;
        }
        return -1;
    }
};