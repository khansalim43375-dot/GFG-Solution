class Solution {
  public:
    int findMin(vector<int>& arr) {
        // code here
        int st = 0, end = arr.size()-1;
        
        while(st < end){
            int mid = st + (end - st)/2;
            
            if(arr[mid] <= arr[end]){
                end = mid;
            }else{
                st = mid+1;
            }
        }
    return arr[st];    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna