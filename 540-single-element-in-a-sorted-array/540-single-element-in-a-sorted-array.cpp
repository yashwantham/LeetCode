class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start = 0, end = nums.size() - 1;
        if(end == 0) { return nums[start]; }
        else if(nums[start] != nums[start + 1]) { return nums[start]; }
        else if(nums[end] != nums[end - 1]) { return nums[end]; }
        
        while(start <= end) {
            //int mid = (start + end) / 2; 
            int mid = start + (end - start) / 2;
            
            if(nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) { 
                return nums[mid]; 
            }
            
            else {
                if( ((mid % 2 == 0) && nums[mid] == nums[mid + 1]) || 
                    ((mid % 2 == 1) && nums[mid] == nums[mid - 1]) ) {
                    start = mid + 1;
                }
                else {
                    end = mid - 1;
                }
            }
        }
        
        return -1;
    }
};


// // Brute Force
// Linear search        TC: O(N)    and    SC: O(1)
// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& nums) {
//         int i = 0;
//         while(i < nums.size()) {
//             if(nums[i] == nums[i + 1]) { i += 2; }
//             else { return nums[i]; }
//         }
//         return 0;
//     }
// };