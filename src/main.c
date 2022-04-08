#include "Desafio.h"

void fill_matrix(Value x[TAM][TAM])
{
	srand(time(NULL));
	int i, j;

	printf("\n\t- This is the Array that will be traversed:\n\n");

	for (i = 0; i < TAM; i++)
	{
		printf("\t\t");
		for (j = 0; j < TAM; j++)
		{
			x[i][j].val = rand() % 100;
			printf("%d\t", x[i][j].val);
		}
		printf("\n");
	}
}

int main ()
{	
	Value mat[TAM][TAM];
	fill_matrix(mat);
	roam_through_matrix(mat);
	
	return 0;
}