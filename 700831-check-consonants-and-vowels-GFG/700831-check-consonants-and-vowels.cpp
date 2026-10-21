class Solution {
  public:
    void checkString(string& s) {
        int v = 0;
        int c = 0;

        // code here
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                v++;
            }else{
                c++;
            }  
        }
        if(c == v) 
            cout<< "Same"<<endl;
        else if( c < v){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna