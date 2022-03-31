#include "Desafio.h"

//void fill_matrix(Matrix *it, Value val) {
//	int i, j;
//	
//	for (i = 0; i < standart_value; i++)
//	{
//		for (j = 0; j < standart_value; j++)
//		{
//			it -> mat[i][j].val = rand() % 100;
//		}
//	}
//}

int next_right_side(Matrix *it, Value val, int i, int j) {
	int next_right_side_value;
	
	if (j == 6)
	{
		next_right_side_value = 0;
	} else {
		next_right_side_value = it -> mat[i][j + 1].val;
	}
	
	return next_right_side_value;
}

int next_left_side(Matrix *it, Value val, int i, int j) {
	int next_left_side_value;
	
	if (j == 0 || i == 6)
	{
		next_left_side_value = 0;
	} else {
		next_left_side_value = it -> mat[i][j - 1].val;
	}
	
	return next_left_side_value;
}

int next_under(Matrix *it, Value val, int i, int j) {
	int next_under_value;
	
	if (i == 6) 
	{
		next_under_value = 0;
	} else {
		next_under_value = it -> mat[i + 1][j].val;
	}
	
	return next_under_value;
}

