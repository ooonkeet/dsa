In this program, we have to take an array and form pairs of size 2, where i<j and arr[i]>arr[j].

We take, arr = [5,3,2,4,1].

Now we will, apply merge sort

                            [5,3,2,4,1]
                                 |
                       --------------------
                       |                  |
                    [5,3,2]             [4,1]
                       |                  |
                  ----------         -----------
                  |        |         |         |
                [5,3]     [2]    3🎀[4]       [1]
                  |        |         |         |
              ---------    |            [1,4]   
              |       |    |              |
          1🎀[5]     [3]   |              |
              |       |    |              |
            2🎀 [3,5]      |              | 
                  |        |              |
                 4🎀[2,3,5]               |
                       |                  |
                            [1,2,3,4,5]

Now, we focus on 4 ribbons,
* 1🎀 :- [5] , [3] we put first pointer on [5] and second pointer on [3].
          As 5>3, we increment the ans by 1.
* 2🎀 :- [3,5] , [2] we put first pointer on {3} [3,5] and second pointer on [2].
          As 3>2, therefore 5>2 too, we increment the ans by 2.
* 3🎀 :- [4] , [1] we put first pointer on [4] and second pointer on [1].
          As 4>1, therefore 4>1, we increment the ans by 1.
* 4🎀 :- [2,3,5] , [1,4] we put first pointer on {2} [2,3,5] and second pointer on {1} [1,4].
          As 2>1, therefore 3>1 and 5>1, we increment the ans by 3.
          Now, we put the second pointer on {4} [1,4]. As 2<4, we shift the first pointer to {3} [2,3,5]
          but again 3<4, so the first pointer shifts to {5} [2,3,5]. As 5>4, we increment the ans by 1.
* ans = 1+2+1+3+1 = 8.

For more detailed explanation we take 2 set of sorted arrays,

x = [2,3,5,6]

y= [2,2,4,4,8]
* x[0]=y[0], so we move to x[1]>y[0], ans=1+1+1 (for {3,5,6})
* x[1]>y[1], ans=3+3 (same as above)
* x[1]<y[2], so we move to x[2]>y[2], ans=6+1+1 (for {5,6})
* x[2]>y[3], ans=8+1+1(same as above)
* x[2]<y[4], so we move to x[3]<y[4], so the iteration stops next as the pointer is out of bounds.

Therefore, ans = 10

To achieve this we do a small tweaking in merge sort algorithm,

In general merge sort, we have seen in two set of sorted array,

                 [2, 3, 5, 7, 8, 9, 11]      [1, 2, 5, 7, 8, 9, 12, 15]
                  |                  |        |                      |
                  |                  |        |                      |
                  |                  |        |                      |
                 low                mid     mid+1                   high
                               
__ans = ans + mid - low + 1__
                    
                   In above diagram if we take 0th index of both arrays, 2>1
                   Let's take, ans = 0 (initially)
                   ans = 0 + 6 - 0 + 1 = 7, which says 7 elements are greater than 1.
                   This is for first iteration, rest you can check by using this formula, 
                   Just be careful low,mid,high all are indexes and not values.

Time Complexity:
- The merge sort algorithm divides the array into halves recursively, resulting in a 
  recurrence relation similar to T(n) = 2T(n/2) + O(n).
- Each merge operation takes linear time, O(n), to combine two sorted halves.
- Solving the recurrence yields a total time complexity of O(n log n).
- Therefore, the overall time complexity of the code is O(n log n).

Space Complexity:
- The algorithm uses additional space for the temporary vector 'temp' during each merge operation.
- In the worst case, the size of 'temp' can be proportional to the size of the current subarray being merged.
- Since the merge process occurs at each level of recursion, and each level requires auxiliary space proportional to
  the size of the subarrays at that level, the total auxiliary space is O(n).
- Additionally, the recursion stack depth is O(log n), but this is negligible compared to the auxiliary array space.
- Therefore, the overall space complexity is O(n).

Summary:
- Time Complexity: O(n log n)
- Space Complexity: O(n)