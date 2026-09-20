class Solution {
public:
    vector<int> nthRowOfPascalTriangle(int n) {
        vector<int> ans(n, 1);

        for(int i = 2; i < n; i++) {
            for(int j = i - 1; j >= 1; j--) {
                ans[j] = ans[j] + ans[j - 1];
            }
        }

        return ans;
    }
};