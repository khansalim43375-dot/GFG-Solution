# [Flatten Binary Tree to Linked List](https://www.geeksforgeeks.org/problems/flatten-binary-tree-to-linked-list/1)
## Medium
Given a binary tree, flatten the tree into a Linked list:The linked list should use the same Node class where the right child pointer points to the next node in the list and the left child pointer is always null.The linked list nodes should be in the same order as a preorder traversal of the binary tree.Examples:Input: root[] = [1, 2, 5, 3, 4, 6]
Output: [1, 2, 3, 4, 5, 6]  Explanation: After flattening, the tree looks like:     1
      \
       2
        \
         3
          \
           4
            \ 
             5               \               6Here, left of each node points to NULL and right contains the next node in preorder.The inorder traversal of this flattened tree is 1 2 3 4 5 6.Input: root[] = [1, 3, 4, 2, 5]

Output: [1, 3, 4, 2, 5] 
Explanation: After flattening, the tree looks like:
     1
      \
       3
        \
         4
          \
           2
            \ 
             5 
Here, left of each node points to NULL and right contains the next node in preorder.The inorder traversal of this flattened tree is 1 3 4 2 5.