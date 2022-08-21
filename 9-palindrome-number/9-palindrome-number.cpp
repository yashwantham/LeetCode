class Solution {
public:
    bool isPalindrome(int x) {   
        if(x < 0) { return false; } 
        int start = x;
        long reversed = 0;
        while(start > 0) {
            reversed = (reversed * 10) + start % 10;
            start = start / 10;
        }      
        if(reversed == x) { return true; }
        else { return false; }
    }
};