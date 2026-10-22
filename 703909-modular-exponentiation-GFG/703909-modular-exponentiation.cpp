class Solution {
  public:
    int powMod(long long a, long long b,long long M) {
         long long ans = 1;
         a = a % M;
         while (b) {
             if (b % 2 == 1)
                 ans = (ans * a) % M;
             a = (a * a) % M;
             b /= 2;
         }
         return ans;
     }
   
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna