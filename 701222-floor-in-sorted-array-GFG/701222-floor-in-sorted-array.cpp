class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        int st = 0, end = arr.size()-1, idx = arr.size();
        while(st <= end){
            int mid = (st + end)/2;
           
            if(arr[mid] <= x){
                st = mid+1;
                idx = mid;
            }else{
                end = mid-1;
            }
        }
    if(arr[0] > x) return -1; 
    return idx;    
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna