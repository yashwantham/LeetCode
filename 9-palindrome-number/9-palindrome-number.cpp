class Solution {
public:
    bool isPalindrome(int x) {
        bool pali = false;
        
        if(x < 0) { return pali; }
        
        
        long start = x, reversed = 0;
        while(start > 0) {
            int rem = start % 10;
            reversed = (reversed * 10) + rem;
            start = start / 10;
        }
        
        if(reversed == x) { 
            pali = true; 
        }
        else {  
            pali = false; 
        }
        return pali;
    }
};