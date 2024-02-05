class Solution {
public:
    bool areEqual(vector<vector<int>>& mat, vector<vector<int>>& target) {
    int n = mat.size();
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (mat[i][j] != target[i][j]) {
                return false;
            }
        }
    }
    return true;
}

bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
    for (int k = 0; k < 4; ++k) {  
        if (areEqual(mat, target)) {
            return true;
        }
        int n = mat.size();
        vector<vector<int>> rotatedMat = mat;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                rotatedMat[i][j] = mat[n - j - 1][i];
            }
        }
        
        mat = rotatedMat;
    }
    
    return false;
}

};