We discussed the recursive fibonacci in recursion section, so we skip its discussion.

Now we move to dynamic programming approach,

                                     f(5)
                                      | {5}
                            ------------------------
                        {3} |                      | {2}
                          f(4)                   f(3)
                            | {3}
                      -------------
                  {2} |           | {1}
                     f(3)        f(2)
                      | {2}
                ------------
            {1} |          | {1}
              f(2)        f(1)
                | {1}
          ------------
      {1} |          | {0}
        f(1)       f(0) 

We can see f(1),f(2),f(3) repeating in recursion, this is called an **overlapping subproblem**.

So we can optimize it by storing their values in another data structure (array, map, table). This technique is called, 
__memoization__ (storing subproblems in some map/table).

    dp[n+1](-1)
    f(n,dp){
        if(n<=1)
            return n
        if(dp[n]!=-1)
            return dp[n]
        return dp[n]=f(n-1)+f(n-2)
    }
The changes to be incorporated at recursive program.
* Declare an empty vector of size 'n+1', initializing it's each element by -1.
* Check if previously stored sub problem is found in 'dp', if found return it, reducing further recursion calls.
* return func(n-1)+func(n-2) by storing it in dp[n].

In the recursion tree example,

the dp array would look like, 

| idx    | 0   |1    |2    |3    |4    |5    | 
|--------|-----|-----|-----|-----|-----|-----|
| __dp__ |-1   |-1   |1    |2    |3    | 5   |

------------------------------------------------------------------

__TABULATION technique__

To change from memoization to tabulation technique, we need to incorporate few changes,

* Initialize dp[0] to '0' and dp[1] t '1'.
* iterate from 2 to n and store the sum of dp[iteration - 1] and dp[iteration - 2].

        f(n){
            dp[n+1](-1)
            dp[0]=0
            dp[1]=1
            for(i -> 2 to n)
                dp[i]=dp[i-1]+dp[i-2]
        }

In this code, the time complexity is O(n) and space complexity is O(n) as it involves an array 'dp'.

To improve the space complexity, we can improve the code,

We can observe a pattern in this code

In the dp array box, we see

| idx    |0|1| 2   | 3  | 4  | 5 |
|--------|-|-|-----|----|----|---|
| __dp__ |0|1| -1  | -1 | -1 | -1 |
|        |i-2|i-1| i   |    |    |   |

| idx    |0| 1   | 2  | 3 | 4 | 5  |
|--------|-|-----|----|---|--|----|
| __dp__ |0| 1   | 1  | -1 | -1 | -1 |
||| i-2 | i-1 | i |  |    |

| idx    |0|1| 2   | 3   | 4   | 5 |
|--------|-|-|-----|-----|-----|---|
| __dp__ |0|1| 1   | 2   | -1  | -1 |
|        ||| i-2 | i-1 | i   |   |

| idx    |0|1| 2 | 3   | 4   | 5  |
|--------|-|-|---|-----|-----|----|
| __dp__ |0|1| 1 | 2   | 3   | -1 |
|        |||   | i-2 | i-1 | i  |

| idx    |0|1| 2 | 3 | 4   | 5   | 6       |
|--------|-|-|---|---|-----|-----|---------|
| __dp__ |0|1| 1 | 2 | 3   | 5   | __oob__ |
|        |||   |   | i-2 | i-1 | i       |

The pattern we see is,
* dp[ i ] -> points to 2nd index
* dp[ i ] -> dp[ i - 1 ] + dp[ i - 2 ]
* dp[ i - 1 ] -> dp[ i - 2 ]
* dp[ i - 1 ] -> dp[ i ]
* dp[ i - 1 ] -> stores the desired result in last iteration

Therefore, we can use a tweaking in previous code which will reduce the space complexity,

    f(){
        prev2=0
        prev1=1
        for(i -> 2 to n){
            curr=prev2+prev1
            prev2=prev1
            prev1=curr
        }
        print prev
    }

In this approach we don't need to use any array and the purpose is served within 3 variables.

------------------------------------------------------------------------

* __Recursion approach__

Time Complexity:
- The recursive approach computes Fibonacci(n) by calling Fibonacci(n-1) and Fibonacci(n-2).
- This results in a binary recursion tree with many overlapping subproblems.
- The total number of function calls grows exponentially with n.
- Specifically, the time complexity is approximately O(2^n).

Space Complexity:
- The space complexity is determined by the maximum depth of the recursion stack.
- Since each recursive call adds a new frame until the base case is reached, the maximum depth is n.
- Therefore, the space complexity is O(n).

In summary:
- Time complexity: O(2^n)
- Space complexity: O(n)
-------------------------------------------------------------------------------
* __Memoization technique__

Time Complexity:
- Each Fibonacci number from 0 to n is computed once.
- The recursive calls are memoized, so subsequent calls for the same value of n are retrieved in constant time.
- Therefore, the overall time complexity is O(n).

Space Complexity:
- The vector `dp` of size n+1 is used to store computed Fibonacci values, contributing O(n) space.
- The recursion stack depth is at most O(n) in the worst case due to recursive calls.
- Hence, the total space complexity is O(n).

In summary:
- Time Complexity: O(n)
- Space Complexity: O(n)
---------------------------------------------------------------------------------
* __Tabulation technique__

Time Complexity:
- The loop runs from 2 to n, so it executes (n - 1) times.
- Each iteration performs a constant amount of work (addition and variable updates).
- Therefore, the overall time complexity is O(n).

Space Complexity:
- The code uses a fixed number of variables (prev2, prev, curr), regardless of n.
- No additional data structures are used that grow with n.
- Hence, the space complexity is O(1).

In summary:
Time complexity: O(n)
Space complexity: O(1)
------------------------------------------------------------------------------------