                                                     f(0,[],0,3) == 2 subsequences
                                                         ↑↓(1+1)
                   ---------------------------------------------------------------------------------
                   ↑↓(1)                                                                       (1)↑↓ 
               f(1,[3],3,3)                                                                   f(1,[],0,3)
                  ↑↓(0+1)                                                                          ↑↓(1+0) 
               ------------------------------                                         ------------------------------
               ↑↓(0)                    (1)↑↓                                         ↑↓(1)                    (0)↑↓ 
         f(2,[3,1],4,3)               f(2,[3],3,3)                              f(2,[1],1,3)                 f(2,[],0,3)                
               ↑↓(0+0)                     ↑↓(0+1)                                   ↑↓(1+0)                      ↑↓(0+0) 
       --------------------              -----------------------              --------------------            ---------------
       ↑↓(0)          (0)↑↓              ↑↓(0)             (1)↑↓              ↑↓(1)          (0)↑↓            ↑↓(0)     (0)↑↓ 
    f(3,[3,1,2],6,3)  f(3,[3,1],4,3) f(3,[3,2],5,3)      f(3,[3],3,3)    f(3,[1,2],3,3)    f(3,[1],1,3)  f(3,[2],2,3)   f(3,[],0,3)

Left hand of tree recursion which shows when element is taken is stored in a variable l and right hand of tree recursion which shows when element is not taken is stored in a variable r.

Then the sum of l and r is returned to called function.

TIME COMPLEXITY = WORST CASE ~ O(2^n)
SPACE COMPLEXITY = O(n)