class Solution {
  public:
    int gcd(int a, int b){
        while(b != 0){
            int rem = a % b;
            a = b;
            b = rem;
        
        }
    return a;    
    }
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        int l;
        int i = max(a,b);
        
        while(true){
            if(i % a == 0 && i % b == 0){
                l = i;
                break;
            }
            i += max(a,b);
        }
    return {l,gcd(a,b)};    
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna