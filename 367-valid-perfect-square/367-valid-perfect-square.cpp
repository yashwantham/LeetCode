
class Solution {
public:
    bool isPerfectSquare(int num) {
        int start = 1, end = num;
        while(start <= end) {
            long mid = start + (end - start) / 2;
            if(mid * mid == num) { return true; }
            else if(mid * mid < num) { start = mid + 1; }
            else { end = mid - 1; }
        }
        return false;
    }
};


// Unique

// This solution makes use of the fact that all square numbers are sum of odd numbers starting from 1.
// For ex :
// 1 = 1
// 1+3 = 4
// 1 + 3 + 5 = 9
// 1 + 3 + 5 + 7 = 16
// .... and so on

// class Solution {
// public:
//     bool isPerfectSquare(int num) {
//         int i = 1;
//         long sum = 0;
//         while(sum < num) {
//             sum += i;
//             if(sum == num) { return true; }
//             i += 2;
//         }
//         return false;
//     }
// };