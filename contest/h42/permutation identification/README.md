This is an interactive problem.

Daniyal has a hidden permutation p of length n, consisting of all integers from 1 to n exactly once. Your task is to determine the whole permutation.

You can ask two types of queries:

? 1 i j (1≤i<j≤n): the jury answers min(pi,pj). You can ask at most 2n queries of this type in one test case.

? 2 i (1≤i≤n): the jury answers the exact value pi. You can ask this type at most once in one test case.After you determine the permutation, print:

! p1 p2 ... pn

Input

The first line contains one integer t (1≤t≤10^4) — the number of test cases.

For each test case, the interaction starts by reading one integer n (2≤n≤2*10^4).

It is guaranteed that the sum of n over all test cases does not exceed 2⋅10^4.

Output

To ask a query, print one of the following lines:

? 1 i j
? 2 i

When you are ready to answer, print:

! p1 p2 ... pn

Interaction

After each printed query, flush the output and read the jury answer.

If your program makes an invalid query, or exceeds a query limit, the jury prints −1. In this case, your program must terminate immediately.

After printing the final answer for the current test case, continue with the next test case. Printing the final answer does not count as a query.

Remember to flush output after every printed line, for example:

fflush(stdout) or cout « flush in C++;

System.out.flush() in Java;

stdout.flush() in Python.

Examples

Input

1
2

2

Output


? 2 1

! 2 1

Input

1
3

1

2

1
Output


? 1 2 3

? 2 3

? 1 1 2

! 3 1 2

Note:

In the first example, n=2, the hidden permutation is p=[2,1]. The solution asks for p1 using a Type 2 query, gets 2, and outputs the answer [2,1].

In the second example, n=3, the hidden permutation is p=[3,1,2]. The answers in the input correspond to the printed queries in order.

? 1 2 3: min(p2,p3)=min(1,2)=1.

? 2 3: p3=2.

? 1 1 2: min(p1,p2)=min(3,1)=1.

! 3 1 2: the permutation is correctly guessed.
