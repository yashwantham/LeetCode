class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;
        
        while(start <= end) {
            int mid = start + (end - start) / 2;
            if(nums[mid] == target) { return true; }
            
            // For Duplicate case
            if((nums[start] == nums[mid]) && (nums[end] == nums[mid]) ) {
                start++; end--;
            }
            
            // check if left half is sorted
            else if(nums[start] <= nums[mid]) {
                if(target >= nums[start] && target <= nums[mid]) { end = mid - 1; }
                else { start = mid + 1; }
            }
            
            // right half is sorted
            else {
                if(target >= nums[mid] && target <= nums[end]) { start = mid + 1; }
                else { end = mid - 1; }
            }
        }
        
        return false;
    }
};



// Brute force should be linear search