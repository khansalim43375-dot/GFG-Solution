class Solution {
public:
    void solve(Node* root, int& ans, int& mx){
        if(root == nullptr) return;
        ans++;
        if(ans > mx) mx = ans;
        solve(root->left, ans, mx);
        solve(root->right, ans, mx);
        ans--;
    }
    int height(Node* root) {
        int ans = 0, mx = 0;
        solve(root, ans, mx);
    return mx-1;    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna