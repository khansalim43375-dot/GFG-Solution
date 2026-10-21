class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();

        // Step 1: transpose
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                swap(mat[i][j], mat[j][i]);

        // Step 2: reverse each row
        
            reverse(mat.begin(), mat.end());
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna