class Solution {
public:
    Node* insert(Node* root, int key) {
        Node* newNode = new Node(key);

        if(root == nullptr)
            return newNode;

        Node* node = root;

        while(true) {
            if(node->data == key)
                return root;

            if(key < node->data) {
                if(node->left == nullptr) {
                    node->left = newNode;
                    break;
                }
                node = node->left;
            }
            else {
                if(node->right == nullptr) {
                    node->right = newNode;
                    break;
                }
                node = node->right;
            }
        }

        return root;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna