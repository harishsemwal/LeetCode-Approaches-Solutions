class Solution {
public:
    void dfs(int i, int j, int n, int m,vector<vector<char>>& grid, vector<vector<int>>&vis){
        vis[i][j] = 1;
        
        int nrow[4] = {1, -1, 0, 0};
        int ncol[4] = {0, 0, -1, 1};
        
        for(int c = 0; c < 4; c++){
            int delrow = nrow[c] + i;
            int delcol = ncol[c] + j;
            
            if(delrow>=0 && delrow < n && delcol>=0 && delcol < m && !vis[delrow][delcol] && grid[delrow][delcol] == '1'){
                dfs(delrow, delcol, n, m, grid, vis);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        
        int result = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0;j < m; j++){
                if(!vis[i][j] && grid[i][j] == '1'){
                    result++;
                    dfs(i, j, n, m, grid, vis);
                }
            }
        }
        return result;
    }
};