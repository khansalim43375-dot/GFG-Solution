class Solution {
public:
    bool searchRowMatrix(vector<vector<int>>& mat, int x) {
        for (auto& row : mat) {
            if (binary_search(row.begin(), row.end(), x))
                return true;
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna