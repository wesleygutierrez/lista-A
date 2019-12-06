#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nome[100];
	int idade;
	
	printf("coloque seu nome: \n");
	scanf("%s",&nome);
	printf("coloque sua idade: \n");
	scanf("%d",&idade);
	printf("\nseu nome\n%s",nome);
	printf("\nsua idade\n%d",idade);
}
