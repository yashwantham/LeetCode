class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i <= nums.size(); i++) {
            sum += i;
        }
        for(int i = 0; i < nums.size(); i++) {
            sum -= nums[i];
        }
        return sum;
    }
};





// Using Sorting

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//     //  sort(begin(nums), end(nums));
//         sort(nums.begin(), nums.end());
//         for(int i = 0; i < nums.size(); i++) {
//             if(nums[i] != i) { return i; }
//         }
//         return nums.size();     
//     }
// };