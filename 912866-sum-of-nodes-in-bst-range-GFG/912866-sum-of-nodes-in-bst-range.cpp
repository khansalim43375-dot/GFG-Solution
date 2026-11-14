class Solution {
public:
    int nodeSum(Node* root, int low, int high) {
        if (!root) return 0;

        if (root->data < low)
            return nodeSum(root->right, low, high);

        if (root->data > high)
            return nodeSum(root->left, low, high);

        return root->data +
               nodeSum(root->left, low, high) +
               nodeSum(root->right, low, high);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna