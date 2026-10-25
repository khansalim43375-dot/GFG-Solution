class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        // code here
        int n = arr.size();
        int st = 0, end = n-1, idx = 0;
        while(st <= end){
            int mid = (st + end)/2;

            if(arr[mid] >= x){
                end = mid-1;
                idx = mid;
            }else{
                st = mid+1;
            }
        }
        if(arr[n-1] < x) return -1; 
        return idx;    
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna