class Solution {
  public:
    vector<int> postOrder(Node* root) {
        vector<int> ans;

        if (root == nullptr) return ans;

        stack<Node*> st1, st2;

        st1.push(root);

        while (!st1.empty()) {
            Node* node = st1.top();
            st1.pop();

            st2.push(node);

            if (node->left)
                st1.push(node->left);

            if (node->right)
                st1.push(node->right);
        }

        while (!st2.empty()) {
            ans.push_back(st2.top()->data);
            st2.pop();
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna