class Solution {
public:
    void print(vector<int> &small, vector<vector<int>> &ans, int ind, vector<int> &nums, int size) {
        if(ind == size) {
            ans.push_back(small);
            return;
        }
        small.push_back(nums[ind]);
        print(small, ans, ind + 1, nums, size);
        
        small.pop_back();
        print(small, ans, ind + 1, nums, size);   
    }
        
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> small;
        int size = nums.size();
        print(small, ans, 0, nums, size);
        return ans;
    }
};