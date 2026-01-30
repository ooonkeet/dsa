two arrays are given as input

plantTime = [1,4,3]  ---> number of days one plant takes to sow and plant

growTime = [2,3,1]   ---> number of days one plant can grow

After the growing period is done, flower blooms.

See the possible combinations.

| Plant \ Day      |0|1|2|3|4|5|6|7|8|9|
|------------------|-|-|-|-|-|-|-|-|-|-|
| 1 (1P + 2G + 1B) |P|G|G|B|-|-|-|-|-|-|
| 2 (4P + 3G + 1B) |-|P|P|P|P|G|G|G|B|-|
| 3 (3P + 1G + 1B) |-|-|-|-|-|P|P|P|G|B|

Therefore, Output = 9 days.

The rules are:-
------

1. No different plant can be sowed in same day.
2. But in growing phases it can be sowed.
3. You have to return the minimum number of days all plants bloom together.

So the earliest we get to bloom is 9 days.

Another example

plantTime = [1,2,3,2]

growTime = [2,1,2,1]

| Plant \ Day      |0| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |
|------------------|-|---|---|---|---|---|---|---|---|---|
| 3 (3P + 2G + 1B) |P| P | P | G | G | B | - | - | - | - |
| 1 (1P + 2G + 1B) |-| - | - | P | G | G | B | - | - | - |
| 2 (2P + 1G + 1B) |-| - | - | - | P | P | G | B | - | - |
| 4 (2P + 1G + 1B) |-|-|-|-|-|-| P | P | G | B |

Therefore, Output = 9 days.

Topics - Array,Greedy,Sorting.

Rated - Hard.

Thus, we can see we can find the earliest day of bloom by setting the plant which takes maximum time to bloom at first.

Approach:- 
    
1. We can first take a pair vector and store plant days and growth days together.
2. Then we can create a function which will compare the growth days and return the highest one.
3. Then we can sort the pairs according to function.
4. Then we iterate the pair vector
5. We create two variables to store current plant time and current growth time.
6. Another variable to increment the current plant time.
7. Another variable to store prev planted days and current growth time.
8. And the resultant day would store maximum of maxBloomDays and current plant bloom time.

The time complexity of the given code is primarily determined by the sorting step and the subsequent iteration:

- Sorting the vector of pairs takes O(n log n), where n is the number of plants.
- The for loop that iterates through the sorted vector runs in O(n).

Therefore, the overall time complexity is O(n log n).

The space complexity involves storing the vector of pairs, which requires O(n) space. 
No additional significant auxiliary space is used apart from variables.

Hence, the total space complexity is O(n).
