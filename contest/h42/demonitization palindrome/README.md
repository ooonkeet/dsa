It is the year 2066 and our prime minister has decided to execute the most ambitious economic reform in history. To achieve Ultimate Aesthetic Symmetry, the government has decreed that a banknote is only valid if it is a Strobogrammatic Palindrome, a number which reads the same when flipped horizontally and vertically.

Formally, a Strobogrammatic Palindrome is a number that:

Is a palindrome (reads the same forward and backward). Contains only the digits {0, 1, 8}. (digits that look identical when rotated 180 degrees). Does not have leading zeros.

For example, 1, 8, 11, 88, 101, 818, 1881 are valid bank notes. On the other hand, 77 (wrong digits), 121 (wrong digits), 10 (not a palindrome), are not valid denominations. Note that 0 is not a valid denomination.

Because carrying too much cash is illegal in 2066, a citizen can carry a maximum of four banknotes (including duplicates). 
Given N, find if it is possible to form a total amount of N using 4 or fewer Strobogrammatic Palindromes. Output one such combination of notes, or report that it is impossible.

Input

The first line contains a single integer t (1≤t≤20) — the number of test cases.

Each testcase contains a single integer N (1≤N≤1012) — the target amount which needs to be formed.

Output

If it is impossible to form the given amount, output a single integer "-1" (without quotes).

Otherwise, output a single integer k (1≤k≤4) the number of bank notes used. On the next line output k integers representing the denominations used. If there are multiple possible answers, you may output any one of them.

Example

Input

5

8

16

15

2000

121

Output

1

8

2

8 8

-1

3

1 888 1111

4

1 1 8 111
