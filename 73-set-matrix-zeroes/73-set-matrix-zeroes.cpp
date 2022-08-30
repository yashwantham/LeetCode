// Brute Force
class Solution {
public:
    
    void setMarkers(vector<vector<int>>& matri, int r, int c) {
        // let's make row zero
        int ic = 0;
        while(ic < matri[0].size()) {
            if(matri[r][ic] != 0) { matri[r][ic] = 'a'; }
            ic++;
        }
        int ir = 0;
        while(ir < matri.size()) {
            if(matri[ir][c] != 0) { matri[ir][c] = 'a'; }
            ir++;
        }
    }
    
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        for(int i = 0; i < m * n; i++) {
            if(matrix[i / n][i % n] == 0) {
                setMarkers(matrix, i / n, i % n);
            }
        }
        
        for(int i = 0; i < m * n; i++) {
            if(matrix[i / n][i % n] == 'a') {
                matrix[i / n][i % n] = 0;
            }
        }
    }
};