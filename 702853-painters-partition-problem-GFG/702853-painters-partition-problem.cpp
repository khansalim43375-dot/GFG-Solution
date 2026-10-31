class Solution {
  public:
    int Assign(vector<int>& arr, int time){
        int painters = 1, assign = 0;
        
        for(int x : arr){
            if(assign + x <= time){
                assign += x;
            }else{
                painters++;
                assign = x;
            }
        }
    return painters;    
    }
    
    int minTime(vector<int>& arr, int k) {
        
        // code here
         int st = *max_element(arr.begin(), arr.end());
         int end = accumulate(arr.begin(), arr.end(), 0);
         
         while(st <= end){
             int mid = st+ ( end - st)/2;
             
             int painters = Assign(arr, mid);
             
             if(painters <= k){
                 end = mid-1;
             }else{
                 st = mid+1;
             }
         }
    return st;     
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna