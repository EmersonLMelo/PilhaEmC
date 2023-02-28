#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define cor 5
#define num 20


//Duas pilhas com 5 cores e 20 caracteres!
struct tpilha{
	char pratos[cor][num];
	char pratos2[cor][num];
};

//variavel G
struct tpilha pilha;

int main(){
	printf("CODIGO - EMERSON LIDIO MELO \nRA:21020130-5");
	int i;
	int fim;
	fim = 0;
	printf("\n######################################\n");
	printf("Empilhando\n");
	printf("######################################\n");
	system("pause");
	for(i=0; i<cor; i++){
		if(i == 0){
			strcpy(pilha.pratos[0], "(1) Vermelho");
		}
		if(i == 1){
			strcpy(pilha.pratos[1], "(2) Verde");
		}
		if(i == 2){
			strcpy(pilha.pratos[2], "(3) Azul");
		}
		if(i == 3){
			strcpy(pilha.pratos[3], "(4) Branco");
		}
		if(i == 4){
			strcpy(pilha.pratos[4], "(5) Laranja");
		}
		printf("\n%s\n", pilha.pratos[i]);
		system("pause");
	}
	printf("\n######################################\n");
	printf("\nPILHA 1:");
	//A pilha se apresenta como uma pilha, de baixo para cima!
	for(i=4; i>-1; i--){
		printf("\n%s", pilha.pratos[i]);
	}
	printf("\n");
	system("pause");
	printf("######################################\n");
	printf("Desenpilhando\n");
	printf("######################################\n");
	system("pause");
	for(i=4; i>-1; i--){
		strcpy(pilha.pratos2[fim],pilha.pratos[i]);
		strcpy(pilha.pratos[i], "");
		printf("\n%s\n", pilha.pratos2[fim]);
		fim++;
		system("pause");
		
	}
	printf("\n######################################\n");
	printf("\nPILHA 2:");
	//A pilha se apresenta como uma pilha, de baixo para cima!
	for(i=4; i>-1; i--){
		printf("\n%s", pilha.pratos2[i]);
	}
	printf("\n");
	system("pause");
}
