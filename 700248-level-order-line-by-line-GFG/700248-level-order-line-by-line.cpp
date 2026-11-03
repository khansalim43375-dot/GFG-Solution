/* A binary tree Node

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
 */
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> result;
        if (root == nullptr) return result;

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
           
            int sz = q.size();
            
            vector<int> level(sz);
            for(int i = 0; i < sz; i++){
                Node* node = q.front();
                q.pop();
                level[i] = node->data;
                
            if (node->left)  q.push(node->left);
            if (node->right) q.push(node->right);
                
            }

            result.push_back(level);

        }
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna