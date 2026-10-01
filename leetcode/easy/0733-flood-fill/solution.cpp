class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if (image[sr][sc] == color) return image;
        
        int m = image.size(), n = image[0].size();
        int original = image[sr][sc];
        stack<pair<int, int>> st;
        st.push({sr, sc});
        
        while (!st.empty()) {
            auto [r, c] = st.top();
            st.pop();
            
            if (image[r][c] != original) continue;
            
            image[r][c] = color;
            
            if (r > 0) st.push({r-1, c});
            if (r < m-1) st.push({r+1, c});
            if (c > 0) st.push({r, c-1});
            if (c < n-1) st.push({r, c+1});
        }
        return image;
    }
};