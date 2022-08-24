class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> positions(2, -1);
        bool first = true;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == target && first) {
                positions[0] = i; 
                first = false;
            }
            if(nums[i] == target && first == false) {
                positions[1] = i;
            }
        }
        return positions;
    }
};