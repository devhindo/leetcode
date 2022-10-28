class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char,int>,vector<string>>m;
        for(string str : strs) {
            map<char,int>s;
            for(char c : str) s[c]++;
            m[s].push_back(str);
        }
        vector<vector<string>>v;
        for(auto itr=m.begin(); itr != m.end(); itr++) {
            v.push_back(itr->second);
        }
        return v;
    }
};