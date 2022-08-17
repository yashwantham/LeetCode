class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zi = 0, ti = nums.size() - 1, i = 0;
        while(i < nums.size()) {
            if(nums[i] == 2 && i < ti) {
                swap(nums[ti], nums[i]);
                ti--;
            }
            else if(nums[i] == 0) {
                swap(nums[zi], nums[i]);
                zi++;
                i++;
            }
            else i++;
        }
        //sort(nums.begin(), nums.end());
    }
};