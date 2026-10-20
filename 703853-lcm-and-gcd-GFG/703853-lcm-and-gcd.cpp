class Solution {
  public:
    long long gcd(long long a, long long b) {
        while (b != 0) {
            long long rem = a % b;
            a = b;
            b = rem;
        }
        return a;
    }

    vector<int> lcmAndGcd(long long a, long long b) {
        long long g = gcd(a, b);
        long long l = (a / g) * b;   // divide first to avoid overflow
        return {l, g};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna