
class Solution {
  public:
    int findMaxFork(Node* root, int k) {
        // code here
        int ans = -1;
        while(root != nullptr){
            if(root->data <= k){
                ans = root->data;
                root = root->right;
            }else{
                root = root->left;
            }    
        }
    return ans;    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna