class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        vector<vector<char>>v(numRows,vector<char>(s.size())); 
        int i=0,j=0;
        bool d=true;
        for(auto& c : s) {
            v[i][j] = c;
            if(d) {
                if(i+1==numRows) {
                    d = false;
                    j++;
                    i--;
                } else {i++;}
            } else {
                if(i-1 < 0) {
                    d = true;
                    i++;
                } else {
                    i--;
                    j++;
                }
            }
        }
        string a;
        for(auto& r : v) {
            for(auto& c : r) {
                if(c) a += c; 
            }
        }
        return a;
    }
};