In this code we are given a number consisting of combination of two digits - 6 and 9.

Suppose n = 9669.

- We can replace (i) 6 by 9 or (ii) 9 by 6 to generate the greatest combination possible.
- Only 1 operation is allowed.
- therefore, 9669 -> 9969. 


First approach
------------------
Convert number to character array and replace first occurring 6.

    n=9669
    str=to_string(n)
    for(char &s:str){
        if(s=='6'){
            s='9';
            break;
        }
    }
    return stoi(n);

Time Complexity:
- Converting the integer to a string (`to_string`) takes O(d), where d is the number of digits in `num`.
- The loop iterates through the string once, which is also O(d).
- Converting the string back to an integer (`stoi`) takes O(d).
  Overall, the total time complexity is O(d), where d is the number of digits in the input number.

Space Complexity:
- The main additional space is used by the string `numStr`, which stores the digits of the number, requiring O(d) space.
- No other significant auxiliary data structures are used.
  Therefore, the space complexity is O(d).

In summary:
- Time complexity: O(d)
- Space complexity: O(d)

Second approach
-----------------
We use two variables and break down the number till 0,

One variable updates the place value if it finds 6, initialised to -1.

Another updates the position at each iteration.

If place value is not updated, we return original number.
This happens in case of 9,99,999,9999..........

If place value is updated, we add multiples of 3,30,300..... according to place value.

For Example,
-------------
- 9669+300=9969
    
    (highest number possible if 1 operation allowed).
    
    first six found at - 2nd position.
    
    --------------------------------------
    | Position reversed | 3 | 2 | 1 | 0 |
    |-------------------|---|---|---|---|
     | Digit             | 9 | 6 | 6 | 9 |

    Digit = Digit + 3*(10^2) 

    This 2 is taken from place value, check the table.

    
- 99696969+300000=99996969

  first six found at - 3rd position.
    
   --------------------------------------
  | Position reversed | 7 | 6 | 5 | 4 | 3 | 2 | 1  | 0|
  |-------------------|---|---|---|---|---|---|----|---|
  | Digit             | 9 | 9 | 6 | 9 | 6 | 9 | 6  | 9 |

  Digit = Digit + 3*(10^5)

  This 5 is taken from place value, check the table.

Time Complexity:
- The main operation is a while loop that iterates through each digit of the input number `num`.
- The loop runs until `cpy` (a copy of `num`) becomes zero, which takes O(log10(n)) iterations, where n is the value of `num`.
- Inside the loop, only constant-time operations are performed (checking the last digit, updating variables).
- Therefore, the overall time complexity is O(log n).

Space Complexity:
- The algorithm uses a fixed number of variables (`plv`, `plsix`, `cpy`), regardless of input size.
- No additional data structures are used that grow with input size.
- Hence, the space complexity is O(1).

In summary:
- Time complexity: O(log n)
- Space complexity: O(1)