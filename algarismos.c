#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main (){
	int x,y;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite um n�mero inteiro positivo: ");
	scanf("%d", &x);
	
	printf("Os digitos s�o, partindo da unidade: ");
	
	
	while (x > 0){
	y = x%10;
	x = x/10;
	printf("%d\n", y);
	
	}	
	return 0;
}


//*Dado um n�mero inteiro positivo, exibe seus algarismos e de forma invertida
