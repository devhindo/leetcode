class Solution {
public:
    char loop(string& s,int& i) {
        while(i<s.size() && s[i] == '_') {
            i++;
        }
        if(i==s.size()) return -1;
        return s[i++];
    }
    bool canChange(string start, string target) {
        int i=0,j=0;
        while(min(i,j)<start.size()) {
            char c1 = loop(start,i);
            char c2 = loop(target,j);
            if(c1 != c2) {
                return false;
            } else {
                if(c1 == 'R' && i>j || c1 == 'L' && i<j)
                    return false;   
            }
        }
        return true;
    }
    
};