class Solution {
public:
    int leftHeight(Node* root) {
        int h = 0;
        while (root) {
            h++;
            root = root->left;
        }
        return h;
    }

    int rightHeight(Node* root) {
        int h = 0;
        while (root) {
            h++;
            root = root->right;
        }
        return h;
    }

    int countNodes(Node* root) {
        if (root == nullptr)
            return 0;

        int lh = leftHeight(root);
        int rh = rightHeight(root);

        if (lh == rh)
            return (1 << lh) - 1;

        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna