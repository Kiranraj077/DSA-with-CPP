class Solution {
public:
    double myPow(double x, int n) {
        double result = 1.0;  // Initialize the result as 1, which will hold the final result of x^n
        long long nn = n;  // Use long long to handle negative exponent case, as int can't handle INT_MIN properly
        
        // If n == 0, x^0 is always 1, so return 1.0
        if (nn == 0) {
            result = 1;
        } else {
            // If n is negative, we convert the problem to finding the reciprocal of x^|n|
            if (nn < 0) {
                x = 1 / x;  // Inverse the base x to handle negative exponent
                nn = -nn;   // Convert n to positive
            }

            // Perform exponentiation by squaring: 
            // The idea is to reduce the problem size by half each time, making it logarithmic in time complexity
            while (nn > 0) {
                if (nn % 2 == 1) {  // If n is odd, multiply result by x
                    result *= x;
                }
                x *= x;  // Square the base x
                nn /= 2; // Halve the exponent n
            }
        }

        return result;  // Return the computed result (x^n)
    }  
};
