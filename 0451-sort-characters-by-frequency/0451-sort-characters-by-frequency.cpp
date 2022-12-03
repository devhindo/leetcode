class Solution {
public:
    string frequencySort(string s) {
        map<char,int>m;
        for(char c : s) m[c]++;
        vector<pair<char,int>>v;
        for(auto c : m) v.push_back(c);
        sort(v.begin(),v.end(),[](pair<char,int> a,pair<char,int> b){
        return a.second>b.second;
        });
        int i=0;
        for(auto c : v) {
            for(int j=0; j<c.second; j++) {
                s[i] = c.first;
                i++;
            }
        }
        return s;
    }
};