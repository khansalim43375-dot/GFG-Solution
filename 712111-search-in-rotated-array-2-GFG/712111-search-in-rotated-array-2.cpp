class Solution {
  public:
    bool search(vector<int>& arr, int key) {
        int n = arr.size();
        int st = 0, end = n - 1;

        while (st <= end) {
            if (arr[st] == arr[end]) {
                if (arr[st] == key) return true;  // check before discarding
                st++;
                end--;
                continue;
            }

            int mid = st + (end - st) / 2;

            if (arr[mid] == key) return true;

            if (arr[mid] >= arr[st]) {
                // left half [st..mid] is sorted
                if (key >= arr[st] && key < arr[mid]) {
                    end = mid - 1;
                } else {
                    st = mid + 1;
                }
            } else {
                // right half [mid..end] is sorted
                if (key > arr[mid] && key <= arr[end]) {
                    st = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna