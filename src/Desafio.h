#ifndef DESAFIO_H
#define DESAFIO_H
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define TAM 7
typedef struct Value Value;
typedef struct Matrix Matrix;

struct Value {
	int val;
};

struct Matrix {
	Value mat[TAM][TAM];
};

void roam_through_matrix(Value x[TAM][TAM]);

int next_right_side(Value x[TAM][TAM], int i, int j);
int next_left_side(Value x[TAM][TAM], int i, int j);
int next_under(Value x[TAM][TAM], int i, int j);

#endif