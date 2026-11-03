class Solution {
    // Returns height of subtree, or -1 if it is not balanced.

public:
   int check(Node* node) {
        if (!node) return 0;

        int lh = check(node->left);
        if (lh == -1) return -1;

        int rh = check(node->right);
        if (rh == -1) return -1;

        if (abs(lh - rh) > 1) return -1;

        return 1 + max(lh, rh);
    }
    bool isBalanced(Node* root) {
        return check(root) != -1;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna