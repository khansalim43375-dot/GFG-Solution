class Solution {
  public:
    bool isCycle(vector<vector<int>>& adj){
        // Code here
        int V = adj.size();
        vector<bool> visited(V, false);
        for(int i = 0; i < V; i++){
                if(visited[i]) continue;
               queue<pair<int, int>> q;
               q.push({i,-1});
               visited[i] = true;

               while(!q.empty()){
                   auto [node, parent] = q.front();
                   q.pop();

                   for(int x : adj[node]){
                       if(!visited[x]){
                           q.push({x, node});
                           visited[x] = true;
                       }else if(visited[x] && parent != x){
                           return true;
                       }
                   }
               }
        }
               return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna