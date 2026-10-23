class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        sort(arr.begin(), arr.end());

        vector<vector<int>> ans;
        for (const auto& cur : arr) {
            if (ans.empty() || ans.back()[1] < cur[0]) {
                ans.push_back(cur);                        // no overlap, start a new interval
            } else {
                ans.back()[1] = max(ans.back()[1], cur[1]); // overlap, extend the last one
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna