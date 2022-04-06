#ifndef DESAFIO_H
#define DESAFIO_H
#include <stdio.h>
#include <stdlib.h>
#define TAM 11
typedef struct Value Value;
typedef struct Matrix Matrix;

struct Value {
	int val;
};

struct Matrix {
	Value mat[TAM][TAM];
};

void roam_through_matrix(Value x[TAM][TAM], int i, int j);

#endif 

