class Solution {
public:
    long long mergeCount(vector<int>& arr, vector<int>& temp, int left, int right) {
        if (left >= right) return 0;

        int mid = left + (right - left) / 2;
        long long count = 0;

        count += mergeCount(arr, temp, left, mid);
        count += mergeCount(arr, temp, mid + 1, right);

        int i = left, j = mid + 1, k = left;

        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) {
                temp[k++] = arr[i++];
            } else {
                // arr[i..mid] are all greater than arr[j]
                count += (mid - i + 1);
                temp[k++] = arr[j++];
            }
        }
        while (i <= mid) temp[k++] = arr[i++];
        while (j <= right) temp[k++] = arr[j++];

        for (int p = left; p <= right; p++) arr[p] = temp[p];

        return count;
    }
    long long inversionCount(vector<int>& arr) {
        int n = arr.size();
        vector<int> temp(n);
        return mergeCount(arr, temp, 0, n - 1);
    }
};



// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna