class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;
        for(auto i=0; i<t.size(); i++) {
            if(t[i] == s[j]) j++;
            if(j == s.size()) return true;
        }
        return j == s.size();
    }
};