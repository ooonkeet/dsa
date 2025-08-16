
                                                             f(idx,target,ds)
                                                                    |
                                                             BASE CONDITION
                                           --------------------------------------------------
                                           |   if(idx==n)                                   |
                                           |       if(target==0)                            |
                                           |          ans=[store combination present in ds] |
                                           |       else                                     |
                                           |          return                                |
                                           --------------------------------------------------
                                                                      |↑
                                                                      ↓|
                                -----------------------------------------------------------------------
                                |                                                                     |
                                |{(arr[ind]<=target)}                                                 |
                                |                                                                     |
            ds[store arr[i] and | ds[remove last element arr[i]                                       |
              form combinations]|    on each step of backtracking]                                    |
                      ||        |             ↑↑                                                      |
                      ↓↓        |             ||                                                      |
                                |                                                                     |
                    f(idx,target-arr[idx],ds)                                                f(idx+1,target,ds)
                      (PICK AND NO MOVE ON)                                                 (NON PICK SO MOVE ON)

TIME COMPLEXITY - O(2^t * k) where k = average length of every combination. 

SPACE COMPLEXITY - O(k*x) 

The code is very lengthy and works very well in brute force conditions.
                  
