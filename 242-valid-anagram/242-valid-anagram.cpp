class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) {
            return false;
        }
        int l = s.length();
        map<char,int>m;
        for(auto i=0; i<l; i++) {
            m[s[i]]++;
            m[t[i]]--;
        }
        for(auto itr = m.begin(); itr != m.end(); itr++) {
            if(itr->second != 0) {
                return false;
            }
        }
        return true;
    }
};