class Solution {
  public:
    string findNth(string& n) {
        if(n == "0") return "0";
     
    string res = "";

       while (!(n.size() == 1 && n[0] == '0')) {
           int rem = 0;      
           string q = "";    

           for (char c : n) {
               int cur = rem * 10 + (c - '0');   
               q.push_back('0' + cur / 9);       
               rem = cur % 9;                    
           }

           size_t p = q.find_first_not_of('0');
           n = (p == string::npos) ? "0" : q.substr(p);

           res.push_back('0' + rem);
       }
       reverse(res.begin(), res.end());
           return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna