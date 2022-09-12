class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>m;
        for(char c : s) {
            m[c]++;
        }
        for(char c : t) {
            if(m.find(c) != m.end()) {
                m[c]--;
            } else {
                return false;
            }         
        }
        bool f = true;
        for(auto itr=m.begin(); itr!=m.end(); itr++) {
            if (itr->second != 0) {
                f=false;
                break;
            }
        }
        return f;
    }
};