                                       ....
                                       ....
                                       ....
                                       ....
                                        ||
              --------------------------------------------------------
              ||              ||               ||                   ||
             Q...            ....             ....                 ....
             ....            Q...             ....                 ....
             ....            ....             Q...                 ....
             ....            ....             ....                 Q...
              ||              ||               ||                   ||
        --------------        ||               ||          ------------------
        ||          ||        ||               ||          ||              ||
       Q...        Q...      ....             .Q..        .Q..            ....
       ....        ....      Q...             ....        ....            .Q..
       .Q..        ....      ....             Q...        ....            ....
       ....        .Q..      .Q..             ....        Q...            Q...
        ||          ||        ||               ||          ||              ||
        😩         Q...      ..Q.             .Q..        ..Q.             😩    
                   ..Q.      Q...             ....        ....
                   ....      ....             Q...        ..Q.
                   .Q..      .Q..             ..Q.        Q...
                    ||        ||               ||          ||
                    😩       ..Q.             .Q..         😩
                             Q...             ...Q
                             ...Q             Q...
                             .Q..             ..Q.
                              ||               ||
                              😘               😘

The n -queens problem follows three conditions:- 

* every row has one queen,
* every column has one queen,
* no queen attacks the other queen.

In chess board queen has freedom of movements like:- 

* it can go horizontally in full board,
* it can go vertically in full board,
* it can go diagonally in full board.

In this n-queens problem diagram,

      * the combination points to 4*4 chess-board.
     😩 emoji points to where no combination will exist, and the recursion stops.
     😘 emoji points where there exists a combination where the condition is satosfied.

In brute force approach :-

* TIME COMPLEXITY - O(n!) [average case]
* SPACE COMPLEXITY - O(n^2) [average case]

To optimize this code, we have an optimized approach attached with the code :-

* TIME COMPLEXITY - CAN BE O(1) IN BEST CASE BUT SIMILAR TO PREVIOUS COMPLEXITY IN WORST CASES.
* SPACE COMPLEXITY - O(n^2)
* The time complexity is dominated by the recursive calls and checking valid positions, leading to exponential 
  time complexity. 
* The space complexity is primarily due to the board representation and the auxiliary data structures used for tracking
  valid positions. Since it is a recursive solution, the space complexity depends on the depth of recursion which in 
  the worst case can be O(n) for the stack and the board which would be O(n*n). 
* The leftRow, upperDiagonal, and lowerDiagonal vectors each have space proportional to O(n). 
* Backtracking problems like this inherently have exponential time complexity. 
* No significant optimization is possible without fundamentally changing the approach. 
* The code is already reasonably optimized in terms of not calculating the safe positions repetitively using 
  bitwise operations to represent rows, upper and lower diagonals.
