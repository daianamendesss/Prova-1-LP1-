#include<stdio.h>
#include <stdlib.h>
#include <time.h>


void printVet(int v[], int n){
	int i;
	for(i=0;i<n;i++)
	   printf("%2d | ",v[i]);
	   int n1,n2,n3,n4,n5,cont=0,media;
	printf("\nDigite a nota 1:\n");
	scanf("%d",&n1);
	printf("\nDigite a nota 2:\n");
	scanf("%d",&n2);
	printf("\nDigite a nota 3:\n");
	scanf("%d",&n3);
	printf("\nDigite a nota 4:\n");
	scanf("%d", &n4);
	printf("\nDigite a nota 5:\n");
	scanf("%d",&n5);
	printf("\n As notas obtidas pelo aluno foram:%d ", &n1);
	printf("\n%d ", &n2);
	printf("\n%d ", &n3);
	printf("\n%d ", &n4);
	printf("\n%d ", &n5);
		media=(n1+n2+n3+n4+n5);
	
	printf("\n As notas obtidas pelo aluno foram: ", media); 
	
}
	return 0;


