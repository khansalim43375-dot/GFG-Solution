class Solution {
  public:
    int search(vector<int>& arr, int key) {
        // Code Here
        int n = arr.size();
        int st = 0, end = n-1;
        
        while(st <= end){
            int mid = (st + end)/2;
            
            if(arr[mid] == key) return mid;
            
            else if(arr[mid] >= arr[st]){
                if(key >= arr[st] && key < arr[mid]){
                    end = mid-1;
                }else{
                    st = mid+1;
                }
            }else{
                if(key <= arr[end] && key > arr[mid]){
                    st = mid+1;
                }else{
                    end = mid-1;
                }
            }
        }
    return -1;    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna