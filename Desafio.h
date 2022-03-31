#ifndef DESAFIO_H
#define DESAFIO_H
#define standart_value 7

typedef struct v {
	int val;
} Value;

typedef struct m {
	Value mat[standart_value][standart_value];
} Matrix;

//void fill_matrix(Matrix *it, Value val);
int next_right_side(Matrix *it, Value val, int i, int j);
int next_left_side(Matrix *it, Value val, int i, int j);
int next_under(Matrix *it, Value val, int i, int j);

#endif
