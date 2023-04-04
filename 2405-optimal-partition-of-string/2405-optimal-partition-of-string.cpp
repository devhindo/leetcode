class Solution {
public:
    int partitionString(string s) {
        int i=0,c=0;
        while(i<s.size()) {
            set<char>u;
            while(i<s.size()&&u.find(s[i])==u.end()) {
                u.insert(s[i]);
                i++;
            }
            c++;
        }
        return c;
    }
};