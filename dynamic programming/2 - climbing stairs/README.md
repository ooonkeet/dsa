This code explains how many ways one can climb `n` stairs,

We see ways to climb,

* n = 2 -> [ {1,1} , {2} ]
    * number of ways = 2
* n = 3 -> [ {1,1,1} , {1,2} , {2,1} ]
  * number of ways = 3
* n = 4 -> [ {1,1,1,1} , {1,1,2} , {2,1,1} , {1,2,1} , {2,2} ]
  * number of ways = 5 
* n = 5 -> [ {1,1,1,1,1} , {1,1,1,2} , {1,1,2,1} , {1,2,1,1} , {1,2,2} , {2,1,1,1} , {2,1,2} , {2,2,1} ]
    * number of ways = 8

Therefore, we can conclude by an observation number of ways is similar to fibonacci series just the first term is 
initialized to 1, as no one can climb 0 steps in one instance.

- We use mod as 1e9+7 (1000000007) to avoid `long long int` problems in case of larger numbers. 
# This code uses test case approach as it is picked up from a coding platform
