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