# [Median of 2 Sorted Arrays of Same Size](https://www.geeksforgeeks.org/problems/median-of-2-sorted-arrays-of-same-size/1)
## Hard
Given two sorted arrays a[]&nbsp;and&nbsp;b[]&nbsp;of equal size, find and return the&nbsp;median&nbsp;of the combined array after merging them into a single sorted array.Examples:Input: a[] = [-5, 3, 6, 12, 15], b[] = [-12, -10, -6, -3, 4]
Output: 0
Explanation: The merged array is [-12, -10, -6, -5, -3, 3, 4, 6, 12, 15]. So the median of the merged array is (-3 + 3) / 2 = 0.Input: a[] = [2, 3, 5, 7], b[] = [10, 12, 14, 16]Output: 8.5Explanation: The merged array is [2, 3, 5, 7, 10, 12, 14, 16]. So the median of the merged array is (7 + 10) / 2 = 8.5.Input: a[] = [-5], b[] = [-6]
Output: -5.5Explanation: The merged array is [-6, -5]. So the median of the merged array is (-6 + -5) / 2 = -5.5.Constraints:&nbsp;1 ≤ a.size(), b.size() ≤ 106-106&nbsp;≤ a[i], b[i] ≤ 106