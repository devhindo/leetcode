class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start=0,end=0,longest=0;
        unordered_set<char>d;
        while(end < s.size()) {
            if(d.find(s[end]) == d.end()) {
                d.insert(s[end]);
                longest = d.size() > longest ? d.size() : longest;
                end++;
            } else {
                d.erase(s[start]);
                start++;
            }
        }
        return longest;
    }
};