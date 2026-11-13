class Solution {
public:
    void pushAll(Node* node, stack<Node*>& s) {
        while (node) {
            s.push(node);
            node = node->left;
        }
    }

    vector<int> findCommon(Node* r1, Node* r2) {
        stack<Node*> s1, s2;
        vector<int> ans;

        pushAll(r1, s1);
        pushAll(r2, s2);

        while (!s1.empty() && !s2.empty()) {
            Node* node1 = s1.top();
            Node* node2 = s2.top();

            if (node1->data == node2->data) {
                ans.push_back(node1->data);
                s1.pop();
                s2.pop();

                pushAll(node1->right, s1);
                pushAll(node2->right, s2);
            }
            else if (node1->data < node2->data) {
                s1.pop();
                pushAll(node1->right, s1);
            }
            else {
                s2.pop();
                pushAll(node2->right, s2);
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna