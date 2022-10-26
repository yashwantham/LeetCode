class Solution {
public:
    bool isPowerOfFour(int n) {
        
 return (n <= 1) ? (n == 1) : ((n % 4) ?  false :  isPowerOfFour(n / 4));
        // if(n <= 1) { return n == 1; }
        // if(n % 4) { return false; }
        // return isPowerOfThree(n / 4);
    }
};

// class Solution {
// public:
//     bool isPowerOfFour(int n) {
//         while(n > 1) {
//             if(n % 4) { return false; }
//             n /= 4;
//         }
//         return n == 1;
//     }
// };




