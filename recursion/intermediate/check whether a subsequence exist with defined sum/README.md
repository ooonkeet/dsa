

                                                                                f(0,[],arr,0,3)
                                                                                    ↑↓(true) == exists
                   --------------------------------------------------------------------------------------------------------------------
                   ↑↓(true)                                                                                                          ↑↓ 
            f(1,[3],arr,3,3)                                                                                                   f(1,[],arr,0,3)
                  ↑↓(true)                                                                                                           ↑↓ 
               --------------------------------------------------------                                                 ----------------------------------------
               ↑↓(false)                                       (true)↑↓                                                 ↑↓                                    ↑↓ 
        f(2,[3,1],arr,4,3)                                     f(2,[3],arr,3,3)                                   f(2,[1],arr,1,3)                      f(2,[],arr,0,3)                
               ↑↓(false)                                             ↑↓(true)                                           ↑↓                                    ↑↓ 
         ---------------------------                       ---------------------------                         -----------------------                    ------------------------
         ↑↓(false)         (false)↑↓                       ↑↓(false)          (true)↑↓                         ↑↓                   ↑↓                   ↑↓                    ↑↓ 
    f(3,[3,1,2],arr,6,3)     f(3,[3,1],arr,4,3)     f(3,[3,2],arr,5,3)      f(3,[3],arr,3,3)           f(3,[1,2],arr,3,3)   f(3,[1],arr,1,3)    f(3,[2],arr,2,3)     f(3,[],arr,0,3)

This cripples the time complexity by introducing true and false, when true is incurred the recursion stops as only in this program we need to check whether any subseq exists having the target sum.