class Solution {
  public:
    int nthDay(int d, int n) {
        // code here
        if(d < n){
            int ans = (n-d)%7;
            return (7-ans)%7;
        }
        return (d-n)%7;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna