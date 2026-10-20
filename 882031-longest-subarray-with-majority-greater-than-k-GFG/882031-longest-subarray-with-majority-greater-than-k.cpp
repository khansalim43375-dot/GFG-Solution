class Solution {
  public:
   int longestSubarray(vector<int>& arr, int k) {
       unordered_map<int,int> first;
       int s = 0, ans = 0;
       for (int i = 0; i < (int)arr.size(); i++) {
           s += (arr[i] > k) ? 1 : -1;
           if (s > 0) {
               ans = i + 1;
           } else {
               if (!first.count(s)) first[s] = i;
               if (first.count(s - 1))
                   ans = max(ans, i - first[s - 1]);
           }
       }
       return ans;
   }
    
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna