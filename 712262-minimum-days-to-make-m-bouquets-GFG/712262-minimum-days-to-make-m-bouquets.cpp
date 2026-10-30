class Solution {
  public:
    int minDaysBloom(vector<int>& arr, int k, int m) {
        // Code here
        int end = *max_element(arr.begin(), arr.end());
        int st = *min_element(arr.begin(), arr.end());
        int ans, n = arr.size();
        
        if((long long)m*k > n) return -1;
        
        while(st <= end){
            
            long long mid =st + (end-st)/2;
            long long x = 0, count = 0;
            
            for(int i = 0; i < n; i++){
                if(arr[i] <= mid){
                    count++;
                }else{
                    x += count/k;
                    count = 0;
                }
            }
            x += count/k;
            if(x >= m){
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