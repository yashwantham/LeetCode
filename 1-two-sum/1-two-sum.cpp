// Optimal is stil pending





// Using two pointer approach
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> arr(n);
        for (int i = 0; i < n; i++) {
            arr[i] = make_pair(nums[i], i);
        }
        sort(arr.begin(), arr.end()); // Sorted by their values.
        int lo = 0, hi = n- 1;
        while (lo < hi) {
            int sum2 = arr[lo].first + arr[hi].first;
            if (sum2 == target) {
                return {arr[lo].second, arr[hi].second};
            }
            if (sum2 > target) { hi--; } 
            else { lo++; } 
        }
        return {};
    }
};

// Wasn't able to code the optimal solution 


// //Brute Force
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> indices(2);
//         for(int i = 0; i < nums.size() - 1; i++) {
//             for(int j = 0; j < nums.size(); j++) {
//                 if(nums[i] + nums[j] == target && i != j) {
//                     indices[0] = i;
//                     indices[1] = j;
//                 }
//             }
//         }
//         return indices;
//     }
// };