class Solution {
public:
    Node* correctBST(Node* root) {
        Node* curr = root;
        Node* prev1 = nullptr;
        Node* prev2 = nullptr;
        bool isfound = false;
        while (curr != nullptr) {

            if(curr->left == nullptr){
                if(!prev1) prev1 = curr;
                else if(curr->data > prev1->data && !isfound)
                    prev1 = curr;
                else if(curr->data < prev1->data){
                    prev2 = curr;
                    isfound = true;
                }
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
                    if(curr->data > prev1->data && !isfound)
                        prev1 = curr;
                    else if(curr->data < prev1->data){
                    prev2 = curr;
                    isfound = true;
                    }

                    curr = curr->right;
                }
            }
        }
    swap(prev1->data, prev2->data);  
return root;    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna