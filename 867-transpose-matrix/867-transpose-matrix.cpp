class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        int m = matrix.size(), n = matrix[0].size();
        
        vector<vector<int>> result(n, vector<int> (m));
        
        for(int i = 0; i < m * n; i++) {
            result[i % n][i / n] = matrix[i / n][i % n]; 
         }
        
        return result;
    }
};