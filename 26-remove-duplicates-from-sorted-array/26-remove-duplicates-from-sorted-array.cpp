class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 1;
        int ni = 1;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] != nums[i - 1]) {
                nums[ni] = nums[i];
                ni += 1;
                count += 1;
            }
        }
        return count;
    }
};




// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int count = 0;
//         for(int i = 1; i < nums.size(); i++){
//             if(nums[i] == nums[i-1]) count++;
//             else nums[i-count] = nums[i];
//         }
//         return nums.size()-count;
//     }
// };