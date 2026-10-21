class Solution {
public:
    int cntSubarrays(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        freq[0] = 1;            // empty prefix, so subarrays starting at index 0 are counted
        int prefix = 0, count = 0;

        for (int x : nums) {
            prefix += x;
            if (freq.count(prefix - k))
                count += freq[prefix - k];
            freq[prefix]++;     // update AFTER counting
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna