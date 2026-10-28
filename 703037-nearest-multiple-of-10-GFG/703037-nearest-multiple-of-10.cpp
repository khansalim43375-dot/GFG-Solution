class Solution {
  public:
    string roundToNearest(string& s) {
        // Code Here
        int carry = 0, n = s.length();
        if(s[n-1]-'0' <= 5){
            s[n-1] = '0';
            return s;
        }
        s[n-1] = '0';
        carry = 1;
        for(int i = n-2; i >= 0; i--){
           int a = s[i] - '0';
           a += carry;
           carry = a / 10;
           a = a % 10;
           s[i] = a+'0';
        }
        if(carry == 1)
            s.insert(0,1,'1');
    return s;    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna