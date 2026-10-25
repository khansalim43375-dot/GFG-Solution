class Solution {
  public:
    int searchInsertK(vector<int> &arr, int k) {
        // code here
        int st = 0, end = arr.size()-1;
        
        while(st <= end){
            
            int mid = st + (end-st)/2;
            
            if(arr[mid] == k) return mid;
            
            else if(arr[mid] > k)
                end = mid-1;
            else
                st = mid+1;
        }
    return st;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna