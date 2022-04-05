#ifndef DESAFIO_H
#define DESAFIO_H
#include <stdio.h>
#include <stdlib.h>
#define MAX_TAM 2

typedef struct v {
	int val;
} Value;

typedef struct m {
	Value mat[MAX_TAM][MAX_TAM];
} Matrix;

//void fill_matrix(Matrix *it, Value val);

// ENCONTRANDO NOVAS POSICOES

int next_right_side(Matrix *it, int i, int j, int size);
int next_left_side(Matrix *it, Value val, int i, int j, int size);
int next_under(Matrix *it, Value val, int i, int j, int size);

// PERCORRENDO A MATRIZ
void roam_through_matrix(/*Matrix *it, Value val*/);

#endif
