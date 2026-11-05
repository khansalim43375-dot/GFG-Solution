/* Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
  void solve(Node* root, vector<int>& ans, vector<vector<int>>& result){
    if(root == nullptr)
        return ;
        
    ans.push_back(root->data); 
    solve(root->left, ans, result);
 
    solve(root->right, ans, result);
    if(root->left == nullptr && root->right == nullptr)
        result.push_back(ans);
    ans.pop_back();
        
  }
    vector<vector<int>> paths(Node* root) {
    vector<int> ans;
    vector<vector<int>> result;
    solve(root, ans, result);
    return result;        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna