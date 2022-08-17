class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size() == 1) {return 0;}
        sort(nums.begin(), nums.end());
        int maxDiff = INT_MIN;
        for(int i = 0; i < nums.size() - 1; i++) {
            int diff = abs(nums[i] - nums[i + 1]);
            maxDiff = max(diff, maxDiff);
        }
        return maxDiff;
    }
};