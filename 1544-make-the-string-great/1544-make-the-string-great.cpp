class Solution {
public:
    string makeGood(string s) {
        int e=0,z=s.size();
        while(e<z) {
            if(abs(s[e]-s[e+1]) == 32) {
                s.erase(e,2);
                e=0;
            } else {
                e++;
            }
            z = s.size();
            
        }
        return s;
    }
};