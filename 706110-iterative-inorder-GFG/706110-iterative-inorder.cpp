
class Solution {
public:
    vector<int> inOrder(Node* root) {
        vector<int> ans;
        Node* curr = root;

        while (curr != nullptr) {

            if (curr->left == nullptr) {
                ans.push_back(curr->data);
                curr = curr->right;
            }
            else {
                Node* pred = curr->left;

                while (pred->right != nullptr && pred->right != curr) {
                    pred = pred->right;
                }

                if (pred->right == nullptr) {
                    pred->right = curr;
                    curr = curr->left;
                }
                else {
                    pred->right = nullptr;
                    ans.push_back(curr->data);
                    curr = curr->right;
                }
            }
        }

        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna