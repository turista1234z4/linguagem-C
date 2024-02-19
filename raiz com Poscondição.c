#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
	float r, n=-1;
	setlocale(LC_ALL, "portuguese");
	
	do{
		printf("Entre com um número positivo: ");
		scanf("%f", &n);
	}while (n < 0);
	
	r=sqrt(n);
	printf("\nA raiz quadrada de %f.2 é %f.2",n,r);
	
	return 0;
	
	
}
