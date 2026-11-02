class Solution {
public:
    int rowWithMax1s(vector<vector<int>>& arr) {
        int m = arr.size();
        if (m == 0) return -1;
        int n = arr[0].size();

        int ans = -1;
        int bestCount = 0;

        for (int i = 0; i < m; i++) {
            int firstOne = lower_bound(arr[i].begin(), arr[i].end(), 1) - arr[i].begin();
            int count = n - firstOne;
            if (count > bestCount) {   // strict >, so ties keep the first row
                bestCount = count;
                ans = i;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna