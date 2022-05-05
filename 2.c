#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main()
{

	struct spilha pilhax, pilhay, pilhaz;
	int i;

	init(&pilhax);
	init(&pilhay);
	init(&pilhaz);

	printf("---------------Estado Inicial---------------\n");

	push(&pilhax,'A');
	push(&pilhax,'B');
	push(&pilhax,'C');
	push(&pilhax,'D');

	printf("\n\n");

	for (i=pilhax.topo-1; i>=0; i--)
	{
		printf("%c\n",pilhax.vetor[i]);
	}
	printf("PilhaX\n");

	printf("\n\n");

	for (i=pilhay.topo-1; i>=0; i--)
	{
		printf("%c\n",pilhay.vetor[i]);
	}
	printf("PilhaY\n");

	printf("\n\n");

	for (i=pilhaz.topo-1; i>=0; i--)
	{
		printf("%c\n",pilhaz.vetor[i]);
	}
	printf("PilhaZ\n");

	//AQUI COMEÇA A OPERÇÃO

	push(&pilhay,pop(&pilhax));
	push(&pilhay,pop(&pilhax));
	push(&pilhay,pop(&pilhax));

	push(&pilhaz,pop(&pilhax));

	push(&pilhax,pop(&pilhay));

	push(&pilhaz,pop(&pilhay));
	push(&pilhaz,pop(&pilhax));
	push(&pilhaz,pop(&pilhay));

	printf("\n---------------Estado Final---------------\n\n");

	for (i=pilhax.topo-1; i>=0; i--)
	{
		printf("%c\n",pilhax.vetor[i]);
	}
	printf("PilhaX\n");

	printf("\n\n");

	for (i=pilhay.topo-1; i>=0; i--)
	{
		printf("%c\n",pilhay.vetor[i]);
	}
	printf("PilhaY\n");

	printf("\n\n");

	for (i=pilhaz.topo-1; i>=0; i--)
	{
		printf("%c\n",pilhaz.vetor[i]);
	}
	printf("PilhaZ\n");
	
	return 0;
}

