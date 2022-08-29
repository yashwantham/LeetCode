class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int col = matrix[0].size();
        for(int r = 0; r < matrix.size(); r++) {
            for(int c = 0; c < col; c++) {
                if(matrix[r][c] == target) { return true; }
            }
        }
        return false;
    }
};