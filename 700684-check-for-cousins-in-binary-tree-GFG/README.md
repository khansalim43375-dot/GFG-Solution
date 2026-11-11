# [Check for Cousins in Binary Tree](https://www.geeksforgeeks.org/problems/check-if-two-nodes-are-cousins/1)
## Medium
Given a binary tree with distinct node values and two integers a and b, check whether the nodes with values a and b are cousins.Note: Two nodes are cousins if they are at the same depth but have different parents.Examples:Input: root = [1, 2, 3], a = 2, b = 3
 
Output: falseExplanation: Here, nodes 2 and 3 are at the same level but have same parent nodes.Input: root = [1, 2, 3, 5, N, N, 4], a = 5, b = 4
 
Output: true
Explanation: Here, nodes 5 and 4 are at the same level and have different parent nodes. Hence, they both are cousins. Input: root = [10, 5, 15, 3, 7, 12, 20], a = 7, b = 12

Output: true
Explanation: Here, nodes 7 and 12 are at the same level and have different parent nodes. Hence, they both are cousins.