/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
*/
class Solution {
public:
    bool isIdentical(Node* r1, Node* r2) {
        // both empty -> identical
        if (r1 == nullptr && r2 == nullptr) return true;

        // only one empty -> not identical
        if (r1 == nullptr || r2 == nullptr) return false;

        // values differ -> not identical
        if (r1->data != r2->data) return false;

        // both subtrees must match
        return isIdentical(r1->left, r2->left) &&
               isIdentical(r1->right, r2->right);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna