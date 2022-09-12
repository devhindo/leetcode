class Solution {
public:
    bool isAnagram(string s, string t) {
        bool f = true;
        map<char,int>m;
        for(char c : s) {
            m[c]++;
        }
        for(char c : t) {
            if(m.find(c) != m.end()) {
                m[c]--;
                if(m[c] < 0) {
                    return false;
                }
            } else {
                return false;
            }         
        }
        for(auto itr=m.begin(); itr!=m.end(); itr++) {
            if (itr->second != 0) {
                f=false;
                break;
            }
        }
        return f;
    }
};