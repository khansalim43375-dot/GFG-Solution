class Solution {
public:

    // Find parent of every node
    void markParent(Node* root, unordered_map<Node*, Node*>& parent) {
        if(root == nullptr) return;

        if(root->left) {
            parent[root->left] = root;
            markParent(root->left, parent);
        }

        if(root->right) {
            parent[root->right] = root;
            markParent(root->right, parent);
        }
    }

    // Find target node
    Node* findTar(Node* root, int target) {
        if(root == nullptr) return nullptr;

        if(root->data == target)
            return root;

        Node* left = findTar(root->left, target);

        if(left != nullptr)
            return left;

        return findTar(root->right, target);
    }

    // Calculate sum of nodes at distance K
   int kDistSum(Node* root, int target, int k) {

       if(root == nullptr) return 0;

       unordered_map<Node*, Node*> parent;
       markParent(root, parent);

       Node* tar = findTar(root, target);

       if(tar == nullptr) return 0;

       queue<Node*> q;
       unordered_set<Node*> visited;

       q.push(tar);
       visited.insert(tar);

       int level = 0;
       int sum = 0;

       while(!q.empty() && level <= k) {

           int sz = q.size();

           for(int i = 0; i < sz; i++) {

               Node* node = q.front();
               q.pop();

               sum += node->data;  // Include current node

               if(node->left && !visited.count(node->left)) {
                   q.push(node->left);
                   visited.insert(node->left);
               }

               if(node->right && !visited.count(node->right)) {
                   q.push(node->right);
                   visited.insert(node->right);
               }

               if(parent[node] && !visited.count(parent[node])) {
                   q.push(parent[node]);
                   visited.insert(parent[node]);
               }
           }

           level++;
       }

       return sum ;
   }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna