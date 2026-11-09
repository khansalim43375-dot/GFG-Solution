class Solution {
public:
    Node* solve(vector<int>& pre, vector<int>& post,
                int& preIdx, int l, int r,
                unordered_map<int, int>& m) {

        if (l > r || preIdx >= pre.size())
            return nullptr;

        Node* root = new Node(pre[preIdx++]);

        if (l == r)
            return root;

        int pos = m[pre[preIdx]];

        root->left = solve(pre, post, preIdx, l, pos, m);
        root->right = solve(pre, post, preIdx, pos + 1, r - 1, m);

        return root;
    }

    Node* constructTree(vector<int>& pre, vector<int>& post) {
        int n = pre.size();

        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
            m[post[i]] = i;

        int preIdx = 0;
        return solve(pre, post, preIdx, 0, n - 1, m);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna