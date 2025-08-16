                                                           f(0,[3,1,2],0)
                                                                  |
                               ----------------------------------------------------------------------
                               |                                                                    |
                          f(1,[3,1,2],3)                                                    f(1,[3,1,2],0)
                               |                                                                    |
                   ----------------------------------                                 -------------------------------------------   
                   |                                |                                 |                                         | 
           f(2,[3,1,2],4)                      f(2,[3,1,2],3)                  f(2,[3,1,2],1)                              f(2,[3,1,2],0)     
                   |                                |                                 |                                         |
           ----------------                  -------------------             ----------------------                  ----------------------    
           |              |                  |                 |             |                    |                  |                    |
    f(3,[3,1,2],6)   f(3,[3,1,2],4)    f(3,[3,1,2],5)    f(3,[3,1,2],3)   f(3,[3,1,2],3)    f(3,[3,1,2],1)    f(3,[3,1,2],2)       f(3,[3,1,2],0)
Expected output = [0 1 2 3 3 4 5 6]
in sorted order.

If an array has n elements , number of subsets of the array is 2^n.

In this problem we need to take out sum of every subset arrays.
The array is = [3 1 2], therefore the subsets and their sums are as follows:

[] -> 0

[3] -> 3

[3 1] -> 4

[3 1 2] -> 6

[3 2] -> 5

[1] -> 1

[2] -> 2

[1 2] -> 3

no of elements in array = 3

∴ no of subsets = 2^3 = 8.

TIME COMPLEXITY ~ O(2^n) EXPECTED

SPACE COMPLEXITY ~ O(2^n + 2^n log(2^n))
[extra space for sorting] (in fact both tc and sc would stand the same)
