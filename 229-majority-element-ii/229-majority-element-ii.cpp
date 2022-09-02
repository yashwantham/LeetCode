// Optimal
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int tot = nums.size();
        
        int num1 = 0, num2 = 0, count1 = 0, count2 = 0, i;
        for(int i = 0; i < tot; i++) {
            if(nums[i] == num1) { count1++; }
            else if(nums[i] == num2) { count2++; }
            else if(count1 == 0) {
                num1 = nums[i];
                count1 = 1;
            }
            else if(count2 == 0) {
                num2 = nums[i];
                count2 = 1;
            }
            else {
                count1--;
                count2--;
            }
        }
        
        vector<int> ans;
        count1 = count2 = 0;
        for(i = 0; i < tot; i++) {
            if(nums[i] == num1) { count1++; }
            else if(nums[i] == num2) { count2++; }
        }
        if(count1 > tot / 3) { ans.push_back(num1); }
        if(count2 > tot / 3) { ans.push_back(num2); }
        
        return ans;
    }
};


// Above code's TC: O(N) + O(N)
//              SC: O(1)


// Resources: https://www.youtube.com/watch?v=yDbkQd9t2ig&list=PLgUwDviBIf0rPG3Ictpu74YWBQ1CaBkm2&index=18

// // Brute Force  TC: O(N2)   SC: O(1)
// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         vector<int> maj;
//         unordered_set<int> s;
//         for(int i = 0; i < nums.size(); i++) {
//             int count = 0;
//             for(int j = 0; j < nums.size(); j++) {
//                 if(nums[i] == nums[j]) { count++; }
//                 if(count > nums.size() / 3) {
//                     s.insert(nums[i]);
//                 }
//             }
//         }
//         for(auto i: s) { maj.push_back(i); }
//         return maj;
//     }
// };




