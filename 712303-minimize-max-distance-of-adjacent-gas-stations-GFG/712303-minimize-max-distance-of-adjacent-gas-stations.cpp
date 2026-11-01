class Solution {
  public:
    // number of new stations needed so every piece is <= d
    long long stationsNeeded(vector<int> &arr, double d) {
        long long cnt = 0;
        for (int i = 1; i < arr.size(); i++) {
            double gap = arr[i] - arr[i-1];
            long long q = (long long)(gap / d);
            cnt += q;
            // exact multiple of d needs one fewer station
            if (gap / d == (double)q) cnt--;
        }
        return cnt;
    }

    double minMaxDist(vector<int> &arr, int k) {
        int n = arr.size();
        if (n < 2) return 0;

        double lo = 0, hi = 0;
        for (int i = 1; i < n; i++)
            hi = max(hi, (double)(arr[i] - arr[i-1]));

        while (hi - lo > 1e-6) {
            double mid = (lo + hi) / 2;
            if (stationsNeeded(arr, mid) <= k) hi = mid;   // feasible, try smaller
            else lo = mid;                                 // needs too many stations
        }
        return hi;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna