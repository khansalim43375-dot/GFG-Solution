class Solution {
  public:
    double getAngle(string& s) {
        int hour = stoi(s.substr(0,2))% 12;
        int mint = stoi(s.substr(3, 2));
        
        
        double hourDist = double(5*hour) + double(mint)/12;
        double angle1 = abs(hourDist-mint)*6;
        double angle2 = abs(360-angle1);
        double minAngle = min(angle1, angle2);
        return minAngle;
        
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna