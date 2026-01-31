A string array is given as input.

Example -> ["lc","cl","gg"]

You have to return the length of longest palindrome string

which in here is ---> "l c g g c l"

["ab","ty","yt","lc","cl","ab"]

Output ---> "t y l c c l y t"

Remember:-

1. word array length between 1 and 10^5.

2. size of each array element is 2.

Intuition:-
--------------

- We first check if one array elements' reverse is present in the array or not.
- If present we put both elements at end.
- If elements are of same character, we see if they are present in pair or not, if present they are put in the ends.
    At last if one set remains it is placed at centre.

Suppose the set contains:-

{"dd","aa","bb","dd","aa","dd","bb","dd","aa","cc","bb","cc","dd","cc"}

|Suffix| freq |
|----|------|
|aa|3|
|bb|3|
|cc|3|
|dd|5|

Now we place,

a a + b b + c c + a a + c c + b b + a a

Total Length = 22

