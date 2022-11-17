class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string t;
        int k=0;
        while(k<words.size() && t.size() < s.size()) {
            t += words[k];
            k++;
        }
        return t == s;
    }
};