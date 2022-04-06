#include "Desafio.h"

int next_right_side (Value x[TAM][TAM], int i, int j) {
    int next_right_side_value = 0;

    if (!(j == (TAM - 1)))
		{
			next_right_side_value = x[i][j + 1].val;
		} 

    return next_right_side_value;
}

int next_left_side (Value x[TAM][TAM], int i, int j) {
    int next_left_side_value = 0;

    if (!((j == 0) || (i == (TAM - 1))))
    {
        next_left_side_value = x[i][j - 1].val;
    }

    return next_left_side_value;
}

int next_under (Value x[TAM][TAM], int i, int j) {
    int next_under_value = 0;
    
    if (!(i == (TAM - 1)))
    {
        next_under_value = x[i + 1][j].val;
    }

    return next_under_value;
}

void roam_through_matrix(Value x[TAM][TAM]) {
    int i = 0, j = 0, current = x[i][j].val, total = current, right_value, left_value, under_value;

    while ((i != (TAM - 1)) || (j != (TAM - 1)))
	{
		right_value = next_right_side(x, i, j);
		left_value = next_left_side(x, i, j);
		under_value = next_under(x, i, j);

		if ((right_value > left_value) && (right_value > under_value))
		{
			x[i][j].val = -1;
			j++;
			current = x[i][j].val;
			total += current;
		}

		if ((left_value > right_value) && (left_value > under_value))
		{
			x[i][j].val = -1;
			j--;
			current = x[i][j].val;
			total += current;
		}

		if ((under_value >= right_value) && (under_value >= left_value))
		{
			x[i][j].val = -1;
			i++;
			current = x[i][j].val;
			total += current;
		}
	}
	
	printf("\n\t- The sum, after roaming throughout the \n\tentire Array, passing only by the highest \n\t\tclose values is: ");
    printf("\t\t\t\n\t\t\t\n\t\t***************\n\t\t*     %d     *\n\t\t***************\n\n\n\n\n", total);
}