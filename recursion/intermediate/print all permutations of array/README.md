                                            f(0,[],{*,*,*})
                                                  |       
                       -----------------------------------------------------------------------------------------------
                       |                                         |                                                   |
                   f(1,[1],{.,*,*})                       f(2,[2],{*,.,*})                                    f(3,[3],{*,*,.})
                       |                                         |                                                   |
            -------------------------                    ------------------------                       --------------------------
            |                       |                    |                      |                       |                        |
    f(2,[1,2],{.,.,*})      f(3,[1,3],{.,*,.})     f(1,[2,1],{.,.,*})     f(3,[2,3],{*,.,.})     f(1,[3,1],{.,*,.})     f(2,[3,2],{*,.,.})
            |                       |                    |                      |                       |                        |
    f(3,[1,2,3],{.,.,.})   f(2,[1,3,2],{.,.,.})   f(3,[2,1,3],{.,.,.})   f(1,[2,3,1],{.,.,.})    f(2,[3,1,2],{.,.,.})   f(1,[3,2,1],{.,.,.})

The last children denotes the permutation subset of the array = [1,2,3].

{} -> contains the map where

     '.' denotes 'contains' or '1'.

     '*' denotes 'not contains' or '0'.
[] -> collects the elements from array and permutes it.

TIME COMPLEXITY = O(n*n!)
where n! refers to all permutations and n is for the 'for loop' iterations.

SPACE COMPLEXITY = O(n) + O(n) , auxiliary space = O(n)
O(n) extra for storing the map or frequency array.

Array = [1,2,3] , length = 3

Permutations = 3! = 6 

    -> [1, 2, 3]

    -> [1, 3, 2]

    -> [2, 1, 3]

    -> [2, 3, 1]

    -> [3, 1, 2]

    -> [3, 2, 1]