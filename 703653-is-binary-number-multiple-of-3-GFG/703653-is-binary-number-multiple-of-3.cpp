class Solution {
  public:
    bool isMultipleOf3(string& s) {
       int r = 0;
           for (char c : s) {
               r = (2 * r + (c - '0')) % 3;
           }
           return r == 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna