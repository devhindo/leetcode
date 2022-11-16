class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        for(char c : s) {
            if(islower(c) || isdigit(c)) {
                s[i] = c;
                i++;
            } else if(isupper(c)) {
                s[i] = tolower(c);
                i++;
            }
        }
        for(int j=0; j<i/2; j++) {
            if(s[j] != s[i-j-1]) return false;
        }
        return true;
    }
};