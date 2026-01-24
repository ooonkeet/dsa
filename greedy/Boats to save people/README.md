Suppose I am given an array of weights as

[1, 6, 4, 9] and boat limit is 10.

I need to find minimum number of boats (where boat count is infinite).

One boat can at max fit 2 people.

1. First we need to sort the array.
        
        [1,4,6,9]        Limit=10
2. Then we need two pointers i and j one at the starting and one at the end of array.

3. Then we check, if arr[i]+arr[j] is exceeding the limit, if not we add one boat.

4. If it exceeds we can send arr[j] only in the boat and increase one boat count.

5. In both cases, boat count is increased.

6. At last, we return the boat count.

Link - https://leetcode.com/problems/boats-to-save-people/description/

Rated - Medium

Topic - Array, Two Pointers, Greedy, Sorting.

The time complexity of this solution is O(n log n), 

primarily due to the initial sorting step where n is the number of people. 

After sorting, the two-pointer traversal runs in linear time, O(n), since each element is processed at most once. 

Therefore, the overall time complexity is dominated by the sorting step, resulting in O(n log n).

The space complexity is O(1) because the algorithm sorts the input in place 

and uses only a fixed amount of additional variables (i, j, boats), regardless of the input size. 

No extra space proportional to the input size is used.