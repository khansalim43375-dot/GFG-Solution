
class Solution {
public:
    vector<int> largestValues(Node* root) {
        vector<int> ans;
        if(root == nullptr) return ans;

        queue<Node*> q;
        q.push(root);

        while(!q.empty()) {
            int sz = q.size();
            int maxi = INT_MIN;

            for(int i = 0; i < sz; i++) {
                Node* node = q.front();
                q.pop();

                maxi = max(maxi, node->data);

                if(node->left)
                    q.push(node->left);

                if(node->right)
                    q.push(node->right);
            }

            ans.push_back(maxi);
        }

        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna