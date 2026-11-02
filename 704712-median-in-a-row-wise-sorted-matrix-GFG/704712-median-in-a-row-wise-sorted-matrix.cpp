class Solution {
public:
    int median(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();

        int lo = INT_MAX, hi = INT_MIN;
        for (int i = 0; i < n; i++) {
            lo = min(lo, mat[i][0]);
            hi = max(hi, mat[i][m - 1]);
        }

        int required = (n * m) / 2;   // need count > required

        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;

            int cnt = 0;
            for (int i = 0; i < n; i++)
                cnt += upper_bound(mat[i].begin(), mat[i].end(), mid) - mat[i].begin();

            if (cnt <= required)
                lo = mid + 1;
            else
                hi = mid;
        }
        return lo;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna