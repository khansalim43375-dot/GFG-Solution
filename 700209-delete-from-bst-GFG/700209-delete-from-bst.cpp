
class Solution {
public:
    Node* delNode(Node* root, int key) {
        if(root == nullptr)
            return nullptr;

        if(key < root->data) {
            root->left = delNode(root->left, key);
        }
        else if(key > root->data) {
            root->right = delNode(root->right, key);
        }
        else {
            // Case 1 and 2
            if(root->left == nullptr) {
                Node* temp = root->right;
                delete root;
                return temp;
            }

            if(root->right == nullptr) {
                Node* temp = root->left;
                delete root;
                return temp;
            }

            // Case 3: Two children
            Node* temp = root->right;

            while(temp->left != nullptr)
                temp = temp->left;

            root->data = temp->data;

            root->right = delNode(root->right, temp->data);
        }

        return root;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna