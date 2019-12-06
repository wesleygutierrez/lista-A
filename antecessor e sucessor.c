#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int valor;
	printf("digite o valor:");
	scanf("%d",&valor);
	printf("antecessor:%d e sucessor:%d", valor-1,valor+1);
}
