Sayantan hates binary string problems. To him, strings composed only of '0's and '1's are repetitive and dry. However, his latest OA consists of nothing but these strings, and he needs your help to solve this one before he gives up on the round entirely.

You are given a binary string S of length n. For any substring T, let f(T) denote the number of modes in that substring.

A character is considered a mode if it appears with the maximum frequency in the string.

If both '0' and '1' appear an equal number of times in T, then both are modes, so f(T)=2.
If one character appears more frequently than the other, there is only one mode, so f(T)=1.
For example, f("101")=1 because '1' is the unique mode, while f("01")=2 because both '0' and '1' are modes.

Sayantan's task is to calculate the total sum of f(T) over all possible substrings of S:∑1≤L≤R≤nf(S[L…R])

Help Sayantan find this sum so he can finally close his laptop and do something he actually enjoys.

Input
The first line of the input contains a single integer t (1≤t≤104) — the number of test cases.

Each test case consists of two lines:

The first line of each test case contains one integer n (1≤n≤105) — the length of the string S.
The second line contains a binary string S of length n, consisting only of the characters 0 and 1.
It is guaranteed that the sum of n over all test cases does not exceed 105.

Output
For each test case, output a single integer on a new line — the total sum of f(T) over all possible substrings S[L…R].

Example
Input
3
2
01
4
0011
5
10101

Output
4
12
21

Note
Test case 1: S = 01

f(0) = 1, as it has only 1 mode which is 0.

f(1) = 1, as it has only 1 mode which is 1.

f(01) = 2, as both 0 and 1 are modes.

Total sum = 1 + 1 + 2 = 4.
