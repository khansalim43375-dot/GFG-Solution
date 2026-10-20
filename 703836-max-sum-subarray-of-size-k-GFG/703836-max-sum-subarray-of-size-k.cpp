class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        if (k > n) return 0; // guard, adjust to what the problem expects

        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += arr[i];
        }

        int mx = sum; // first window is a valid candidate

        for (int right = k; right < n; right++) {
            sum += arr[right] - arr[right - k];
            mx = max(mx, sum);
        }
        return mx;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna