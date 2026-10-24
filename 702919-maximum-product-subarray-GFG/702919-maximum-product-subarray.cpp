class Solution {
  public:
  int maxProduct(vector<int>& arr) {
      int n = arr.size();
      long long pre = 1, suf = 1;
      long long ans = LLONG_MIN;

      for (int i = 0; i < n; i++) {
          if (pre == 0) pre = 1;
          if (suf == 0) suf = 1;

          pre *= arr[i];
          suf *= arr[n - 1 - i];

          ans = max({ans, pre, suf});
      }
      return (int)ans;
  }

};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna