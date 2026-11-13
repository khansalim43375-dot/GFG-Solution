class Info {
public:
    int maxNode;
    int minNode;
    int maxSize;

    Info(int mx, int mn, int sz) {
        maxNode = mx;
        minNode = mn;
        maxSize = sz;
    }
};

class Solution {
public:
    Info solve(Node* root) {
        if (!root)
            return Info(INT_MIN, INT_MAX, 0);

        Info left = solve(root->left);
        Info right = solve(root->right);

        // Current subtree is a BST
        if (root->data > left.maxNode && root->data < right.minNode) {
            int mx = max(root->data, right.maxNode);
            int mn = min(root->data, left.minNode);
            int sz = left.maxSize + right.maxSize + 1;

            return Info(mx, mn, sz);
        }

        // Current subtree is not a BST
        return Info(INT_MAX, INT_MIN,
                    max(left.maxSize, right.maxSize));
    }

    int largestBst(Node* root) {
        return solve(root).maxSize;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna