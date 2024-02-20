#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>

int n,soma;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	
	printf("Digite alguns números e depois digite 0: ");
	do{
		
		scanf("%d",&n);
		soma=soma+n;
	
	}while (n!=0);
	printf("\n A soma dos números digitados antes do 0 é: %d", soma);
}


					//Cria um programa que lê um número do teclado até que encontre um número igual a zero. No final, mostra a soma dos números digitados.
