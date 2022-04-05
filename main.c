#include <stdio.h>
#include <stdlib.h>
#include "Desafio.h"

////int main() {
////	
////	int matriz[7][7], i, j, k = 0;
////	
////	for (i = 0; i < 7; i++)
////	{
////		for (j = 0; j < 7; j++)
////		{
////			matriz[i][j] = rand() % 100;
////			printf("%d\t", matriz[i][j]);
////		}
////		printf("\n");
////	}
////
////	 PERCORRENDO A MATRIZ
////	i = 0; 
////	j = 0;
////	int armazena[50], atual = matriz[i][j], m;
////	int valor_esquerda = 0, valor_direita = 0, valor_abaixo = 0;
////	
////	for (m = 0; m < 50; m++)
////	{
////		armazena[m] = -1;
////	}
////	
////	while ((j != 6) || (i != 6))
////	{
////		armazena[k] = atual;
////		
////		 PROXIMA POSICAO ESQUERDA
////		if (j == 0)
////		{
////			valor_esquerda = 0;
////		} else {
////			valor_esquerda = matriz[i][j - 1];
////		}
////		
////		 PROXIMA POSICAO DIREITA
////		if (j == 6)
////		{
////			valor_direita = 0;
////		} else {
////			valor_direita = matriz[i][j + 1];
////		}
////		
////		 PROXIMA POSICAO ABAIXO
////		if (i == 6)
////		{
////			valor_abaixo = 0;
////			valor_esquerda = 0;
////		} else {
////			valor_abaixo = matriz[i + 1][j];
////		}
////		
////		 COMPARANDO TODOS OS VALORES PARA SABER QUAL SERA O NOVO ATUAL
////		
////		printf("%d", armazena[k]);
////		printf("\t%d\n", valor_esquerda);
////		
////		if ((valor_esquerda > valor_direita) && (valor_esquerda > valor_abaixo) && (valor_esquerda != armazena[k - 1]) && (j != 0))
////		{
////			atual = valor_esquerda;
////			j--;
////		}
////		
////		if (valor_esquerda == armazena[k - 1])
////		{
////			valor_esquerda = 0;
////		}
////		
////		if ((valor_direita > valor_esquerda) && (valor_direita > valor_abaixo) && (j != 6))
////		{
////			atual = valor_direita;
////			j++;
////		}
////		
////		if ((valor_abaixo > valor_direita) && (valor_abaixo > valor_esquerda))
////		{
////			atual = valor_abaixo;
////			i++;
////		}
////		k++;
////	}
////	armazena[k] = atual;
////	
////	int total = 0;
////	
////	for (i = 0; i < 50; i++)
////	{
////		if (armazena[i] != -1)
////		{
////			total += armazena[i];
////		}
////	}
////		
////	printf("==>  %d  <==\n", total);
////	
////	system("pause");
////	return 0;
////}

int main ()
{
	roam_through_matrix();
	
	
	system("pause");
	return 0;
}
