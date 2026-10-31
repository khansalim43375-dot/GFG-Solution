class Solution {
  public:
    int kthMissing(vector<int>& arr, int k) {
        int n = arr.size();
        int st = 0, end = n - 1, idx = n;   // idx = n means "no such index"

        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (arr[mid] - mid - 1 >= k) {
                idx = mid;        // valid, try a smaller index
                end = mid - 1;
            } else {
                st = mid + 1;     // fewer than k missing, go right
            }
        }
        return k + idx;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna