You are given a 0-indexed integer array nums, where nums[i] is a digit between 0 and 9 (inclusive).

The triangular sum of nums is the value of the only element present in nums after the following process terminates:

1. Let nums comprise n elements. If n == 1, end the process. 
   Otherwise, create a new 0-indexed integer array newNums of length n - 1.

2. For each index i, where 0 <= i < n - 1, assign the value of 
   newNums[i] as (nums[i] + nums[i+1]) % 10, where % denotes modulo operator.

3. Replace the array nums with newNums.

4. Repeat the entire process starting from step 1.

5. Return the triangular sum of nums.

   <img width="454" height="531" alt="Screenshot 2025-10-12 192913" src="https://github.com/user-attachments/assets/e2935616-9afa-436b-8a35-2bf21802cec9" />



Constraints:

(1) 1 <= nums.length <= 1000

(2) 0 <= nums[i] <= 9
