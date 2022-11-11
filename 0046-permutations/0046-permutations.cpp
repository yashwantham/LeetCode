// Optimal Approach
class Solution {
private:
    void swapOpr(int ind, vector<int>&nums, vector<vector<int>>&ans) {
        if(ind == nums.size()) {
            ans.push_back(nums);
            return;
        }
        for(int i = ind; i < nums.size(); i++) {
            swap(nums[ind], nums[i]);
            swapOpr(ind + 1, nums, ans);
            swap(nums[ind], nums[i]);
        }
    }
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        swapOpr(0, nums, ans);
        return ans;
    }
};



// class Solution {
    
// public:
//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<vector<int>> ans;
//         vector<int> ds;
//         int freq[nums.size()];
//         for (int i = 0; i < nums.size(); i++) { freq[i] = 0; }
//         sort(nums.begin(), nums.end());
//         generate(ds, nums, ans, freq);
//         return ans;
//     }
    
// private:
//     void generate(vector<int>&ds, vector<int>&nums, vector<vector<int>>&ans, int freq[]) {
//         if(ds.size() == nums.size()) {
//             ans.push_back(ds);
//             return;
//         }
//         for(int i = 0; i < nums.size(); i++) {
//             if(!freq[i]) {
//                 ds.push_back(nums[i]);
//                 freq[i] = 1;
//                 generate(ds, nums, ans, freq);
//                 freq[i] = 0;
//                 ds.pop_back();
//             }
//         }
//     }
// };



// class Solution {
// public:
//     vector<vector<int>> permute(vector<int>& nums) {
        
//         sort(nums.begin(), nums.end());
//         vector<vector<int>> result;
        
//         do {
//             result.push_back(nums);
//         }while(next_permutation(nums.begin(), nums.end()));
        
//         return result;
//     }
// };