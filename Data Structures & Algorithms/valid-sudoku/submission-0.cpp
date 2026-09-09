class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> row(9);
        vector<unordered_set<char>> col(9);
        vector<unordered_set<char>> square(9);

        for(int r = 0; r < 9; r++){
            for(int c = 0; c < 9; c++){
                if(board[r][c] == '.'){
                    continue;
                }
                int sqIndex = (r/3)*3 + (c/3);
                if(row[r].count(board[r][c]) || col[c].count(board[r][c]) || square[sqIndex].count(board[r][c])){
                    return false;
                }
                row[r].insert(board[r][c]);
                col[c].insert(board[r][c]);
                square[sqIndex].insert(board[r][c]);
            }
        }
        return true;
    }
};
