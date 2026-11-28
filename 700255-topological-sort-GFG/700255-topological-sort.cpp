
class Solution {
  public:

    void dfs(int node, vector<vector<int>>& adj,
             vector<bool>& vis, stack<int>& st) {

        vis[node] = true;

        for (int neigh : adj[node]) {

            if (!vis[neigh]) {
                dfs(neigh, adj, vis, st);
            }
        }

        // Push after processing all neighbours
        st.push(node);
    }

    vector<int> topoSort( vector<vector<int>>& adj) {
        int V = adj.size();
        vector<bool> vis(V, false);
        stack<int> st;

        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                dfs(i, adj, vis, st);
            }
        }

        vector<int> ans;

        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna