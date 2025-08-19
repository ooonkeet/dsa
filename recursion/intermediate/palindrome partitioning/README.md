Suppose the string to be checked is s = "aabb",

                                         aabb
                                          ||
                           ----------------------------------
                           ||                              ||
                          a|abb                           aa|bb
                           ||                              ||
                          a|a|bb                           ||
                           ||                              ||
                   ------------------              ------------------
                   ||              ||              ||              ||
                 a|a|b|b         a|a|bb|         aa|b|b          aa|bb|
                   ||              ✅              ||              ✅
                 a|a|b|b|                        aa|b|b|
                   ✅                              ✅

Therefore, this sequence generates 4 palindromic partitions.

TIME COMPLEXITY - O(2^n*n) in average cases

* The function func is called recursively for each possible partition of the input string s. 
* In the worst case, each character can be a palindrome partition or not, leading to a time complexity of O(2^n) 
  where n is the length of the input string.
* Additionally, for each partition, the function isPalindrome is called which has a time complexity of O(n) 
  where n is the length of the substring being checked.

SPACE COMPLEXITY - O(2^n * n) for storing all partitions plus O(n) for recursion stack and temporary variable

- The recursion stack can go as deep as O(n) in the worst case, when each character is a separate partition.
- The auxiliary space for storing all the partitions can be large, as the total number of partitions can be 
  exponential in n.
- The space used for storing the current partition v is O(n), and the total answer storage can be O(2^n * n) 
  in the worst case.
- Additional space is used for the isPalindrome function, which operates in O(1) aside from the substring extraction.

The total number of possible partitions is related to the Bell number, which grows exponentially.

For more details on Bell number, please refer to....

* https://www.geeksforgeeks.org/dsa/bell-numbers-number-of-ways-to-partition-a-set/
* https://www.whitman.edu/mathematics/cgt_online/book/section01.04.html
* https://en.wikipedia.org/wiki/Bell_number