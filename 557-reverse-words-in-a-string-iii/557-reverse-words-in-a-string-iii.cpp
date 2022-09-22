class Solution {
public:
    string reverseWords(string s) {
        int start=0,end = 1,tmp;
        while(end < s.size()) {
            if(s[end] == ' ' || end == s.size()-1) {
                tmp = end;
                if(end != s.size()-1) end--;
                while(start < end) {

                    swap(s[start],s[end]);
                    end--;
                    start++;
                }
                end = tmp+1;
                start = end;
            } else {
                end++;
            }
        }
        return s;
    }
};