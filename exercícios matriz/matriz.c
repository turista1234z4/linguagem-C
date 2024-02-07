#include<locale.h>
#include<math.h>
#include<conio.h>
#include<stdio.h>
int tamanho=3;
int mat[3][3],mat2[3][3],x=0,y=0,z=0,w=0;

int main(){
	setlocale(LC_ALL ,"portuguese");
	for (x=0; x<tamanho; x++){
		for (y=0; y<tamanho; y++){
		printf("\n Entre com o %i numero da  %i linha da matriz: ", x+1, y+1);
		scanf("%d" , &mat[x][y]);
		}
	}
	
	for (z=0; z<tamanho; z++){
		for (w=0; w<tamanho; w++){
		printf("\n Entre com o %i numero da  %i linha da matriz: ", z+1, w+1);
		scanf("%d" , &mat2[z][w]);
		}
	}
	
	for (x=tamanho-1; x>=0; x--){
			for (y=tamanho-1; y>=0; y--){
					printf("%d " , mat[x][y]);
				       
				} printf("\n");
			}
			
	for (z=tamanho-1; z>=0; z--){
			for (w=tamanho-1; w>=0; w--){
					printf("%d " , mat[z][w]);
				       
				} printf("\n");
			}

	mat[x][y]+mat2[z][w]=mat3[a][b];
	printf("");
	
	
	
	
	getch ();
return 1;
}



