#include <stdio.h>
#include <math.h>
double soma(double n1, double n2);
double sub(double n1, double n2);
double div(double n1, double n2);
double multi(double n1, double n2);
double med(double n1, double n2);
double por(double n1, double n2);
//porcentagem

	int main(){
	double v1,v2,v3;
	char op;
		printf("Escolha a operecao:\n");
		printf("+ adicao\n- subtracao\n/ divisao\n* multiplicacao\nm media\np porcentagem\ns equacao 2 grau\n");
		scanf("%c",& op);
		if(op != 's'){
		printf("Digite o primeiro numero: \n");
		scanf("%lf",& v1);
		printf("Digite o segundo numero: \n");
		scanf("%lf",& v2);
	    }else{printf("Digite o valor de a: \n");
	     scanf("%lf",&v1);
	     printf("Digite o valor de b: \n");
	     scanf("%lf",&v2);
	     printf("Digite o valor de c: \n");
	     scanf("%lf",&v3);
		}
		if(op == '+'){
			printf("Soma = %.3f",soma(v1,v2));
		}
		if(op == '-'){
			printf("Subtracao = %.3f",sub(v1,v2));	
		}
		if(op == '/'){
			printf("divisao = %.3f",div(v1,v2));	
		}
		if(op == '*'){
			printf("multiplicacao = %.3f",multi(v1,v2));	
		}
		if(op == 'm'){
			printf("media = %.3f",med(v1,v2));}
		if(op == 'p'){
			printf("porcentagem = %.3f",por(v1,v2));	
		}
		if(op == 's'){
			eq2s(v1,v2,v3);
		}
		/* ou usa o else if: if(op == '+'){
			printf("Soma = %.3f",soma(v1,v2));}
			else if (op == '-') printf("Soma = %.3f",soma(v1,v2));
			else if (op == '-') printf("Soma = %.3f",soma(v1,v2));
			else if (op == '-') printf("Soma = %.3f",soma(v1,v2));
			else if (op == '-') printf("Soma = %.3f",soma(v1,v2));
			*/
		
	/*	
	printf("soma %.3f\n",soma(8,3));
	printf("sub %.3f\n",sub(8,3));
	printf("div %.3f\n",div(8,3));
	printf("multi %.3f\n",multi(8,3));
	printf("med %.3f\n",med(8,3));*/			
  	return 0;																				
}
void eq2s(double a, double b, double c){

	double delta = multi(b,b);
	printf("delta = %.3f",delta);
}
		double soma(double n1, double n2){ // =f(x)=x+y são funções
		return n1 + n2;
}
		double sub(double n1, double n2){// =f(x)=x-y
		return n1 - n2;
}
		double div(double n1, double n2){// =f(x)=x/y
		return n1 / n2;
}
		double multi(double n1, double n2){// =f(x)=x*y
		return n1 * n2;
}
		double med(double n1, double n2){// =f(x)=x+y/n
		return div(soma(n1,n2),2);
}
		double por(double n1, double n2){
		return multi(div(n2,100),n1);
	}
