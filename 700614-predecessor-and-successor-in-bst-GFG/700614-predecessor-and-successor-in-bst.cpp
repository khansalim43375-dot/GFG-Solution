class Solution {
  public:
    vector<Node*> findPreSuc(Node* root, int key) {
        Node* pre = nullptr;
        Node* suc = nullptr;

        Node* cur = root;
        while (cur) {
            if (cur->data < key) {
                pre = cur;
                cur = cur->right;
            } else {
                cur = cur->left;
            }
        }

        cur = root;
        while (cur) {
            if (cur->data > key) {
                suc = cur;
                cur = cur->left;
            } else {
                cur = cur->right;
            }
        }

        return {pre, suc};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna