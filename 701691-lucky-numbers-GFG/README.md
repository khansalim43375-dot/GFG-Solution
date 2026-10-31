# [Lucky Numbers](https://www.geeksforgeeks.org/problems/lucky-numbers2911/1)
## Medium
Given an integer n, determine if it is a Lucky Number.
Lucky numbers are identified using a elimination process on the infinite sequence of natural numbers (1, 2, 3, 4, ...):&nbsp; &nbsp;1. Remove every 2nd number from the sequence.&nbsp; &nbsp;2. From the remaining sequence, remove every 3rd number.&nbsp; &nbsp;3. From the remaining sequence, remove every 4th number,&nbsp;and so on...
This continues indefinitely.&nbsp;Return true if n survives the elimination process (is a lucky number). Otherwise, return false.
Examples :
Input: n = 5
Output: false
Explanation: 5 is not a lucky number as it gets deleted in the second iteration.

Input: n = 19
Output: true
Explanation: 19 is a lucky number because it does not get deleted throughout the process.
Constraints:1&nbsp;≤ &nbsp;n ≤ &nbsp;108