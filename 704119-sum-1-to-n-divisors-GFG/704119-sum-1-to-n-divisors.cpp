class Solution {
  public:
    long long sumOfDivisors(long long n) {
        long long ans = 0;
        for (long long d = 1; d <= n; d++) {
            ans += d * (n / d);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna