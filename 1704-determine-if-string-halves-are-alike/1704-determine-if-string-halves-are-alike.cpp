class Solution {
public:
    bool halvesAreAlike(string s) {
        set<char>v = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        pair<int,int>p;
        for(int i=0; i<s.size()/2; i++) {
            if(v.find(s[i]) != v.end()) {
                p.first++;
            }
        }
        for(int i=s.size()/2; i<s.size(); i++) {
            if(v.find(s[i]) != v.end()) {
                p.second++;
            }
        }
        return p.first == p.second;
    }
};