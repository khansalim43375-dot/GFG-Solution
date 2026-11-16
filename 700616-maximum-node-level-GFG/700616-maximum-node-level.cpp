
class Solution {
  public:
    int maxNodeLevel(Node* root) {
        // code here
        if(root == nullptr) return {};
        queue<Node*> q;
        q.push(root);
        int i = 0, level = 0, mx = INT_MIN;
        while(!q.empty()){
            int sz = q.size();
            if(sz > mx){
                mx = sz;
                level = i;
            }
            for(int i = 0; i < sz; i++){
                Node* node = q.front();

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                q.pop();
            }
         i++;   
        }
    return level;    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna