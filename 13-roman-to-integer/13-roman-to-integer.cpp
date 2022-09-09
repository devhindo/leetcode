class Solution {
public:
    int romanToInt(string s) {
        int integer = 0;
        map<char,int> dic;
        string symbols = "IVXLCDM";
        int values[] = {1,5,10,50,100,500,1000};
        for(int i=0; i<7; i++) {
            dic[symbols[i]] = values[i];
        }
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