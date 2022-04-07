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
	int k = 0;
	int vet_values[(TAM*TAM)];
	int option_1;
	int option_2;

	for (k = 0; k <= (TAM * TAM); k++) {
		vet_values[k] = -1;
	}

	k = 0;

    while ((i != (TAM - 1)) || (j != (TAM - 1)))
	{
		right_value = next_right_side(x, i, j);
		left_value = next_left_side(x, i, j);
		under_value = next_under(x, i, j);

		if ((right_value > left_value) && (right_value > under_value))
		{
			vet_values[k] = x[i][j].val;
			x[i][j].val = -1;
			j++;
			current = x[i][j].val;
			total += current;
		}

		if ((left_value > right_value) && (left_value > under_value))
		{
			vet_values[k] = x[i][j].val;
			x[i][j].val = -1;
			j--;
			current = x[i][j].val;
			total += current;
		}

		if ((under_value >= right_value) && (under_value >= left_value))
		{
			vet_values[k] = x[i][j].val;
			x[i][j].val = -1;
			i++;
			current = x[i][j].val;
			total += current;
		}

		k++;
	}

	vet_values[k] = x[i][j].val;
	
	printf("\n\t- The sum, after roaming throughout the \n\tentire Array, passing only by the highest \n\t\tclose values is: ");
    printf("\t\t\t\n\t\t\t\n\t\t***************\n\t\t*     %d     *\n\t\t***************\n\n\n\n\n", total);
	printf("\t- All the work has been done, do you want to see the process?\n");
	printf("\n\t\t1. Yes;\n\t\t2. No;\n\n\t\t- Your option: ");
	scanf("%d", &option_1);

	if (option_1 == 1) {
		printf("\n\t- Do you wish to print in order or in reverse order?\n");
		printf("\n\t\t1. Order;\n\t\t2. Reverse order;\n\n\t\t- Your option: ");
		scanf("%d", &option_2);

		if (option_2 == 1) {
			for (i = 0; i < (TAM * TAM); i++) {
				if (vet_values[i] != -1) {
					printf("%d\t", vet_values[i]);
				}
			}
		} else if (option_2 == 2) {
			for (i = (TAM * TAM); i > 0; i--) {
				if (vet_values[i] != -1) {
					printf("%d\t", vet_values[i]);
				}
			}
		}
	} else {
		printf("\n\t\t ~ Program Finished ~\n\n");
	}

}