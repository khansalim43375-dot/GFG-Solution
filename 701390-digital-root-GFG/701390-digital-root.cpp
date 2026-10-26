class Solution {
  public:
    int digitalRoot(int n) {
        
        if(n / 10 == 0) return n;
        
        int sum = 0;
        while(n){
            sum += n % 10;
            n /= 10;
        }
        return digitalRoot(sum);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna