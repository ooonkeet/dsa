Here two parameters are given

startValue and Result

Only 2 operations are allowed to reach target from start:-
-
- -1 [Subtract by 1]
- *2 [Multiplied by 2]

Suppose start = 2, target = 3.

we start by taking the target and backtrack.

- 3+1 = 4
- 4/2 = 2 ---> start

Remember
-
- target should be greater than start,
- if somehow target is less than start, we add 1 to the target and get the start value
- if target is odd we add 1 to it, until we get start.
- if target is event we divide it by 2, until we get start.
- we recursively perform the 'division' and 'addition' by adding 1 operation one by one.

start = 3, target = 10.

- 10/2=5
- 5+1=6
- 6/2=3 ---> start

Link - https://leetcode.com/problems/broken-calculator/description/

Rated - medium

Topics - Math, Greedy

Time Complexity:
- In the worst case, each recursive call either halves the target (when target is even) or increments it by one (when target is odd).
- When target is even, the function makes a recursive call with target/2, effectively reducing the target significantly.
- When target is odd, it makes a recursive call with target+1, which then becomes even in the next step, allowing halving.
- The number of recursive calls is approximately proportional to the number of times you can halve the target until it becomes less than or equal to startValue, plus some additional steps for odd targets.
- Overall, the time complexity is roughly O(log(target)) in the worst case, since halving reduces the target exponentially.

Space Complexity:
- The space complexity is determined by the maximum depth of the recursion stack.
- Since each recursive call reduces the target (either directly or after an increment), the maximum recursion depth is proportional to the number of recursive calls, which is O(log(target)) in the worst case.
- Therefore, the space complexity is O(log(target)) due to the recursion stack.

In summary:
- Time complexity: O(log(target))
- Space complexity: O(log(target))