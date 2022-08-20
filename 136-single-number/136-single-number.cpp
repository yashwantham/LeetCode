class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int single = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] != nums[i - 1] && nums[i] != nums[i + 1]) {
                single = nums[i];
            }
        }
        return single;
    }
};