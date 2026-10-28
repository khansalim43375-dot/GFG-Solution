class Solution {
  public:
    int single(vector<int>& arr) {
        // code here
        int n = arr.size();
        if(n == 1) return arr[0];
        int st = 0, end = n-1;

        while(st <= end){
            int mid = st + (end-st)/2;
            if(mid == 0 && arr[mid] != arr[mid+1]) return arr[mid];
            if(mid == n-1 && arr[mid] != arr[mid-1]) return arr[mid];
            
            if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1])
                return arr[mid];

            if(mid % 2 == 1){
                if(arr[mid] == arr[mid-1]){
                    st = mid+1;
                }else{
                    end = mid-1;
                }
            }else{
                if(arr[mid] == arr[mid-1])
                    end = mid-1;
                else

                    st = mid+1;
            }
        }
    return -1;     
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna