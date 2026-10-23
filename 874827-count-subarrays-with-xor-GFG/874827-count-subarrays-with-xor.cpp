class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        unordered_map<int, int> m;
        m[0] = 1;
        int xr = 0, sum = 0;
        for(int x : arr){
            xr ^= x;
            int a = xr^k;
            
            if(m.count(a)){
                sum += m[a];
            }
            m[xr]++;
        }
    return sum;    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna