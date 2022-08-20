class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count = 1, maxCount = 1;
        for(int i = 0; i < nums.size() - 1; i++) {
            if(nums[i + 1] > nums[i]) {
                count += 1;
                maxCount = max(maxCount, count);
            }
            else {
                count = 1;
            }
        }
        return maxCount;
    }
};