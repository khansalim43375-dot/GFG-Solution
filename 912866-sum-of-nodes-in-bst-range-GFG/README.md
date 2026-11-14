# [Sum of Nodes in BST Range](https://www.geeksforgeeks.org/problems/range-sum-of-bst/1)
## Medium
Given the root of a Binary Search Tree and two integers l and r, the task is to find the sum of all nodes that lie between l and r, including both l and r.
Examples
Input: root = [22, 12, 30, 8, 20], l = 10, r = 22Output: 54Explanation: The nodes in the given Tree that lies in the range [10, 22] are [12, 20, 22]. Therefore, the sum of nodes is 12 + 20 + 22 = 54.
Input: root = [8, 5, 11, 3, 6, N, 20], l = 11, r = 15 &nbsp;
Output: 11Explanation: The nodes in the given Tree that lies in the range [11, 15] is [11]. Therefore, the sum of node is 11.
Constraints:0&nbsp;≤&nbsp;number of nodes&nbsp;≤ 1040&nbsp;≤&nbsp;node-&gt;data&nbsp;≤ 1040&nbsp;≤ l ≤ r ≤&nbsp;104