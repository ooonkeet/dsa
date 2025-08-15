Suppose the original array contains arr= [3,1,2]

The recursive function would look like this

                                                         f(0,[],arr)
                                                             ↑↓
                       ---------------------------------------------------------------------------------
                      ↑↓                                                                               ↑↓ 
                   f(1,[3],arr)                                                                   f(1,[],arr)
                      ↑↓                                                                               ↑↓ 
                   ------------------------------                                         ------------------------------
                   ↑↓                          ↑↓                                        ↑↓                           ↑↓ 
             f(2,[3,1],arr)               f(2,[3],arr)                              f(2,[1],arr)               f(2,[],arr)                
                   ↑↓                          ↑↓                                        ↑↓                           ↑↓ 
             ----------------              -----------------------              --------------------            ---------------
            ↑↓              ↑↓             ↑↓                    ↑↓             ↑↓                 ↑↓           ↑↓            ↑↓ 
     f(3,[3,1,2],arr)  f(3,[3,1],arr)   f(3,[3,2],arr)      f(3,[3],arr)    f(3,[1,2],arr)    f(3,[1],arr)  f(3,[2],arr)   f(3,[],arr)

The last children of the recursion tree shows all the subsequences of the array, and it is printed in order from left to right.
This is how this recursive function works.

Time complexity - O(n*2^n), as every path array condition has 2 paths to traverse.

Space complexity - O(n) as depth of the tree is number of elements in the array, it will consume that much stack space.