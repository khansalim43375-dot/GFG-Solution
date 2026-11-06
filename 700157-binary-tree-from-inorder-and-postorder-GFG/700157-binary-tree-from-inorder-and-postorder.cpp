class Solution {
public:
    Node* solve(vector<int>& postorder, vector<int>& inorder,
                    int& preIndex, int start, int end,
                    unordered_map<int, int>& mp) {

        if (start > end)
            return nullptr;

        int rootVal = postorder[preIndex--];
        Node* root = new Node(rootVal);

        int pos = mp[rootVal];

        // Right subtree first
        root->right = solve(postorder, inorder, preIndex,
                            pos + 1, end, mp);

        // Then left subtree
        root->left = solve(postorder, inorder, preIndex,
                           start, pos - 1, mp);

        return root;
    }

    Node* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int, int> mp;

        for (int i = 0; i < inorder.size(); i++)
            mp[inorder[i]] = i;

        int preIndex = inorder.size() - 1;

        return solve(postorder, inorder, preIndex,
                     0, inorder.size() - 1, mp);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna