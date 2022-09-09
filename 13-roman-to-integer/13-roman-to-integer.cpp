class Solution {
public:
    int romanToInt(string s) {
        int integer = 0;
        unordered_map<char,int> dic { {'I',1}, {'V',5}, {'X',10}, {'L', 50}, {'C',100},{'D', 500}, {'M', 1000} };
        int j=0;
        while(j<s.length()) {
            if(dic[s[j+1]] && dic[s[j]] < dic[s[j+1]]) {
                integer += dic[s[j+1]]-dic[s[j]];
                j+=2;
            } else {
                integer += dic[s[j]];
                j++;
            }
        }
        return integer;
    }
};