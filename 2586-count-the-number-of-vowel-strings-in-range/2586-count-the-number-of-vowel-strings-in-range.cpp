class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        set<char>v={'a','e','i','o','u'};
        int c=0;
        for(; left<=right; left++) {
            if((v.find(words[left][0])!=v.end())&&(v.find(words[left][words[left].length()-1])!=v.end())) c++;
        }
        return c;
    }
};