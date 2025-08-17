                                  [1,2,3]
                                     |
               ----------------------------------------------
               |(1,1)           (1,2)|                 (1,3)|
            [1,2,3]               [2,1,3]                [3,1,2]
               |                     |                      |
          -----------          ------------           ------------
          |(2,2)    |(2,3)     |(2,2)     |(2,3)      |(2,2)     |(2,3)
       [1,2,3]   [1,3,2]    [2,1,3]    [2,3,1]     [3,2,1]    [3,1,2]
          |  (3,3)  |          |  (3,3)   |           |   (3,3)  |
       [1,2,3]   [1,3,2]    [2,1,3]    [2,3,1]     [3,2,1]    [3,1,2]

The elements are swapped in this approach and the bracket consists of indexes which are swapped.
We can see systematic swapping where in the first layer 1st index is kept constant and interchanged, followed by the
second index and there on, the pattern is similar. It reduces extra space by avoiding freq array or temporary storage
used in previous approach.

TIME COMPLEXITY ~ O(n!*n) where n! is number of combinations and n is for looping.

SPACE COMPLEXITY ~ O(n) here ideal auxiliary space is taken as alterations are done on passed array.
