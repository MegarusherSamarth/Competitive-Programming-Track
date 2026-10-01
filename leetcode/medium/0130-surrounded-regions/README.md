# Surrounded Regions

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an `m x n` matrix `board` containing  **letters**  `'X'` and `'O'`,  **capture regions**  that are  **surrounded** :

- Connect: A cell is connected to adjacent cells horizontally or vertically.
- Region: To form a region connect every 'O' cell.
- Surround: A region is surrounded if none of the 'O' cells in that region are on the edge of the board. Such regions are completely enclosed by 'X' cells.

To capture a  **surrounded region**, replace all `'O'`s with `'X'`s  **in-place**  within the original board. You do not need to return anything.

 

 **Example 1:** 

 **Input:**  board = [["X","X","X","X"],["X","O","O","X"],["X","X","O","X"],["X","O","X","X"]]

 **Output:**  [["X","X","X","X"],["X","X","X","X"],["X","X","X","X"],["X","O","X","X"]]

 **Explanation:** 

In the above diagram, the bottom region is not captured because it is on the edge of the board and cannot be surrounded.

 **Example 2:** 

 **Input:**  board = [["X"]]

 **Output:**  [["X"]]

 

 **Constraints:** 

- m == board.length
- n == board[i].length
- 1 <= m, n <= 200
- board[i][j] is 'X' or 'O'.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 14 MB (beats 78.08%)  
**Submitted:** 2026-10-01T11:50:33.987Z  

```cpp
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
```

---

[View on LeetCode](https://leetcode.com/problems/surrounded-regions/)