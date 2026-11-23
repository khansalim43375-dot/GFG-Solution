# [Undirected Graph Cycle](https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1)
## Medium
Given an undirected graph with V vertices, represented by an adjacency list adj[][], where adj[u] contains all vertices adjacent to vertex u, check whether the graph contains a cycle.Note: The graph may have multiple connected components.Examples:Input: adj[][] = [[1, 2], [0, 2], [0, 1, 3], [2]]
Output: true
Explanation: 
1 -&gt; 2 -&gt; 0 -&gt; 1 is a cycle.
Input: adj[][] = [[1], [0, 2], [1, 3], [2]]
Output: false
Explanation: 
No cycle in the graph.
