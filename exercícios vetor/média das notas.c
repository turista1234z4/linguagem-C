#include<conio.h>
#include<math.h>
#include<stdio.h>
int main (void){
	
	//*int n[40] = {5,2};
	//*  n[0] = 1; declara um valor espec�fico para uma posi��o espec�fica
	
	
	//for(int i =0; i <40; i++){
	//	printf("%d\n", n[i]);
	
	
	
	int notas[5] = {0};
	int total =0;
    int media = 0;	
	
	printf("Insira o valor das notas");
		
		for (int i= 0; i <5; i++)
			scanf("%d", &notas[i]);
		for (int i= 0; i <5; i++)
		total+= notas[i];
		media=total /5;
		printf("A m�dia das notas � : %d", media);
	
	getch(); 
	return(1);
	
}
