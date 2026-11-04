class Solution {
public:
    vector<int> bottomView(Node *root) {
        if (root == nullptr) return {};

        map<int, int> m;
        queue<pair<Node*, int>> q;

        q.push({root, 0});

        while (!q.empty()) {
            auto [node, col] = q.front();
            q.pop();

            // Overwrite the previous node at this column
            m[col] = node->data;

            if (node->left)
                q.push({node->left, col - 1});

            if (node->right)
                q.push({node->right, col + 1});
        }

        vector<int> ans;

        for (auto [col, val] : m)
            ans.push_back(val);

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna