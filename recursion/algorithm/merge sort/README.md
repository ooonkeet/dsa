Merge sort works on principle of divide and merge.

Suppose the array is [3,1,2,4,1,5,2,6,4]

                                       [3,1,2,4,1,5,2,6,4]
                                                |
                                 ----------------------------------
                                 |                                |
                            [3,1,2,4,1]                       [5,2,6,4]
                                 |                                |
                         ------------------              ------------------
                         |                |              |                |
                      [3,1,2]           [4,1]          [5,2]            [6,4]
                         |                |              |                |
                   ------------      -----------     ---------       -------------
                   |          |      |         |     |       |       |           |
                 [3,1]       [2]    [4]       [1]   [5]     [2]     [6]         [4]
                   |          |      |--(1,4)--|     |-(2,5)-|       |---(4,6)---|
                -------       |           |              |                 |
                |     |       |           |              |----(2,4,5,6)----|
               [3]   [1]      |           |                       |
                |(3,1)|       |           |                       |
                   |          |           |                       |
                   |-(1,2,3)--|           |                       |
                        |                 |                       |
                        |---(1,1,2,3,4)---|                       |
                                 |                                |
                                 |------(1,1,2,2,3,4,4,5,6)-------|
                                           SORTED ARRAY

__THIS SORTING ALGORITHM LOOKS LIKE__

    mergeSort(arr[],low,high){
        if(low>=high)
            return
        mid=(low+high)/2
        mergeSort(arr,low,mid)              ----- 🩴
        mergeSort(arr,mid+1,high)           ----- 👢
        merge(arr,low,mid,high)             ----- 👠
    }

                                              -----
    merge(arr[],low,mid,high){                    |
        temp array[]                              | ----- 🥞
        left=low,right=mid+1                      |
                                              -----
                                              -----
        while(left<=mid and right<=high){         |
            if(arr[left]<=arr[right]){            |
                temp array.add(arr[left])         |
                left++                            |
            }                                     | ----- 🍫
            else{                                 | 
                temp array.add(arr[right])        |
                right++                           |
            }                                     |
        }                                         |
                                              ----- 
                                              -----
        while(left<=mid){                         |
            temp array.add(arr[left])             | ----- 🧋
            left++                                |
        }                                         |
                                              -----
                                              -----
        while(right<=high){                       |
            temp array.add(arr[right])            | ----- 🎂
            right++                               |
        }                                         |
                                              -----
                                              -----
        for(i=low->high){                         |
            arr[i]=temp array[i-low]              | ----- 🍨
        }                                         |
    }                                             |
                                              -----
Now the components will be debunked :- 
* __mergeSort(arr[],low,high)__

    🩴 - this part divides the given array into half and calls itself (recursion) passing the left half. 
       This sorts the left half.

    👢 - this part divides the given array into half and calls itself (recursion) passing the right half.
         This sorts the right half.

    👠 - this part calls the merge function which merges and sorts the left and right half and merges it.
    
* __merge(arr[],low,mid,left)__

   🥞 - starting point of the merge function. A new array is initialized which will store the sorted array. The left 
        pointer would store the lowest index and right pointer would store the nextest index of middle index.

  🍫 - this part compares the elements from both fragments and stores the smallest in order inside temporary array.

  🧋 - if the right pointer goes out of bound ('right' index exceeds 'high') the elements left in left fragment
       is copied inside temporary array

  🎂 - if the left pointer exceeds 'mid' or goes out of bound from the left fragment the elements left in right 
       fragment is copied inside temporary array
  * This 4 steps ensure both left and right fragments is combined and sorted.

  🍨 - this part copies the element from temporary array to original array which is passed (data is tampered).

Time Complexity:
- Merge sort divides the array into halves recursively until each subarray contains a single element. 
  This division occurs log₂(n) times.
- At each level of recursion, the merge function combines subarrays in linear time proportional to 
  the size of the subarrays being merged.
- Overall, the total work done across all levels is proportional to n (for merging) times the 
  number of levels (log n), resulting in a time complexity of O(n log n).

Space Complexity:
- The merge function creates a temporary vector 'temp' to hold merged elements at each step.
- The maximum size of this temporary vector is proportional to the size of the subarray being merged, 
  which can be up to n in the worst case.
- Since the merge function is called recursively, and each call creates its own temporary vector, 
  the auxiliary space used is proportional to n.
- Therefore, the overall space complexity is O(n).

In summary:
- Time Complexity: O(n log n)
- Space Complexity: O(n)