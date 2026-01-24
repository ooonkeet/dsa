Suppose you are given a token array having elements like this:

token = [100,200,300,400] - I sorted it because its first step.

and an initial power is given , Power = 200.

Now my initial score = 0.

Link - https://leetcode.com/problems/bag-of-tokens/description/

Rated - Medium

Topics - Array, Two Pointers, Greedy, Sorting.

    --------------------------------------------------------------------------------------------------------------
    |    Run a while loop such that i<=j,                                                                        |
    |                                                                                                            |
    |    If power>=token[i]                                                                                      |
    |        power=power-token[i]                                                                                |
    |        score=score+1                                                                                       |
    |        maxScore=maximum of score and maxScore                                                              |
    |        i++                                                                                                 |
    |                                                                                                            |
    |    If score>=1                                                                                             |
    |        power=power+token[j]                                                                                |
    |        score=score-1                                                                                       |
    |        j--                                                                                                 |
    |                                                                                                            |
    |    If no condition matches                                                                                 |
    |        break out from the loop                                                                             |
    |                                                                                                            |
    |    At the end return maxScore                                                                              |
    |                                                                                                            |
    |                                                                                                            |
    |    Here i and j are left right right pointers suppose,                                                     |
    |                                                                                                            |
    |        i points at the start of array                                                                      |
    |                                                                                                            |
    |        j points at the end of array                                                                        |
    |                                                                                                            |
    |    maxScore is the variable used and init at first to 0,to store the maximum score one can obtain          |
    |                                                                                                            |
    |   meanwhile score is also initialised to 0, which points the current score which is obtained by operations.|
    --------------------------------------------------------------------------------------------------------------

Time Complexity:

    - Sorting the tokens takes O(n log n), where n is the number of tokens.
    
    - The while loop runs at most n times because each iteration either increments `i` or decrements `j`, moving through the         array once.
    
    - Therefore, the overall time complexity is dominated by the sorting step, resulting in O(n log n).


Space Complexity:

    - The sorting operation typically requires O(1) or O(n) space depending on the sorting implementation (standard sort in             C++ is usually in-place, so O(1) auxiliary space).
    
    - The additional variables (`i`, `j`, `maxScore`, `score`, `power`) use constant space.
    
    - Hence, the overall space complexity is O(1) (ignoring input storage), or O(n) if considering the input storage.


In summary:

    Time complexity: O(n log n)
    
    Space complexity: O(1) (or O(n) if considering input storage)
