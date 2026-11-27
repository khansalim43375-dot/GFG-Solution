# [Bipartite Graph](https://www.geeksforgeeks.org/problems/bipartite-graph/1)
## Medium
Given an undirected graph represented by an adjacency list adj[][], check whether the graph is bipartite or not.A&nbsp;bipartite graph&nbsp;is a graph whose vertices can be colored using two colors such that no two adjacent vertices have the same color. Equivalently, the vertices can be divided into two disjoint sets such that:Every edge connects a vertex from one set to a vertex in the other set.No edge connects two vertices within the same set.Examples:Input: adj[][] = [[1], [0, 2], [1]]

Output: true
Explanation: The vertices can be colored using two colors such that every pair of adjacent vertices has different colors.Input: adj[][] = [[3, 2], [2], [0, 1, 3], [0, 2]]Output: false Explanation: The vertices form a triangle, so it is not possible to color them using two colors without two adjacent vertices having the same color.