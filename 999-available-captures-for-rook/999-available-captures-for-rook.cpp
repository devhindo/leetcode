class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int risk=0;
        pair<int,int>r;
        for(auto i=0; i<7; i++) {
            for(auto j=0; j<7; j++) {
                if (board[i][j] == 'R') r = {i,j};
            }
        }
        for(auto i= r.first-1; i >= 0; i--) {
            if(board[i][r.second] == 'B') break;
            else if(board[i][r.second] == 'p') {
                risk++;
                break;
            }
        }
        for(auto i= r.first+1; i <= 7 ; i++) {
            if(board[i][r.second] == 'B') break;
            if(board[i][r.second] == 'p') {
                risk++;
                break;
            }
        }
        for(auto i= r.second+1; i <= 7 ; i++) {
            if(board[r.first][i] == 'B') break;
            if(board[r.first][i] == 'p') {
                risk++;
                break;
            }
        }
        for(auto i= r.second-1; i >= 0; i--) {
            if(board[r.first][i] == 'B') break;
            if(board[r.first][i] == 'p') {
                risk++;
                break;
            }
        }
        return risk;
    }
};