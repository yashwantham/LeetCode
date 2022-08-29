class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, element = 0;
        
        for(int num: nums) {
            
            if(count == 0) {
                element = num;
            }
            if(element == num) {
                count += 1;
            }
            else {
                count -= 1;
            }
        }
        return element;
    }
};



// The above code is the optimal approach using Moore's Voting Algorithm

// Resource: https://www.youtube.com/watch?v=AoX3BPWNnoE
// for intuition skip to 6:45