class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        int result = 0;

        int rows[4] = {0, 0, -1, 1};
        int cols[4] = {-1, 1, 0, 0};

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    for (int k = 0; k < 4; k++) {
                        int ni = i + rows[k];
                        int nj = j + cols[k];
                        
                        if (ni < 0 || ni >= n || nj < 0 || nj >= m || grid[ni][nj] == 0) {
                            result += 1;
                        }
                    }
                }
            }
        }
        
        return result;
    }
};
