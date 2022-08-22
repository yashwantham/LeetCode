class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> result;
        int rs = 0, cs = 0, re = matrix.size(), ce = matrix[0].size();
        int totalElements = re * ce, count = 1, i;
        
        while(count <= totalElements) {
            
            for(i = cs; count <= totalElements && i < ce; i++) {
                result.push_back(matrix[rs][i]);
                count++;
            }
            rs += 1;
            
            for(i = rs; count <= totalElements && i < re; i++) {
                result.push_back(matrix[i][ce - 1]);
                count++;
            }
            ce -= 1;
            
            for(i = ce - 1; count <= totalElements && i >= cs; i--) {
                result.push_back(matrix[re - 1][i]);
                count++;
            }
            re -= 1;
            
            for(i = re - 1; count <= totalElements && i >= rs; i--) {
                result.push_back(matrix[i][cs]);
                count++;
            }
            cs += 1;
            
        }
        
        return result;
    }
};