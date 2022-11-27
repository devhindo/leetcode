class Solution {
public:
    int strStr(string haystack, string needle) {
        int b=0,e=0;
        while(e < haystack.size()) {
            if(haystack[e] == needle[b]) {
                if(b==needle.size()-1) return e-needle.size()+1;
                b++;
            } else {
                e -= b;
                b = 0;
            }
            e++;
        }
        return -1;
    }
};