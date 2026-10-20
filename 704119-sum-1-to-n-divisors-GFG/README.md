# [Sum 1 to n Divisors](https://www.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1)
## Easy
Given a positive integer n, The task is to find the value of Σi F(i) where i is from 1 to n and function F(i)&nbsp;is defined as the sum of all divisors of i.Examples:Input: n = 4
Output: 15
Explanation:
F(1) = 1
F(2) = 1 + 2 = 3
F(3) = 1 + 3 = 4
F(4) = 1 + 2 + 4 = 7F(1) + F(2) + F(3) + F(4) = 1 + 3 + 4 + 7 = 15Input: n = 5
Output: 21
Explanation:
F(1) = 1
F(2) = 1 + 2 = 3
F(3) = 1 + 3 = 4
F(4) = 1 + 2 + 4 = 7
F(5) = 1 + 5 = 6F(1) + F(2) + F(3) + F(4) + F(5) = 1 + 3 + 4 + 7 + 6 = 21Input: n = 1
Output: 1
Explanation: F(1) = 1