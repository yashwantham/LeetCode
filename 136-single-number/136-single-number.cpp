// Approach 1
// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         int single = nums[0];
//         for(int i = 1; i < nums.size(); i++) {
//             if(nums[i] != nums[i - 1] && nums[i] != nums[i + 1]) {
//                 single = nums[i];
//             }
//         }
//         return single;
//     }
// };



// Approach 2
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i;
        for(i = 0; i < nums.size() - 1; i += 2) {
            if(nums[i] != nums[i + 1]) {
                return nums[i];
            }
        }
        return nums[nums.size() - 1];
    }
};



