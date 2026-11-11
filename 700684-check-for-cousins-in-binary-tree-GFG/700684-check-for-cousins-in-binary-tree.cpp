class Solution {
public:
    bool areCousins(Node* root, int x, int y) {
        queue<pair<Node*, Node*>> q;
        q.push({root, nullptr});

        while (!q.empty()) {
            int sz = q.size();
            Node* parentX = nullptr;
            Node* parentY = nullptr;

            for (int i = 0; i < sz; i++) {
                auto [node, parent] = q.front();
                q.pop();

                if (node->data == x) parentX = parent;
                if (node->data == y) parentY = parent;

                if (node->left)
                    q.push({node->left, node});

                if (node->right)
                    q.push({node->right, node});
            }

            // Both found at the same level
            if (parentX && parentY)
                return parentX != parentY;

            // Only one found at this level
            if (parentX || parentY)
                return false;
        }

        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna