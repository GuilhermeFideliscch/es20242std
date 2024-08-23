#include <stdio.h>
int main(){
    float n1,n2,n3,n4,r;
    char escolha;
    printf("escolha o tipo de media:\nA-aritmetica\nP-ponderada\nH-harmonica\n");
	scanf("%c",& escolha);
	printf("nota 1: ");
	scanf("%f",& n1);
	printf("nota 2: ");
	scanf("%f",& n2);
	printf("nota 3: ");
	scanf("%f",& n3);
	printf("nota 4: ");
	scanf("%f",& n4);
	if(escolha == 'A'){
            r=n1+n2+n3+n4/4;
            printf("o resultado da media aritmetica e:%.2f ",(float)r);

	}
	if(escolha == 'P'){
        float x1,x2,x3,x4;
        printf("ensira as quatro unidades peso: ");
        scanf("%f",& x1);
         printf("ensira as quatro unidades peso: ");
        scanf("%f",& x2);
         printf("ensira as quatro unidades peso: ");
        scanf("%f",& x3);
         printf("ensira as quatro unidades peso: ");
        scanf("%f",& x4);
        r=n1*x1+n2*x2+n3*x3+n4*x4/n1+n2+n3+n4;
        printf("o resultado da media ponderada e:%.2f",(float) r);
	}
	if(escolha == 'H'){
        r=4/(1/n1+1/n2+1/n3+1/n4);
        printf("o resultado da media harmonica e:%.2f ",(float) r);
	}


	return 0;
}
