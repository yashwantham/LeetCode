class Solution {
public:
    void reverse(vector<int>& nums, int start, int end) {
            while(start < end) {
                swap(nums[start++], nums[end--]);
            }      
        }
    void rotate(vector<int>& nums, int k) {
        k = k - (k/nums.size())*nums.size();
        reverse(nums, 0, nums.size() - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, nums.size() - 1);      
    }
};


// can use instead swap(nums[start++], [end--]);
    // int temp = nums[start];
    // nums[start] = nums[end];
    // nums[end] = temp;
    // start++;
    // end--;