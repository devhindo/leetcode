class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start=0,end=0,longest=0;
        set<char>d;
        while(end < s.size()) {
            if(d.find(s[end]) == d.end()) {
                d.insert(s[end]);
                if(d.size() > longest) {
                    longest = d.size();
                }
                end++;
            } else {
                d.erase(s[start]);
                start++;
            }
        }
        return longest;
    }
};