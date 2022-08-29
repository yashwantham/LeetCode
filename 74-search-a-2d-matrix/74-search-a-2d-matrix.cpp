class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = 0, c = matrix[0].size() - 1;
        while(r < matrix.size() && c > -1) {
            if(matrix[r][c] == target) { return true; }
            if(target > matrix[r][c]) { r++; }
            else { c--; }
        }
        return false;
    }
};





//Brute Force
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int col = matrix[0].size();
//         for(int r = 0; r < matrix.size(); r++) {
//             for(int c = 0; c < col; c++) {
//                 if(matrix[r][c] == target) { return true; }
//             }
//         }
//         return false;
//     }
// };