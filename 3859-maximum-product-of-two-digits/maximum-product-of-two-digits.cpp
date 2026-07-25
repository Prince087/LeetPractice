#include <algorithm>
#include <climits>

class Solution {
public:
    int maxProduct(int n) {
        int m1 = -1; // First maximum digit
        int m2 = -1; // Second maximum digit

        while (n > 0) {
            int digit = n % 10;
            n /= 10;

            if (digit > m1) {
                m2 = m1;    // Demote former max to second max
                m1 = digit; // Update max
            } else if (digit > m2) {
                m2 = digit; // Update second max
            }
        }

        // If n had only 1 digit, m2 remains -1
        return (m2 == -1) ? 0 : m1 * m2;
    }
};