![img.png](img.png)
Suppose this is the graph whose implementation is done by an adjacency matrix.

![img_3.png](img_3.png)

Now if nodes(v)=3 and color(m)=2

The recursion tree will look like:- 

             terminates once  f(0)
             signalled 'true'  ||
                        ↑      || 
                  return true  || m=1
                        ↑      ||
                              f(1)
                        ↑      ||
                  return true  || m=2
                        ↑      ||
                              f(2)
                               ||
                  return true  || m=1
                        ↑       ||
                              f(3)

![img_1.png](img_1.png)
This shows the color in each node.

Suppose now the color is m=1, the graph is not colored.

       'terminates'  f(0)
                      ||
               ↑      ||
         return false || m=1
               ↑      ||
                     f(1)
               ↑      ||
         return false || m = no option as color 1 is
               ↑      ||     already present in node 
                      ||     '0' which is adjacent to '1'
                     f(2)
                  
<img width="1016" height="666" alt="img_2" src="https://github.com/user-attachments/assets/a46816a2-1d13-4cbd-a1ee-79ddbcad5871" />


TIME COMPLEXITY - O(m^N * N)

*  The time complexity is exponential due to the recursive nature and exploration of all possible color combinations.

SPACE COMPLEXITY - O(N) + O(N), one extra auxiliary space is used.
