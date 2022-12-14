class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX, maxPro = 0;
        for(int i = 0; i < prices.size(); i++) {
            mini = min(mini, prices[i]);
            maxPro = max(maxPro, prices[i] - mini);
        }
        return maxPro;
    }
};



// Resources
// https://www.youtube.com/watch?v=eMSfBgbiEjk