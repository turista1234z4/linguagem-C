#include<locale.h>
#include<math.h>
#include<conio.h>
#include<stdio.h>

int tamanho=3;
int mat[3][3],x=0, y=0;

int main(){
	setlocale(LC_ALL ,"portuguese");
	for (x=0; x<tamanho; x++){
		for (y=0; y<tamanho; y++){
		printf("\n Entre com o %i numero da  %i linha da matriz: ", x+1, y+1);
		scanf("%d" , &mat[x][y]);
		}
	}
		/*saída*/

			for (x=tamanho-1; x>=0; x--){
				for (y=tamanho-1; y>=0; y--){
					printf("%d " , mat[x][y]);
				       
				} printf("\n");
			}

getch ();
return 1;
}


































