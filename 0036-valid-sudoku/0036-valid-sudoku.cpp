class Solution {
public:
    bool sqr(vector<vector<char>>& board, int rowStart, int colStart, unordered_map<int,unordered_set<int>>&c, unordered_map<int,unordered_set<int>>&r) {
        unordered_set<int>s;
        for(int i=rowStart; i<3+rowStart; i++) {
            for(int j=colStart; j < colStart+3; j++) {
                if(board[i][j] != '.') {
                    if(s.find(board[i][j]) == s.end()) {
                        s.insert(board[i][j]);
                    } else {
                        return false;
                    }
                    if(c[j].find(board[i][j]) == c[j].end()) {
                        c[j].insert(board[i][j]);
                    } else {
                        return false;
                    }
                    if(r[i].find(board[i][j]) == r[i].end()) {
                        r[i].insert(board[i][j]);
                    } else {
                        return false;
                    }
                }
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,unordered_set<int>>c;
        unordered_map<int,unordered_set<int>>r;
        for(int i=0; i<9; i=i+3) {
            for(int j=0; j<9; j=j+3) {
                if(!sqr(board,i,j,c,r)) return false;
            }
        }
        return true;
    }
};