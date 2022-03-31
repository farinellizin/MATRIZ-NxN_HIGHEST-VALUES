Fill the N x N matrix with random integers from 0 to 99;
Consider the position Line 0 and Column 0 [0][0] as the beggining;
Consider the position [N][N] as the final one;
Roam through the matrix from the beggining, adding at each step, the next highest value found;
The next value can be the one in the same line, towards left or right, as well as under the number as long as it is in the same column;
There's only one exception on the route. As it reaches the last line, it must roam through the end of it without making any moves to the upper lines;
Roaming through the matriz following the rules above, wich is the biggest way, from the beggining to the end, having the knowledge that the sum of the positions stands for the size of the path.