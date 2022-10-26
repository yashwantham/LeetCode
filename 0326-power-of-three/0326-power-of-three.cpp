class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 1) { return n == 1; }
        if(n % 3) { return false; }
        return isPowerOfThree(n / 3);
    }
};

// class Solution {
// public:
//     bool isPowerOfThree(int n) {
//         while(n > 1) {
//             if(n % 3) { return false; }
//             n /= 3;
//         }
//         return n == 1;
//     }
// };