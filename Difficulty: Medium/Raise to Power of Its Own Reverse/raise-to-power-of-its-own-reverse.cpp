class Solution {
  public:
    int reverseExponentiation(int n) {
        // code here
        if(n == 10)
            return 10;
        long long ans = 1,b = n,a = n;    
        while( a != 0){
            
            if(a % 2 == 1){
                ans *= b;
            }    
            
            b = b*b;
            a /= 2;
        }
    return ans;    
    }
};