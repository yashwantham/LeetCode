class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i = nums.size() - 2, decI = -1, firstGre;
        while(i >= 0) {
            if(nums[i] < nums[i + 1]) {
                decI = i;
                break;
            }
            i--;
        }
        if(decI == -1) { return reverse(nums.begin(), nums.end()); }
        i = nums.size() - 1;
        while(i >= 0) {
            if(nums[i] > nums[decI]) {
                swap(nums[i], nums[decI]);
                break;
            }
            i--;
        }
        reverse(nums.begin() + decI + 1, nums.end());
    }
};