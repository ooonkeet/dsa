Two things are given,

Color array = [a,a,b,a,c,b,b,a,c,c,a,b]

Time taken = [1,2,4,5,2,1,3,6,8,1,2,3]

Now the conditions are :-
-
- Colors are represented by letters.
- No two adjacent colors / letters can be same.
- You need to eliminate the similar characters on basis of time taken to burst.
- You need to remove the character which takes less time to burst.
- You have to return the total time taken to remove the similar colors and make the rope unique.

GOOD LUCK
-

If the above example is considered

----------------------------------------------
| a |  a |  b |  a |  c |  b |  b |  a |  c |  c |  a |  b |
|---|----|---|----|----|----|----|---|----|---|----|---|
|1  | 2  |4 |  5 |  2 |  1 |  3 |  6 |  8 |  1  | 2 |  3 |
|R |  S |  S |  S |  S |  R |  S |  S |  S |  R |  S |  S |

The R ones are removed as it is adjacent and small meanwhile the S remains safe.

Basic algorithm

    time = 0, prev = 0
    while(str.length) iterate
        if not first element & curr element!=prev element
            prev=0 -----> this will ensure that the curr element is new
        curr = burst time
        time = time + minimum(curr,prev) ---->increments minimum burst time
        prev = maximum(stored prev,curr) ---->if same color present in prev it stores the max burst time
    time ----> result

Link - https://leetcode.com/problems/minimum-time-to-make-rope-colorful/description/

Rated - Medium

Topics - Array ,String ,Dynamic Programming ,Greedy.

The time complexity of this solution is O(n), where n is the length of the input string 'colors'. 
The algorithm iterates through the string once, performing constant-time operations in each iteration.

The space complexity is O(1) because the algorithm uses only a fixed amount of additional space 
(variables 'time', 'prev', and 'curr'), regardless of the input size. 
It does not allocate any extra space proportional to the input size.
