class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) { return 0; }
        sort(nums.begin(), nums.end());
        int count = 0, maxCount = 0;
        for(int i = 0; i < nums.size() - 1; i++) {
            if(nums[i] + 1 == nums[i + 1]) {
                count += 1;
                maxCount = max(maxCount, count);
            }
            else if(nums[i] == nums[i + 1]) { continue; }
            else {
                maxCount = max(maxCount, count);
                count = 0;
            }
        }
        return maxCount + 1;
    }
};


// The above code is not the optimal solution.
// The optimal solution is done using hashset, so will go through it later
// resources: https://www.youtube.com/watch?v=qgizvmgeyUM