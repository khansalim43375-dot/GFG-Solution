class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // code here
        int D = b*b - 4*a*c;
        if(D < 0)
            return {-1};
        int x = floor((-b - sqrt(D))/(2*a));
        int y = floor((-b + sqrt(D))/(2*a));
        
        vector<int> ans = {x,y};
        sort(ans.rbegin(),ans.rend());
        return ans;
        
    }
};