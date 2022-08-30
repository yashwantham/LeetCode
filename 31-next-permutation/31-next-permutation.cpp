class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), dec, gre;
        
        for(dec = n - 2; dec >= 0; dec--) {
            if(nums[dec] < nums[dec + 1]) { break; }
        }
        
        if(dec < 0) {
            reverse(nums.begin(), nums.end());
        }
        else {
            for(gre = n - 1; gre > dec; gre--) {
                if(nums[gre] > nums[dec]) { break; }
            }
        swap(nums[dec], nums[gre]);
        reverse(nums.begin() + dec + 1, nums.end());
        }
        
    }
};


// Resources
// https://www.youtube.com/watch?v=LuLCLgMElus