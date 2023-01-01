class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string>m1;
        map<string,char>m2;
        stringstream ss(s);
        string t;
        int i=0;
        while(getline(ss,t,' ')) {
            if(m1.find(pattern[i]) == m1.end()) {
                if(m2.find(t) == m2.end()) {
                    m1[pattern[i]] = t;
                    m2[t] = pattern[i];
                } else {
                    if(m2[t] != pattern[i]) return false;
                }
            } else {
                if(m1[pattern[i]] != t) return false;
            }
            i++;
        }
        if(i!=pattern.size()) return false;
        return true;
    }
};