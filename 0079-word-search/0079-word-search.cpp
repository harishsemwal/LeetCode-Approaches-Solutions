class Solution {
public:
    bool solve(int i, int j, int z, vector<vector<char>>& board, string &word, int rows[], int cols[], vector<vector<int>>& v){
        int n = board.size();
        int m = board[0].size();
        if(z==word.size()){
            return true;
        }

        bool ans=false;
        for(int k=0; k<5; k++){
            int nr= i+rows[k];
            int nc=j+cols[k];
            if(nr>=0 && nr<n && nc>=0 && nc<m && !v[nr][nc] && board[nr][nc]==word[z]){
                v[nr][nc]=true;
                ans |= solve(nr, nc, z+1, board, word, rows, cols, v);
                v[nr][nc] = false;
            }   
        }
        
        return ans;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>>v(n+1, vector<int>(m+1, 0));

        bool ans=false;
        int rows[5] = {0, -1, 0, 1, 0};
        int cols[5] = {0, 0, 1, 0, -1};
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                ans |= solve(i, j, 0, board, word, rows, cols, v);
            }
        }
        return ans;
    }
};
