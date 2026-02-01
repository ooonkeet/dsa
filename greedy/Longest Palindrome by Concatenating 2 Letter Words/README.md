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

Algorithm:
-----------

1. We take an unordered map of string and int and initialise it by the input array and its frequency.
2. We initialise result variable with zero and centreUsed variable and initialise centreUsed with false.
3. Then we iterate the string array till end.
4. We take another variable reverse and reverse each string one by one.
5. If the strings are not of same character, we decrease their frequencies respectively,increasing result variable by 4.
6. If the strings are of same character, we check if the strings are present in pair or not.
7. If present in pair, we reduce their frequency by 2 and increase the result by 4.
8. If not present in pair, we check if their frequency is 1 and centreUsed is false or not.
9. If conditions are satisfied, we reduce frequency by 1, and increase the result by 2.

Link : https://leetcode.com/problems/longest-palindrome-by-concatenating-two-letter-words/description/

Rated : Medium

Topics : Array,Hash Table,String,Greedy,Counting.

The time complexity of the given code is approximately O(N * K), where N is the number of words in the input vector and
K is the maximum length of a word. This is because:

- Building the unordered_map (mp) takes O(N) insertions.
- For each word, reversing the string (reverse operation) takes O(K) time.
- The subsequent checks and updates are O(1) operations.

Since the main loop iterates over all words and each iteration involves reversing a string, 
the total time complexity is O(N * K).

The space complexity is O(N * K) in the worst case because:

- The unordered_map stores counts of all unique words, which can be up to N words, each potentially of length K.
- Additional variables (like rev, centerUsed, result) use negligible space compared to the map.

Overall, the algorithm is efficient for typical constraints, 
but the dominant factor is the string reversal within each iteration.