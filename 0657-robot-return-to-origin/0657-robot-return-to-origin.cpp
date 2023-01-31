class Solution {
public:
    bool judgeCircle(string moves) {
        pair<int,int>p = {0,0};
        for(char m : moves) {
            if(m=='U') p.second++;
            else if(m=='D') p.second--;
            else if(m=='R') p.first++;
            else if(m=='L') p.first--;
        }
        return !p.first&&!p.second;
    }
};