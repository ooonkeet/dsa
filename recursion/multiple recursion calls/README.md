Suppose the function accepts the term to be of 4
the recursion tree would look like

                 f(4)
                   ↓
              -------------
              ↓           ↓
             f(3)       f(2)
              ↓           ↓
          ---------    --------
          ↓       ↓    ↓      ↓
         f(2)    f(1) f(1)   f(0)
          ↓
        ------
        ↓     ↓
       f(1)  f(0)

This would enforce an exponential time complexity in worst case(2^n) and would be lengthy.
This can be curbed by using dynamic programming.