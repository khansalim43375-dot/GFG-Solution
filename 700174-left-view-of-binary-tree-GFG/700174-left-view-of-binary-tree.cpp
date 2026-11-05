class Solution {
  public:
    void solve(Node* node, int level, vector<int>& ans) {
        if (node == nullptr) return;

        if (level == (int)ans.size()) {
            ans.push_back(node->data);
        }

        solve(node->left, level + 1, ans);
        solve(node->right, level + 1, ans);
    }

    vector<int> leftView(Node *root) {
       vector<int> ans;
       solve(root, 0, ans);
    return ans; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna