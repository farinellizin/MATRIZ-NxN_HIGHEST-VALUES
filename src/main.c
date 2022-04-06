#include "Desafio.h"
#include <time.h>

void fill_matrix(Value x[TAM][TAM])
{
	srand(time(NULL));
	int i, j;

	for (i = 0; i < TAM; i++)
	{
		for (j = 0; j < TAM; j++)
		{
			x[i][j].val = rand() % 100;
		}
	}
}

int main ()
{	
	Value mat[TAM][TAM];
	fill_matrix(mat);
	roam_through_matrix(mat);
	
	return 0;
}