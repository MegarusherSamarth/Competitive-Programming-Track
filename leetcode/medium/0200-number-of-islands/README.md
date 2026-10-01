# Number of Islands

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an `m x n` 2D binary grid `grid` which represents a map of `'1'`s (land) and `'0'`s (water), return  *the number of islands*.

An  **island**  is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

 

 **Example 1:** 

```
Input: grid = [
  ["1","1","1","1","0"],
  ["1","1","0","1","0"],
  ["1","1","0","0","0"],
  ["0","0","0","0","0"]
]
Output: 1

```

 **Example 2:** 

```
Input: grid = [
  ["1","1","0","0","0"],
  ["1","1","0","0","0"],
  ["0","0","1","0","0"],
  ["0","0","0","1","1"]
]
Output: 3

```

 

 **Constraints:** 

- m == grid.length
- n == grid[i].length
- 1 <= m, n <= 300
- grid[i][j] is '0' or '1'.

## Solution

**Language:** C++  
**Runtime:** 30 ms (beats 32.62%)  
**Memory:** 18.2 MB (beats 38.34%)  
**Submitted:** 2026-10-01T12:08:24.568Z  

```cpp
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty()) return 0;
        
        int count = 0;
        int m = grid.size(), n = grid[0].size();
        queue<pair<int, int>> q;
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1') {
                    count++;
                    grid[i][j] = '0'; // Mark as visited
                    q.push({i, j});
                    
                    while (!q.empty()) {
                        auto [r, c] = q.front();
                        q.pop();
                        
                        // Check 4 directions
                        if (r > 0 && grid[r-1][c] == '1') {
                            grid[r-1][c] = '0';
                            q.push({r-1, c});
                        }
                        if (r < m-1 && grid[r+1][c] == '1') {
                            grid[r+1][c] = '0';
                            q.push({r+1, c});
                        }
                        if (c > 0 && grid[r][c-1] == '1') {
                            grid[r][c-1] = '0';
                            q.push({r, c-1});
                        }
                        if (c < n-1 && grid[r][c+1] == '1') {
                            grid[r][c+1] = '0';
                            q.push({r, c+1});
                        }
                    }
                }
            }
        }
        return count;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/number-of-islands/)