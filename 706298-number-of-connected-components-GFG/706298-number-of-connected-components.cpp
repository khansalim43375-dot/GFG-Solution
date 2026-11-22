class Solution {
  public:
    void DFS(int start, vector<bool>& visited,
                const vector<vector<int>>& adj) {

           visited[start] = true;

           for(int it : adj[start]) {
               if(!visited[it]) {
                   DFS(it, visited, adj);
               }
           }
       }

       int dfs(int V, const vector<vector<int>>& adj) {
           int count = 0;
           vector<bool> visited(V, false);

           for(int i = 0; i < V; i++) {
               if(!visited[i]) {
                   DFS(i, visited, adj);
                   count++;
               }
           }

           return count;
       }

    int countConnected(int V, vector<vector<int>>& edges) {
         vector<vector<int>> adj(V);
      
         for(auto& it : edges) {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
         }
         return dfs(V, adj);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna