class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>m;
        for(auto& c : s) m[c]++;
        int l=0;
        int x=0;
        for(auto& c : m) {
            if(c.second%2==0) {
                l += c.second;
            } else {
                if(c.second>x) {
                    if(x) l += (x-1);
                    x = c.second;
                } else {
                    l += (c.second-1);
                }
            }
        }
        return l+x;
    }
};