In this program,

suppose you are given a string 'abcba'.

You have to return the smallest non palindrome, after changing one character.

'abcba' ---> 'aacba'

If all characters are same

'aaaaaaa' ---> 'aaaaaab'

Change last character

Edge case -> 'a','c','b' - single character passed. 

Next palindrome = ''

    if string.length == 1
        return ""
    flag=0
    for(i=0;i<string.length/2;i++)
        if string[i]!='a'
            string[i]='a'
            flag=1
            break
    if flag==0
        string[string.length-1]='b'
    return string

For this we loop till half of the elements

and check whether there is any 'a' present if not, then replace with a,

if all a's are present, then only update last character of array as 'b'.

'a' is chosen as it lexicographically smallest and 'b' is second smallest.

Link - https://leetcode.com/problems/break-a-palindrome/description/

Difficulty - Medium

Topics - String, Greedy.

Time Complexity:
- The main loop iterates up to half the length of the string (i.e., `palindrome.length()/2`).
- Inside the loop, the operations are constant time (checking and possibly replacing a character).
- Therefore, the overall time complexity is O(n/2), which simplifies to O(n), where n is the length of the input string.

Space Complexity:
- The algorithm modifies the input string in place and uses only a few auxiliary variables (`flag` and loop counters).
- No additional data structures proportional to the input size are used.
- Hence, the space complexity is O(1).

In summary:
- Time complexity: O(n)
- Space complexity: O(1)