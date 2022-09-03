// Both are optimal

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0, end = nums.size() - 1;
        if(nums.size() == 1) { return 0; } 
        if(nums[start] > nums[start + 1]) { return start; }
        if(nums[end] > nums[end - 1]) { return end; }
        
        while(start <= end) {
            int mid = start + (end - start) / 2;
            if(nums[mid] > nums[mid + 1] && nums[mid] > nums[mid - 1]) { return mid; }
            else if(nums[mid] < nums[mid + 1]) { start = mid + 1; }
            else { end = mid - 1; }
        }
        return 0;
    }
};



// Resources
// https://www.youtube.com/watch?v=OINnBJTRrMU

// class Solution {
// public:
//     int findPeakElement(vector<int>& nums) {
//         if(nums.size() == 1) { return 0; } 
//         int start = 0, end = nums.size() - 1;
        
//         while(start <= end) {
//             int mid = start + (end - start) / 2;
            
//             if(mid > 0 && mid < nums.size() - 1) {
//                 if(nums[mid] > nums[mid + 1] && nums[mid] > nums[mid - 1]) { return mid; }
//                 else if(nums[mid] < nums[mid + 1]) { start = mid + 1; }
//                 else { end = mid - 1; }
//             }
            
//             else if(mid == 0) { 
//                 if(nums[mid] > nums[mid + 1]) { return mid; }
//                 else return 1;
//             }
            
//             else if(mid == nums.size() - 1) {
//                 if(nums[mid] > nums[mid - 1]) { return mid; }
//                 else return nums.size() - 2;
//             }
//         }
        
//         return 0;
//     }
// };







