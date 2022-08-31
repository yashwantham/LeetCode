// Optimal
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col0 = 1, rows = matrix.size(), columns = matrix[0].size();
        
        for(int i = 0; i < rows; i++) {
            if(matrix[i][0] == 0) { col0 = 0; }
            for(int j = 1; j < columns; j++) {
                if(matrix[i][j] == 0) {
                    matrix[i][0] = matrix[0][j] = 0;
                }
            }
        }
    
        for(int i = rows - 1; i >= 0; i--) {
            for(int j = columns - 1; j >= 1; j--) {
                if(matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
            if(col0 == 0) { matrix[i][0] = 0; }
        }
      
    }
};



// // Brute Force
// class Solution {
// public:
    
//     void setMarkers(vector<vector<int>>& matri, int r, int c) {
//         // let's make row zero
//         int ic = 0;
//         while(ic < matri[0].size()) {
//             if(matri[r][ic] != 0) { matri[r][ic] = 'a'; }
//             ic++;
//         }
//         int ir = 0;
//         while(ir < matri.size()) {
//             if(matri[ir][c] != 0) { matri[ir][c] = 'a'; }
//             ir++;
//         }
//     }
    
//     void setZeroes(vector<vector<int>>& matrix) {
//         int m = matrix.size(), n = matrix[0].size();
//         for(int i = 0; i < m * n; i++) {
//             if(matrix[i / n][i % n] == 0) {
//                 setMarkers(matrix, i / n, i % n);
//             }
//         }
        
//         for(int i = 0; i < m * n; i++) {
//             if(matrix[i / n][i % n] == 'a') {
//                 matrix[i / n][i % n] = 0;
//             }
//         }
//     }
// };