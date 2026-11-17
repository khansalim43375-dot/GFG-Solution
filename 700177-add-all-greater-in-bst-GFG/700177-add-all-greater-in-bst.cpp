class Solution {
public:
    void solve(Node* root, int& sum) {
        if (!root) return;

        solve(root->right, sum);

        sum += root->data;
        root->data = sum;

        solve(root->left, sum);
    }

    Node* transformTree(Node* root) {
        int sum = 0;
        solve(root, sum);
        return root;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna