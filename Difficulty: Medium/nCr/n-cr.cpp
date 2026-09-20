class Solution {
  public:
    int nCr(int n, int r) {
        // code here
        if(r > n) return 0;
        long long ans = 1;
        
        r = min(r,n-r);
        for(int x = 1; x <= r; x++){
            
            ans = (__int128)ans*(n - x + 1)/x;
        }
    return ans;    
    }
};