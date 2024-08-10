#include <stdio.h>

int main(){
	int a;
	printf("digite um numero");
	scanf("%d",& a);
	if(a % 5== 0){
		printf("O numero %d e divisivel por 5.", a);
	}else{
		printf("O numero %d nao e divisivel por 5.", a);
	}
	return 0;
}
