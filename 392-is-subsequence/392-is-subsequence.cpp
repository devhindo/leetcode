class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;
        for(auto i=0; i<t.size(); i++ && j < s.size()) {
            if(t[i] == s[j]) j++;
        }
        return j == s.size();
    }
};