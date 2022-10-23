// class Solution {
// public:
//     double myPow(double x, int n) {
//         if(n==0) return 1;
//         else if(n > 0) return x*myPow(x,n-1); 
//         else return (1/x)*myPow(x,n+1);
//     }
// };



class Solution {
public:
    double myPow(double x, int n) {
       if(n == 0){ return 1; }
        if (n < 0) { 
            n = abs(n);
            x = 1/x;
        }
        if(n % 2 == 0){ return myPow(x * x, n / 2); }
        else{ return x * myPow(x * x, n / 2); }
    }
};

// Brute force 1
// class Solution {
// public:
//     double myPow(double x, int n) {       
//         return pow(x, n);  
//     }
// };