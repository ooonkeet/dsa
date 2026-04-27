The goodness of a sequence of numbers A1,A2,...,An is the number of subsequences∗ of odd length k from this sequence that has median of at most y.

Additionally, given a sequence of integers, you can perform the following operation on it:

Select any integer Ai and change it to Ai−1 or Ai+1.

You are provided a sequence consisting of n integers A1,A2,...,An and must answer q queries, where each query consists of three integers: x k y — the maximum number of operations you can perform on A, the length of a good subsequence and the maximum value of the median y for a good subsequence.

For each query you must output a single integer representing the maximum possible goodness value of the sequence, given you can perform atmost x operations on it. Since the answer may be large it must be printed modulo 1000000007,

Note that each query is independent and the operations performed in one query do not carry over.

∗ A sequence b is a subsequence of a sequence a if b can be obtained from a by the deletion of several (possibly, zero or all) element from arbitrary positions.

Input

The first line contains a single integer t (1≤t≤10^3) — the number of testcases.

The first line of each test case contains two integers n,q (1≤n≤2*10^5,1≤q≤10^4) — the number of elements in A and number of queries.

The second line of each test case contains n space separated integers A1,A2,...,An (1≤Ai≤10^9) — representing the elements of A

The follow q lines each contain 3 integers x,k,y (0≤x≤10^18,1≤k≤min(n, 100),1≤y≤10^9) — the number of operations, the length of the subsequence and maximum median for the subequence. It is guaranteed that k is an odd integer.

The sum of n and q over all testcases does not exceed 2⋅10^5 and 10^4 respectively.

Output

For each testcase, output q space separated integers, representing the answer for the ith query modulo 1000000007.

Example

Input

2

4 2

8 9 10 11

0 3 8

1 3 8

6 2

1 2 3 4 5 6

0 3 3

100 3 3

Output

0 2 

10 20 

Note

For the first testcase the following cases are possible:

For the first query with x=0, we have to use the original array. The minimum median of any subsequence of length 3 is 9. Hence, number of valid subsequences is 0.

For the second query, we perform one operation to get A=[8,8,10,11]. This array has two unique subsequences with median 8: [8,8,10] and [8,8,11].
