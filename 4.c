#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main()
{

	struct spilha pilhaAleatoria, pilhaPar, pilhaImpar;
	int i;

	init(&pilhaAleatoria);
	init(&pilhaPar);
	init(&pilhaImpar);

	printf("---------------Estado Inicial---------------\n");

	push(&pilhaAleatoria, rand() %10);
	push(&pilhaAleatoria, rand() %10);
	push(&pilhaAleatoria, rand() %10);
	push(&pilhaAleatoria, rand() %10);

	printf("\n");
	
	for (i=pilhaAleatoria.topo-1; i>=0; i--)
	{
		printf("%d\n",pilhaAleatoria.vetor[i]);
	}
	printf("PilhaAleatoria\n");
	
	printf("\n");
	
	for (i=pilhaPar.topo-1; i>=0; i--)
	{
		printf("%d\n",pilhaPar.vetor[i]);
	}
	printf("PilhaPar\n");

	printf("\n");
		
	for (i=pilhaImpar.topo-1; i>=0; i--)
	{
		printf("%d\n",pilhaImpar.vetor[i]);
	}
	printf("PilhaImpar\n");

	printf("---------------Realizando Operacoers---------------\n");

	for (i=pilhaAleatoria.topo-1; i>=0; i--)
	{
		if(pilhaAleatoria.vetor[i] % 2 == 0)
		{
			push(&pilhaPar,pop(&pilhaAleatoria));
		}
		else
		{
			push(&pilhaImpar,pop(&pilhaAleatoria));
		}
	}

	printf("\n---------------Operacoes Finalizadas - Estado Final---------------\n\n");
	
	for (i=pilhaAleatoria.topo-1; i>=0; i--)
	{
		printf("%d\n",pilhaAleatoria.vetor[i]);
	}
	printf("PilhaAleatoria\n");
	
	printf("\n");
	
	for (i=pilhaPar.topo-1; i>=0; i--)
	{
		printf("%d\n",pilhaPar.vetor[i]);
	}
	printf("PilhaPar\n");

	printf("\n");

	for (i=pilhaImpar.topo-1; i>=0; i--)
	{
		printf("%d\n",pilhaImpar.vetor[i]);
	}
	printf("PilhaImpar\n");
	
	return 0;
}

