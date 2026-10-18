class Solution {
  public:
    vector<int> smallestSubseg(vector<int>& arr) { 
        // code here 
        unordered_map<int, int> m1;
        unordered_map<int, vector<int>> m2;
        int mxfreq = 0;
        
        for(int x : arr){
            m1[x]++;
            mxfreq = max(mxfreq,m1[x]);
        }
        
        for(int i = 0; i < arr.size(); i++){
            
            if(!m2.count(arr[i]) && m1[arr[i]] == mxfreq){
                m2[arr[i]].push_back(i);
            }
            if(m2.count(arr[i])){
                m1[arr[i]]--;
                if(m1[arr[i]] == 0){
                    m2[arr[i]].push_back(i);
                }
            }
        }
        int i = 0, j = 0, minlen = INT_MAX;
        for (const auto& p : m2) {          // const auto& avoids copying the vector
            int l = p.second[0], r = p.second[1];
            if (r - l < minlen || (r - l == minlen && l < i)) {
                minlen = r - l;
                i = l;
                j = r;
            }
        }
        vector<int> ans;
        for(int k = i; k <= j; k++){
            ans.push_back(arr[k]);
        }
            
        
    return ans;    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna