class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1 == s2) return true;
        pair<char,char>p1;
        pair<char,char>p2;
        for(int i=0; i<s1.size(); i++) {
            if(s1[i] != s2[i]) {
                if(!p1.first) {
                    p1 = { s1[i] , s2[i] };
                } else if(!p2.first) {
                    p2 = { s1[i] , s2[i] };
                } else {
                    return false;
                }
            }
        }
        return p1.first == p2.second && p2.first == p1.second;
    }
};