// Optimal
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        if(matrix.size() == 0) { return false; }
        
        int m = matrix.size(), n = matrix[0].size();
        int start = 0, end = (m * n) - 1;
        while(start <= end) {
            int mid = (start + end)/2;
            if(matrix[mid / n][mid % n] == target) { return true; }
            if(matrix[mid / n][mid % n] > target) { end = mid - 1; }
            else { start = mid + 1; }
        }
        return false;
    }
};


// Better 
// link:  https://leetcode.com/problems/search-a-2d-matrix/discuss/1895837/C%2B%2B-BINARY-SEARCH-TREE-(**)-Explained-with-IMG
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int r = 0, c = matrix[0].size() - 1;
//         while(r < matrix.size() && c > -1) {
//             if(matrix[r][c] == target) { return true; }
//             if(target > matrix[r][c]) { r++; }
//             else { c--; }
//         }
//         return false;
//     }
// };


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