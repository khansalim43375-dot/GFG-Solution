class Solution {
public:
    vector<int> nthRowOfPascalTriangle(int n) {
        vector<int> res;

        int ans = 1;
        res.push_back(ans);
        for(int i = 1; i < n; i++){
            ans = (ans*(n-i))/i;
            res.push_back(ans);
        }
        

        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna