class Solution {
  public:
    int minimumStep(int n) {
        // code here
        int count = 0;
        while(n > 1){
            if(n % 3 == 0){
                count++;
                n /= 3;
            }else{
                count++;
                n--;
            }
        }
    return count;    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna