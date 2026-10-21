class Solution {
  public:
    int power(int a, int b) {
        int ans = 1;
        a = a % 10;
        while (b) {
            if (b % 2 == 1)
                ans = (ans * a) % 10;
            a = (a * a) % 10;
            b /= 2;
        }
        return ans;
    }

    int getLastDigit(string& a, string& b) {
        int e = a.back() - '0';          // only last digit of a matters
        int result = 1;

        for (char c : b) {
            int d = c - '0';
            result = power(result, 10);              // result^10
            result = (result * power(e, d)) % 10;    // times e^d
        }
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna