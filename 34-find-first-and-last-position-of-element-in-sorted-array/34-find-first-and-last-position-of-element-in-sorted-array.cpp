class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2, -1);
        
        // Finding the first occurance
        int start = 0, end = nums.size() - 1;
        while(start <= end) {
            int mid = (start + end) / 2;
            if(nums[mid] == target) {
                result[0] = mid;
                end = mid - 1;
            }
            else if(nums[mid] < target) { start = mid + 1; }
            else { end = mid - 1; }
        }
        
        // Finding the second occurance
        start = 0, end = nums.size() - 1;
        while(start <= end) {
            int mid = (start + end) / 2;
            if(nums[mid] == target) {
                result[1] = mid;
                start = mid + 1;
            }
            else if(nums[mid] < target) { start = mid + 1; }
            else { end = mid - 1; }
        }
        
        return result;
    }
};



// // Brute Force
// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         vector<int> positions(2, -1);
//         bool first = true;
//         for(int i = 0; i < nums.size(); i++) {
//             if(nums[i] == target && first) {
//                 positions[0] = i; 
//                 first = false;
//             }
//             if(nums[i] == target && first == false) {
//                 positions[1] = i;
//             }
//         }
//         return positions;
//     }
// };