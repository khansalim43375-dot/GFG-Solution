class Solution {
public:
    bool check(Node* left, Node* right) {
        if (!left && !right) return true;

        if (!left || !right) return false;

        if (left->data != right->data) return false;

        return check(left->left, right->right) &&
               check(left->right, right->left);
    }

    bool isSymmetric(Node* root) {
        if (!root) return true;

        return check(root->left, root->right);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna