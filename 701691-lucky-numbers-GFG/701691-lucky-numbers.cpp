class Solution {
  public:
    
    bool isLucky(long long n) {
        if (n < 1) return false;
        long long p = n;                 // current position of n in the sequence
        for (long long s = 2; s <= p; ++s) {
            if (p % s == 0) return false;  // n is removed at this step
            p -= p / s;                    // shift left by the removed numbers before it
        }
        return true;                     // s > p: n can never be removed
    }

};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna