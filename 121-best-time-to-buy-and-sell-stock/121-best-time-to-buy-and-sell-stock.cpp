class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX, maxPro = 0;
        for(int i = 0; i < prices.size(); i++) {
            mini = min(mini, prices[i]);
            int profit = prices[i] - mini;
            maxPro = max(maxPro, profit);
        }
        return maxPro;
    }
};