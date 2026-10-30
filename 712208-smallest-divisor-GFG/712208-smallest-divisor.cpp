class Solution {
  public:
    int smallestDivisor(vector<int>& arr, int k) {
        // Code here
        int st = 1;
        int end = *max_element(arr.begin(), arr.end());
        int ans, n = arr.size();
        
        while(st <= end){
            int mid = st + (end-st)/2;
            long long sum = 0;
            for(int i = 0; i < n; i++){
                sum += (arr[i]+mid-1)/mid;
            }
            
            if(sum <= k){
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