class Solution {
public:
    Node* findLCA(Node* root, Node* p, Node* q) {
        while (root != nullptr) {
            if (root->data > p->data && root->data > q->data)
                root = root->left;
            else if (root->data < p->data && root->data < q->data)
                root = root->right;
            else
                return root;
        }
        return nullptr;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna