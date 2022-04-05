#include "Desafio.h"
#include <time.h>


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

int next_right_side(Matrix *it, int i, int j, int size) {
	int next_right_side_value;
	
	if (j == (size - 1))
	{
		next_right_side_value = 0;
	} else {
		next_right_side_value = it -> mat[i][j + 1].val;
	}
	
	return next_right_side_value;
}

int next_left_side(Matrix *it, Value val, int i, int j, int size) {
	int next_left_side_value;
	
	if (j == 0 || i == (size - 1))
	{
		next_left_side_value = 0;
	} else {
		next_left_side_value = it -> mat[i][j - 1].val;
	}
	
	return next_left_side_value;
}

int next_under(Matrix *it, Value val, int i, int j, int size) {
	int next_under_value;
	
	if (i == (size - 1)) 
	{
		next_under_value = 0;
	} else {
		next_under_value = it -> mat[i + 1][j].val;
	}
	
	return next_under_value;
}

















void roam_through_matrix(/*Matrix *it, Value val*/)
{
	int size, i, j;
	srand(time(NULL));
	
	printf("\t- To continue, please enter the dimensions of the array: ");
	scanf("%d", &size);
	
	Matrix *m;
	
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			m -> mat[i][j].val = rand() % 100;
			printf("%d\t", m -> mat[i][j].val);
		}
		printf("\n");
	}
	
	
	
	i = 0; j = 0;
	int right_value, left_value, under_value;
	
	while (j != (size - 1) || i != (size - 1))
	{
		//int next_right_side(Matrix *it, int i, int j, int size);
		//right_value = next_right_side(m, i, j, size);
		//printf("%d", right_value);
		//next_left_size();
		//next_under();
	}
	
	
}

