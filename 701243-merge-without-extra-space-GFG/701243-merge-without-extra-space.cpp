class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
       int n = a.size(), m = b.size();    
       int i = n - 1, j = 0;
       while (i >= 0 && j < m && a[i] > b[j]) swap(a[i--], b[j++]);
       sort(a.begin(), a.end());
       sort(b.begin(), b.end());
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna