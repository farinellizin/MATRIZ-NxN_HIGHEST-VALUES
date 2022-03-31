#ifndef __DESAFIO_H
#define __DESAFIO_H
#define standart_value 7

typedef struct valor {
	int value;
} Valor ;

typedef struct matriz {
	Valor mat[standart_value][standart_value];
} Matriz;

void fill_matrix(Matriz *it, Valor);


#endif
