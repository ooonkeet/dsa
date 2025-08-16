                                                                                                                   f(0,[])
                                                                                                                     ↑↓ 
                                                -----------------------------------------------------------------------------------------------------------------------
                                                ↑↓                                                                   ↑↓                                              ↓↑ 
                                             f(1,[1])                                                             f(2,[2])                                         f(5,[3])
                                                ↑↓                                                                   ↑↓                                              ↓↑
                                --------------------------------                            ----------------------------------------------                           ↓↑               
                                ↑↓                            ↓↑                            ↑↓                                          ↓↑                           ↓↑
                            f(2,[2,1])                     f(5,[3,1])                  f(3,[2,2])                                   f(5,[3,2])                     f(6,[3,3])
                                ↑↓                            ↑↓                            ↑↓                                          ↓↑
                    ----------------------------              ↓↑                 -------------------------                              ↓↑
                    ↑↓                        ↓↑              ↓↑                 ↑↓                     ↓↑                              ↓↑
               f(3,[2,2,1])              f(5,[3,2,1])     f(6,[3,3,1])     f(4,[2,2,2])             f(5,[3,2,2])                   f(6,[3,3,2])
                    ↑↓                        ↓↑                                 ↑↓                     ↓↑
          -----------------------             ↓↑                                 ↑↓                     ↓↑
          ↑↓                   ↓↑             ↓↑                                 ↑↓                     ↓↑
    f(4,[2,2,2,1])      f(5,[3,2,2,1])   f(6,[3,3,2,1])                    f(5,[3,2,2,2])          f(6,[3,3,2,2])
          ↑↓                   ↓↑                                                ↑↓
    f(5,[3,2,2,2,1])    f(6,[3,3,2,2,1])                                  f(6,[3,3,2,2,2])
          ↑↓
    f(6,[3,3,2,2,2,1])

In this program we print different sub sets of an array, here each level of the tree - each branch describes different
subsets enclosed in braces, where its left contains the index traversed in next iteration of the function.

In this program the array is 
* first sorted before passing it to the function,
* no repetitions of same subset is entertained, therefore we get different sub sets using recursion,
* each subset is lexicographically arranged, which is ensured by sorting the array.

In this diagram, we see arr = [1,2,2,2,3,3]

* 0th level subset -> []
* 1st level subset -> [1] , [2] , [3]
* 2nd level subset -> [1,2] , [1,3] , [2,2] , [2,3] , [3,3]
* 3rd level subset -> [1,2,2] , [1,2,3], [1,3,3] , [2,2,2] , [2,2,3] , [2,3,3]
* 4th level subset -> [1,2,2,2] , [1,2,2,3] , [1,2,3,3] , [2,2,2,3] , [2,2,3,3]
* 5th level subset -> [1,2,2,2,3] , [1,2,2,3,3] , [2,2,2,3,3]
* 6th level subset -> [1,2,2,2,3,3]

Here we see the maximum level of subsets and max content of subset is 6 which is equivalent to array size.
Therefore, we can deduce the maximum range of subset = length of array.

TIME COMPLEXITY ~ O(2^n*n) where assuming n is average length of subset. Multiplied by n because every possibility is
stored in deep copy 'ans' in program.

SPACE COMPLEXITY ~ O(2^n)*O(k) where k is average length of every subset. Auxiliary space complexity - O(n)