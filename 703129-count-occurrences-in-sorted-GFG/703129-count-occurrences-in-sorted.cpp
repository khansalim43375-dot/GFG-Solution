class Solution {
  public:
    int countFreq(vector<int>& arr, int x) {
    // code here
          int n = arr.size();
          auto it1 = lower_bound(arr.begin(), arr.end(), x);
          int start = it1- arr.begin();


          auto it2 = upper_bound(arr.begin(), arr.end(), x);
          int end = it2 - arr. begin();
    return end-start;          
        
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna