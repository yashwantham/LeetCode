class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProd = INT_MIN, prod = 1;
        
        for(int i = 0; i < nums.size(); i++) {
            prod = nums[i] * prod;
            maxProd = max(maxProd, prod);
            if(prod == 0) { prod = 1; }
        }
        
        prod = 1;
        for(int i = nums.size() - 1; i >= 0; i--) {
            prod = prod * nums[i];
            maxProd = max(maxProd, prod);
            if(prod == 0) { prod = 1; }
        }
        
        return maxProd;
    }
};