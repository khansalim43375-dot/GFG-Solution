class BST{
    stack<Node* > s;
    bool reverse;
    public:
    BST(Node* root, bool isReverse){
        reverse = isReverse;
        pushAll(root);
    }
    bool hasNext(){
        return !s.empty();
    }
    int next(){
        Node* curr = s.top();
        s.pop();
       if(!reverse) pushAll(curr->right);
       else pushAll(curr->left);
    return curr->data;    
    }
    void pushAll(Node* node){
        while(node){
            s.push(node);
            if(reverse)
                node = node->right;
            else
                node = node->left;    
        }
    }
};
class Solution {
public:
    bool findTarget(Node* root, int k) {
        if(!root) return false;

        BST l(root, false);
        BST r(root, true);

        int i = l.next();
        int j = r.next();

        while(i < j){
            if(i + j == k) return true;
            else if( i + j < k) i = l.next();
            else j = r.next();
        }
    return false;    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna