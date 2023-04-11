class Solution {
public:
    string removeDuplicates(string s) {
        string c = "";
        for(int i=0; i<s.size(); i++) {
            if(c.empty() || s[i]!=c.back()) {
                c += s[i];
            }
            else {
                c.pop_back();
            }
        }
        return c;  
    }
};