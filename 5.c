#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main()
{

	struct spilha pilhaVai, pilhaVolta;
	int i, numero, resto;

	init(&pilhaVai);
	init(&pilhaVolta);

	printf("---------------Escreva o Numero Decimal---------------\n");
	scanf("%d", &numero);
	
	while(numero!=0)
	{
		resto = numero % 2;
		push(&pilhaVai,resto);
		numero = numero/2;
	}
	
	for (i=pilhaVai.topo-1; i>=0; i--)
	{
		push(&pilhaVolta,pop(&pilhaVai));
	}

	printf("O equivalente binario e:\n");

	for (i=0; i<=pilhaVolta.topo-1; i++)
	{
		printf("%d",pilhaVolta.vetor[i]);
	}
	
	return 0;
	
}

