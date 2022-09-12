class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) {
            return false;
        }
        int l = s.length();
        map<char,int>m = { {'a',0}, {'b',0}, {'c',0}, {'d',0}, {'e',0}, {'f',0}, {'g',0}, {'h',0},                   {'i',0}, {'j',0}, {'k',0}, {'l',0}, {'m',0}, {'n',0}, {'o',0}, {'p',0}, {'q',0}, {'r',0}, {'s',0},           {'t',0}, {'u',0}, {'v',0}, {'w',0}, {'x',0}, {'y',0}, {'z',0} };
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