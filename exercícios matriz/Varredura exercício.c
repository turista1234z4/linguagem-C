#include<locale.h>
#include<math.h>
#include<conio.h>
#include<stdio.h>

int mat1[5][5],x, y,n;
int main(){
		setlocale(LC_ALL ,"portuguese");
		
		for(x=0; x <5; x++){
			for(y=0; y<5; y++){
			printf("Entre com o %i° número da %i° coluna da  matriz: ", y+1,x+1);				
				scanf("%d", &mat1[x][y]);
				}
				}
				
		printf("Digite um número inteiro");
		scanf("%d", &n);
				
				for(x=0; x <5; x++){
			for(y=0; y<5; y++){
				
				if(n==mat1[x][y]){
					printf("O número se encontra na %i linha na %i coluna", x+1,y+1);
						}
				
				}
					}
		
		
		getch ;
		return 1;
		
		
		}
		/*Matheus Eduardo da Silva 1D*/
