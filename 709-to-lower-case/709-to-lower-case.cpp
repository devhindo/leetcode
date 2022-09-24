class Solution {
public:
    string toLowerCase(string s) {
        for(char& c : s) {
            if(isupper(c))
                c += 32;
        }
        return s;
    }
};