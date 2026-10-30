class Solution {
  public:
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        int n = arr.size();
        int mx = *max_element(arr.begin(), arr.end());
        
        int st = 1, end = mx, ans = mx;
        while(st <= end){
            int mid = st + (end-st)/2;
            long long hour = 0;
            for (int i = 0; i < n; i++) {
                    hour += (arr[i] + mid - 1) / mid;   // ceil(arr[i] / mid)
            }
            if(hour <= k){
                ans = mid;
                end = mid-1;
            }else{
                st = mid+1;
            }
            
        }
    return ans;    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna