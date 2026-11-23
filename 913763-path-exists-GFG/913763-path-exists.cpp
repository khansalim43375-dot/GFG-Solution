class Solution {
  public:
    bool checkPath(vector<vector<int>>& adj, int src, int dest) {
        // Code here
            int n = adj.size();
             vector<bool> visited(n, false);
             queue<int> q;
             q.push(src);
             visited[src] = true;
             while(!q.empty()){
                 int node = q.front();
                 q.pop();
                 if(node == dest) return true;
                 for(int x : adj[node]){

                     if(!visited[x]){
                         q.push(x);
                         visited[x] = true;
                     }
                 }
             }
         return false;    
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna