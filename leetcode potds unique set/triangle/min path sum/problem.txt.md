&nbsp;                       ***2***

&nbsp;                      ***3*** 4

&nbsp;                     6 ***5*** 7

&nbsp;                    4 ***1*** 8 3



Sum = 2+3+5+1 = 11 - return this.

A Double dimensional vector is used to input this pattern like this - {{2},{3,4},{6,5,7},{4,1,8,3}}.

You have to select the shortest path down the track

Remember if you are in i'th index on one level you can traverse either i'th or i+1'th index on next level.



Constraints:

1 <= triangle.length <= 200

triangle\[0].length == 1

triangle\[i].length == triangle\[i - 1].length + 1

-10^4 <= triangle\[i]\[j] <= 10^4

