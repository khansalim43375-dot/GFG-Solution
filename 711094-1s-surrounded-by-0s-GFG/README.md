# [1s Surrounded by 0s](https://www.geeksforgeeks.org/problems/1s-surrounded-by-0s/1?utm_source=chatgpt.com)
## Medium
Given a binary matrix grid[][], find the total count of all cells containing 1 that are unable to move out of the grid through a path of adjacent 1s.Adjacency means you can only move in four directions: Up, Down, Left, and Right.Assume that the space immediately outside the grid is an open path. Any 1 located directly on the outer boundary of the grid (first row, last row, first column, or last column) can immediately step out, and any 1 connected to it can follow and also step out of the grid.Examples:Input: grid[][] = [[0, 0, 0, 0], [1, 0, 1, 0], [0, 1, 1, 0], [0, 0, 0, 0]]
Output: 3
Explanation: The highlighted cells represent the land cells. Input: grid[][] = [[1, 1, 0, 0, 0, 1], [0, 1, 1, 0, 1, 0], [0, 0, 0, 1, 1, 0], [0, 0, 0, 1, 1, 0], [0, 1, 0, 1, 0, 0], [1, 1, 0, 0, 0, 1]]
Output: 6
Explanation: The highlighted cells represent the land cells.