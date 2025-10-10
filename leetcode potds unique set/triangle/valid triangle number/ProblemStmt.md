You are given an array with minimum of 3 elements and you have to return number of possible triangle combinations which 
can be formed by the array elements.

Example - [2,2,3,4]

Output - 3

Combinations - [ {2,3,4} , {2,3,4}, {2,2,3} ]

A combination is checked where suppose {a,b,c} and a+b>c.

Example2 - [4,2,3,4]

Output - 4

Combinations - [ {2,3,4}, {2,3,4}, {2,4,4},{3,4,4} ]

Constraints:

(1) 1 <= nums.length <= 1000

(2) 0 <= nums[i] <= 1000