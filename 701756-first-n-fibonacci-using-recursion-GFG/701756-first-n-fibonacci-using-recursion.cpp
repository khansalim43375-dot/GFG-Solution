class Solution {
  public:
    void fib(vector<int>& ans, int n) {
        if (ans.size() == n)
            return;

        int sz = ans.size();
        ans.push_back(ans[sz - 1] + ans[sz - 2]);

        fib(ans, n);
    }

    vector<int> fibonacciNumbers(int n) {
        vector<int> ans;

        if (n == 0) return ans;

        ans.push_back(0);
        if (n == 1) return ans;

        ans.push_back(1);
        fib(ans, n);

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna