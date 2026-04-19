At the Institute of Number Theory, two research labs — Lab A and Lab B — are conducting experiments. The institute has received N
 experimental modules. Each module contains two measurement values.

For the i-th module, the two values are ai and bi. For each module, exactly one value must be sent to Lab A and the other value must be sent to Lab B.

After all modules are assigned:

Let X be the greatest common divisor (GCD) of all values received by Lab A.

Let Y be the greatest common divisor (GCD) of all values received by Lab B.

The combined research output of the institute is defined as output=lcm(X,Y)

Find the maximum possible output.

Input:

The first line contains a single integer N (1≤N≤50).

Each of the next N lines contains two integers ai and bi (1≤ai,bi≤109).

Output:

Print the maximum possible research output.

Examples

Input
2
2 15
10 6

Output
10

Input
4
6 10
15 3
8 12
9 6

Output
3

Note
For the first input :-

One optimal move is to send the value 2 to Lab A and the value 15 to Lab B from the first module, and send the value 6 to Lab A and the value 10 to Lab B from the second module.

Then, the greatest common divisor of all integers from Lab A will be 2, and the greatest common divisor of all integers from Lab B will be 5.

The output will be lcm(2,5)=10.
