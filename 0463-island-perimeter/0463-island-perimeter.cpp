class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        // vector<int<int>> vt(n+1, vector<int>(m+1, -1));
        // for(int i = 0; i < n; i++){
        //     for(int j = 0; j < m; j++){
        //         if(grid[i][j] == 1 || grid[i][j] == 0){
        //             vt[i][j] = grid[i][j];
        //         }
        //     }
        // }
        
        
        int rows[4] = {0, 0, -1, 1};
        int cols[4] = {-1, 1, 0, 0};
        
        int result = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m ; j++){
                if(grid[i][j] == 1){
                    
                    
                    for(int k = 0; k < 4; k++){
                        int nrow = i + rows[k];
                        int ncol = j + cols[k];
                        
                        if(nrow < 0 || nrow >= n || ncol < 0 || ncol >= m || grid[nrow][ncol] == 0){
                            result += 1;
                        }
                    }
                }
            }
        }
        
        return result;
    }
};