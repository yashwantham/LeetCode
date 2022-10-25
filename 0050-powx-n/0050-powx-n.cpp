class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0){ return 1; }
        if (n < 0) { 
            n = abs(n);
            // n = -1 * n;  this will give error
            x = 1/x;
        }
        if(n % 2 == 0){ return myPow(x * x, n / 2); }
        else{ return x * myPow(x * x, n / 2); }
    }
};


// Iterative Approach
// class Solution {
// public:
//     double myPow(double x, int n) {
//         long nn = n;
//         if(n < 0) { nn = -1 * nn; }
//         double ans = 1.0;
//         while(nn) {
//             if(nn % 2) {
//                 ans = ans * x;
//                 nn = nn - 1;
//             }
//             else {
//                 x = x * x;
//                 nn = nn / 2;
//             }
//         }
//         if(n < 0) { ans = 1.0 / ans; }
//         return ans;
//     }
// };

// Why is this not working??
// class Solution {
// public:
//     double myPow(double x, int n) {
//         if(n==0) return 1;
//         else if(n > 0) return x*myPow(x,n-1); 
//         else return (1/x)*myPow(x,n+1);
//     }
// };



// class Solution {
// public:
//     double myPow(double x, int n) {
//        if(n == 0){ return 1; }
//         if (n < 0) { 
//             n = abs(n);
//             x = 1/x;
//         }
//         if(n % 2 == 0){ return myPow(x * x, n / 2); }
//         else{ return x * myPow(x * x, n / 2); }
//     }
// };

// Brute force 1
// class Solution {
// public:
//     double myPow(double x, int n) {       
//         return pow(x, n);  
//     }
// };