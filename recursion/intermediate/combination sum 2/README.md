In this program we need to print the subsequences lexicographically without any repetition that sums up to a specific 
target sum. For example:- 
arr = [1,1,1,2,2] and target = 4.

In solving the problem we have to keep in mind,
* No similar combinations is allowed.
* The combination should be lexicographically arranged so whatever may be the array is, we have to sort it.


* In this algorithm, the recursion is stopped when,
  * arr[current index] > target sum (denoted in diagram by 🤡)
  * Same combination is formed (denoted in diagram by 👽)
  
                                             f(0,4,[])
                                                 |
                              ---------------------------------------------------------------------------
                              |(0)         |(1)  |(2)                             |(3)               (4)|
                            f(1,3,[1])     👽    👽                            f(4,2,[2])              👽
                              |                                                   |(4)    
                     --------------------------------------------------        f(5,0,[2,2])
                     |(1)     |(2)                         |(3)    (4)|           ✅
                f(2,2,[1,1])  👽                       f(4,1,[1,2])  👽
                     |                                     |
               ------------------------------------       🤡
               |(2)               (3)|         (4)|
            f(3,1,[1,1,1])     f(4,0,[1,1,2])     👽
               |                    ✅
         ----------------
         |(3)        (4)|
        🤡             🤡
  
TIME COMPLEXITY = O(2^n*k)
SPACE COMPLEXITY = O(k*x)
where k is average length of every combination.

* In Program, we see
    * (i>ind && arr[i]==arr[i-1]) = where the second condition ensures whether any repetition occurs or not and the 
      first condition checks whether its there first time or not. If its first time, it allows but it stops when it
      repeats, and next iteration is summoned.