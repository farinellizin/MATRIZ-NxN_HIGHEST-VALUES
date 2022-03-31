#ifndef __DESAFIO_C
#define __DESAFIO_C
#include "Desafio.h"

void fill_matrix(Matriz *it, Valor v) {
	int i, j;
	
	for (i = 0; i < standart_value; i++)
	{
		for (j = 0; j < standart_value; j++)
		{
			it -> mat[i][j].value = rand() % 100;
			//printf("%d", it -> mat[i][j].value);
		}
	}

}

#endif
