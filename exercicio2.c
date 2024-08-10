#include <stdio.h>
int main(){
	int valor,maior,menor;
	printf("digite o primeiro numero\n");
	scanf("%d",& valor);
	maior =valor;
	menor =valor;
	printf("digite o segundo numero\n");
	scanf("%d",& valor);
	if(valor > maior){
		maior = valor;
	}
	if(valor < menor){
		menor = valor;
	}
	printf("digite o terceiro numero\n");
	scanf("%d",& valor);
	if(valor > maior){
		maior = valor;
	}
	if(valor < menor){
		menor = valor;
	}
	printf("digite o quarto numero\n");
	scanf("%d",& valor);
	if(valor > maior){
		maior = valor;
	}
	if(valor < menor){
		menor = valor;
	}
	printf("digite o quinto numero\n");
	scanf("%d",& valor);
	if(valor > maior){
		maior = valor;
	}
	if(valor < menor){
		menor = valor;
	}
	printf("maior = %d e menor = %d", maior,menor);
	return 0;
}
