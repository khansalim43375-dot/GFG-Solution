class Solution {
  public:
    bool canPlace(vector<int>& stalls, int k, int d) {
        int cows = 1, last = stalls[0];
        for (int i = 1; i < (int)stalls.size(); i++) {
            if (stalls[i] - last >= d) {
                cows++;
                last = stalls[i];
                if (cows >= k) return true;   // early exit
            }
        }
        return cows >= k;
    }

    int aggressiveCows(vector<int>& stalls, int k) {
        sort(stalls.begin(), stalls.end());
        int st = 1, end = stalls.back() - stalls.front(), ans = 0;

        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (canPlace(stalls, k, mid)) {
                ans = mid;          // valid, try a larger distance
                st = mid + 1;
            } else {
                end = mid - 1;      // too large, go smaller
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna