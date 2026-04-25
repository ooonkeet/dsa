In the IT class, there are n students. The social network of the class contains n−1 friendship bonds, forming a tree.

Each student i wears a custom class t-shirt with an integer ai printed on it.

Daniyal, the class matchmaker, wants to "ship" (pair up) two distinct students, x and y. However, for the ship to be successful, the two students must have some common ground. Specifically, the greatest common divisor of the numbers on their shirts must be strictly greater than 1.

Daniyal is also a forward-thinker. He knows that if the couple ever breaks up, having them too close in the friend group will cause massive drama. Conveniently, the further apart they are in the social network, the longer the relationship survives. Therefore, the time this relationship will last (in months) is exactly equal to the total number of students on the simple friendship path between them, including the shipped couple themselves.

Your task is to help Daniyal find the maximum possible time a relationship will last among all successful ships.

Input

The first line contains one integer n (1≤n≤200,000) — the number of students in the IT class.

The second line contains n integers a1,a2,…,an (1≤ai≤200,000) — the numbers written on the students' shirts.

Then n−1 lines follow, each containing two integers u and v (1≤u,v≤n, u≠v) denoting a direct friendship bond connecting student u with student v. It is guaranteed that these bonds form a valid tree.

Output

If there is no pair of distinct students that can form a successful ship, print 0. Otherwise, print the maximum time a relationship will last among all valid pairs.

Examples

Input

3

2 3 4

1 2

2 3

Output

3

Input

3

2 3 4

1 3

2 3

Output

2

Input

3

1 1 1

1 2

2 3

Output

0

Note

In the first example, Daniyal can ship student 1 (a1=2) and student 3 (a3=4). Their common ground is gcd(2,4)=2>1.

The friendship path between them is 1–2–3, which includes 3 students. Therefore, the relationship will last for 3 months.

In the second example, the valid ship is again student 1 and student 3. However, the friendship path is a direct 1–3 connection, including 2 students. The relationship will last for 2 months.

In the third example, no two students share a common ground strictly greater than 1 (gcd(1,1)=1), so no successful ship can be formed, and the answer is 0.


