class Solution {
public:
    bool leaf(Node* node) {
        return node->left == nullptr && node->right == nullptr;
    }

    bool isSumProperty(Node* root) {

        if(root == nullptr || leaf(root))
            return true;

        if(root->left == nullptr) {
            if(root->right->data != root->data)
                return false;
        }
        else if(root->right == nullptr) {
            if(root->left->data != root->data)
                return false;
        }
        else {
            if(root->left->data + root->right->data != root->data)
                return false;
        }

        return isSumProperty(root->left) &&
               isSumProperty(root->right);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna