class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> newArray(nums.size(), 0);
        if(nums.size() == 1) { return nums; }
        int pi = 0, ni = 1;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > 0) {
                newArray[pi] = nums[i];
                pi += 2;
            }
            else {
                newArray[ni] = nums[i];
                ni += 2;
            }
        }
        return newArray;
    }
};