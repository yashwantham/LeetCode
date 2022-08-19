class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZi = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                swap(nums[nonZi++], nums[i]);
                // nonZi++;
            }
        }
    }
};