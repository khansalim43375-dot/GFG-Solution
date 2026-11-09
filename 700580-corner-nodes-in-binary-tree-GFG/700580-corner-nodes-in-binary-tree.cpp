/* Node class of the binary tree
class Node
{
    int data;
    Node* left, right;
    Node(int key)
    {
        data = key;
        left = right = nullptr;
    }
}
*/

class Solution {
  public:
    vector<int> getCorner(Node* root) {
        // code here
        queue<Node*> q;
        q.push(root);
        vector<int> ans;
        
        while(!q.empty()){
            int sz = q.size();
            
            for(int i = 0; i < sz; i++){
                Node* node = q.front();
                if(i == 0 || i == sz-1)
                    ans.push_back(node->data);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                q.pop();
            }
        }
    return ans;    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna