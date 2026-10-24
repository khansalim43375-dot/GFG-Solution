class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n = arr.size();
        for(int i = 0; i < n;){
            if(arr[i] <= n && arr[i] != arr[arr[i]-1]){
                swap(arr[i], arr[arr[i]-1]);
            }else {
                i++;
            }
        }
        for(int i = 0; i < n; i++){
            if(arr[i] != i+1){
                return i+1;
            }
        }
        return n+1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna