class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 1) { return n == 1; }
        if(n % 2) { return false; }
        return isPowerOfTwo(n / 2);
    }
};


// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         while(n > 1) {
//             if(n % 2) { return false; }
//             n /= 2;
//         }
//         return n == 1;
//     }
// };

// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         long num = 1;
//         while(num <= n) {
//             if(num == n) {
//                 return true;
//             }
//             num = num * 2;
//         }
//         return false;
//     }
    
// int num = 1;
//for(int i = 0; i <= 30; i++) {
//     if(num == n) {
//        return true;
//     }
//     if(num < INT_MAX/2) {
//         num = num * 2;
//     }
// }
// return false;
// }