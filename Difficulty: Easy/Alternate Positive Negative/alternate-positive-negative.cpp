class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        vector<int> arr1;
        vector<int> arr2;

        for(int x : arr){
            
            if(x >= 0){
                arr1.push_back(x);
            }else{
               arr2.push_back(x);
            }
        }
        int n = min(arr1.size(),arr2.size());
        int i = 0;
        while(n){
            
            arr[i*2] = arr1[i];
            arr[i*2+1] = arr2[i];
            i++;
            n--;
        }
        int j = i*2;
        while(i < arr1.size()){
            arr[j] = arr1[i];
            i++;j++;
        }
        while(i < arr2.size()){
            arr[j] = arr2[i];
            i++;j++;
        }
        
        
    }
};