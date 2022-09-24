class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max = 1;
        for(string s : sentences) {
            int tmp=1;
            for(char c : s) if(c == ' ') tmp++;
            max = tmp>max ? tmp : max;
        }
        return max;
    }
};