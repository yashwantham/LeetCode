class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReachableIndex = 0;
        for(int i = 0; i < nums.size() && i <= maxReachableIndex; i++) {
            //int jump = i + nums[i];
            maxReachableIndex = max(i + nums[i], maxReachableIndex);
        }
        return maxReachableIndex >= nums.size() - 1;
    }   
};



// Resources
// https://www.youtube.com/watch?v=muDPTDrpS28