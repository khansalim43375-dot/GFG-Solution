class Solution {
  public:
    int trailingZeroes(int n) {
        // code here
        int five = 0;
        while(n){
            five += n/5;
            n /= 5;
        }
        return five;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna