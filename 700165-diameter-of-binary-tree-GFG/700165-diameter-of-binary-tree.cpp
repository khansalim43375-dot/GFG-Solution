class Solution {
public:
    int Diameter = 0;

    int height(Node* root) {
        if(root == nullptr)
            return 0;

        int left = height(root->left);
        int right = height(root->right);

        Diameter = max(Diameter, left + right);

        return 1 + max(left, right);
    }

    int diameter(Node* root) {
        height(root);
        return Diameter;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna