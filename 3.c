#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

int main()
{

	struct spilha pilhaPalavra, pilhaInversa;
	int i, palindromo, tamanho=0;
	char palavra[MAX];

	init(&pilhaPalavra);
	init(&pilhaInversa);

	printf("Entre com a palavra: \n");
	scanf("%s", palavra);
	tamanho = strlen(palavra);

	for (i=0; i<=tamanho; i++)
	{
		push(&pilhaPalavra,palavra[i]);
	}

	for (i=tamanho-1; i>=0; i--)
	{
		push(&pilhaInversa,pilhaPalavra.vetor[i]);
	}

	printf("\n");

	for (i=pilhaPalavra.topo-1; i>=0; i--)
	{ 
		printf("%c\n",pilhaPalavra.vetor[i]); 
	}
	
	printf("pilhaPalavra\n");

	printf("\n\n");

	for (i=pilhaInversa.topo-1; i>=0; i--)
	{
		printf("%c\n",pilhaInversa.vetor[i]);
	}
	
	printf("pilhaInversa\n");

	printf("\n\n");

	for (i=0; i<=tamanho; i++)
	{
		if(pilhaPalavra.vetor[i]==pilhaInversa.vetor[i])
		{
			palindromo = 1;
		}
		else{palindromo = 0;}
	}

	if(palindromo==1){printf("A PALAVRA E UM PALINDROMO");}
	else{printf("A PALAVRA NAO E UM PALINDROMO");}
	
	return 0;
}

