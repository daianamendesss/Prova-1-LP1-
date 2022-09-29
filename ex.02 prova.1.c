#include <stdlib.h>
#include <time.h>
#include "bibliotecaProva.h"

void printMatrixFloat(int m[100], int lin, int cols){
	int i, j;
	for(i=0;i<lin;i++){
		for(j=0;j<cols;j++){
			printf("\n ");
		}//fim for j
	}//fim for i
}//fim funcao

//----------------------


int main(){
srand(time (NULL));
int i,j,n, m, matrizResult;
float matriz1[100][100], matriz2[100][100], matrizResult[100];
scanf("%d%d",&n,&m);
geraMarixFloat(matriz1,n,m);
geraMatrixFloat(matriz2,n,m);
matrizResult(matriz2[i][j]+matriz1[i][j]);

printf("Qual eh a area da Matriz 1:\n");
printMatrixFloat(matriz1,n,m);
printf("Qual eh a area da Matriz 2:\n");
printMatrixFloat(matriz2,n,m);

	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			matrizResult[i][j] = matriz2[i][j] + matriz1[i][j];
			}//fim for j
		}//fim for i
	 
	
	printf("O resultado da soma da chuva nos dois periodos:%d \n", matrizResult);
	printMatrixFloat(resultado, n, m);
return 0;
}

