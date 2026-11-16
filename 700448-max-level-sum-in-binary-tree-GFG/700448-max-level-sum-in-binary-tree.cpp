
class Solution {
  public:
    int maxLevelSum(Node* root) {
        // code here
        if(root == nullptr) return {};
        queue<Node*> q;
        q.push(root);
        int mx = INT_MIN;

        while(!q.empty()){
            int sz = q.size();
            int sum = 0;
            for(int i = 0; i < sz; i++){
                Node* node = q.front();
                sum += node->data;

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                q.pop();
            }
            mx = max(mx, sum);
        }
    return mx;    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna