#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>

int n,soma;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	
	printf("Digite alguns n�meros e depois digite 0: ");
	do{
		
		scanf("%d",&n);
		soma=soma+n;
	
	}while (n!=0);
	printf("\n A soma dos n�meros digitados antes do 0 �: %d", soma);
}


					//Cria um programa que l� um n�mero do teclado at� que encontre um n�mero igual a zero. No final, mostra a soma dos n�meros digitados.
