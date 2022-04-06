#include "Desafio.c"

void fill_matrix(Value x[TAM][TAM])
{
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
	printf("\n");
	
	Value mat[TAM][TAM];

	fill_matrix(mat);

	int i, j, total;
	int atual;

	for (i = 0; i < TAM; i++)
	{
		for (j = 0; j < TAM; j++)
		{
			printf("%d\t", mat[i][j].val);
		}
		printf("\n");
	}

	i = 0; j = 0;
	int valor_direita = 0, valor_esquerda = 0, valor_abaixo = 0;
	atual = mat[i][j].val; total = atual;

	printf("\n TOTAL => %d", total);

	while ((i != (TAM - 1)) || (j != (TAM - 1)))
	{
		// DESCOBRINDO VALOR DA DIREITA // 

		if (j == (TAM - 1))
		{
			valor_direita = 0;
		} else {
			valor_direita = mat[i][j + 1].val;
		}

		// DESCOBRINDO VALOR DA ESQUERDA //

		/* ------> */if (j == 0)
		{
			valor_esquerda = 0;
		} else {
			valor_esquerda = mat[i][j - 1].val;
		}

		// DESCOBRINDO VALOR DE BAIXO //

		if (i == (TAM - 1))
		{
			valor_abaixo = 0;
			valor_esquerda = 0;
		} else {
			valor_abaixo = mat[i + 1][j].val;
		}

		// COMPARANDO VALORES //

		if ((valor_direita > valor_esquerda) && (valor_direita > valor_abaixo))
		{
			mat[i][j].val = -1;
			j++;
			atual = mat[i][j].val;
			total += atual;
		}

		if ((valor_esquerda > valor_direita) && (valor_esquerda > valor_abaixo))
		{
			mat[i][j].val = -1;
			j--;
			atual = mat[i][j].val;
			total += atual;
		}

		if ((valor_abaixo >= valor_direita) && (valor_abaixo >= valor_esquerda))
		{
			mat[i][j].val = -1;
			i++;
			atual = mat[i][j].val;
			total += atual;
		}
	}
	
	printf("\t\t\t ==> VALOR TOTAL: %d\n\n\n", total);

	return 0;
	}	
