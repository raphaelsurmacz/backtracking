//==========================================
//Author: Paulo R. Lisboa de Almeida
//Date:   7 Feb 2023
//==========================================

#include <stdio.h>

#define M 20
#define N 18
#define PAREDE 64
#define PASSAGEM 32
#define PASSOU 46


void imprimirLabirinto(int labirinto[][N]);
void lerLabirinto(int labirinto[][N], int*linInicio, int* colInicio, int* linFim, int* colFim);
int resolveLabirinto(int labirinto[][], int *linAtual, int *colAtual, int *linFim, int *colFim);

int main(){
	int labirinto[M][N];
	int linhaInicio, colInicio, linhaFim, colFim;
	lerLabirinto(labirinto, &linhaInicio, &colInicio, &linhaFim, &colFim);
	imprimirLabirinto(labirinto);

	int linAtual = linhaInicio;
	int colAtual = colInicio;
	
	resolveLabirinto(labirinto, &linAtual, &colAtual, &linhaFim, &colFim);

	return 0;
}

void lerLabirinto(int labirinto[][N], int*linInicio, int* colInicio, int* linFim, int* colFim){
	scanf("%d %d %d %d", linInicio, colInicio, linFim, colFim);
	for(int i=0; i < M; i++)
		for(int j=0; j<N; j++)
			scanf("%d", &labirinto[i][j]);
}

void imprimirLabirinto(int labirinto[][N]){
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			printf("%c",labirinto[i][j]);
		}
		printf("\n");
	}
}

int resolveLabirinto(int labirinto[][], int *linAtual, int *colAtual, int *linFim, int *colFim){

	if((linAtual >= linFim) || (colAtual >= colFim))
		return 1;
	
	labirinto[linAtual][colAtual] = PASSAGEM;
	
	for (int i = linAtual; i < N-1; i++){
		
	}
}