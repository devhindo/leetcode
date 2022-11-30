class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>m;
        set<int>s;
        for(auto n : arr) m[n]++;
        for(auto &n : m) {
            if(s.find(n.second) == s.end()) {
                s.insert(n.second);
            } else {
                return false;
            }
        }
        return true;
    }
};