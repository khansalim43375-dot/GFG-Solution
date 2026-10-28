class Solution {
  public:
    int getSingle(vector<int>& arr) {
        int result = 0;
        for (int i = 0; i < 32; i++) {        // check each of the 32 bit positions
            int cnt = 0;
            for (int x : arr)
                cnt += (x >> i) & 1;           // is bit i of x set? add 1 if yes
            if (cnt % 3)                       // count not divisible by 3?
                result |= (1 << i);            // then the answer has bit i set
        }
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna