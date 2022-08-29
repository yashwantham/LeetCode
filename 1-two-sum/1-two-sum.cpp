//Brute Force
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices(2);
        for(int i = 0; i < nums.size() - 1; i++) {
            for(int j = 0; j < nums.size(); j++) {
                if(nums[i] + nums[j] == target && i != j) {
                    indices[0] = i;
                    indices[1] = j;
                }
            }
        }
        return indices;
    }
};