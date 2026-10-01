class Solution {
public:
    void solve(vector<vector<char>>& board) {
        if (board.empty()) return;
        
        int m = board.size(), n = board[0].size();
        
        // Mark boundary-connected 'O's with temporary 'M'
        for (int i = 0; i < m; i++) {
            if (board[i][0] == 'O') markUnsurrounded(board, i, 0);
            if (board[i][n-1] == 'O') markUnsurrounded(board, i, n-1);
        }
        for (int j = 0; j < n; j++) {
            if (board[0][j] == 'O') markUnsurrounded(board, 0, j);
            if (board[m-1][j] == 'O') markUnsurrounded(board, m-1, j);
        }
        
        // Flip remaining 'O's to 'X' and restore 'M's to 'O'
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 'O') board[i][j] = 'X';
                if (board[i][j] == 'M') board[i][j] = 'O';
            }
        }
    }
    void markUnsurrounded(vector<vector<char>>& board, int i, int j) {
        if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != 'O') {
            return;
        }
        board[i][j] = 'M';
        markUnsurrounded(board, i+1, j);
        markUnsurrounded(board, i-1, j);
        markUnsurrounded(board, i, j+1);
        markUnsurrounded(board, i, j-1);
    }
};