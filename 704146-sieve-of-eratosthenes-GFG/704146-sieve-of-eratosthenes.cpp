class Solution {
  public:
    vector<int> sieve(int n) {
        // code here
        vector<bool> prime(n+1, true);
        
        
        for(int i = 2; i*i <= n; i++){
            
            if(prime[i]){
                for(int j = i*i; j <= n; j += i){
                    prime[j] = false;
                }
            }
        }
        vector<int> ans;
        for(int i = 2; i <= n; i++){
            if(prime[i])
                ans.push_back(i);
        }
    return ans;        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna