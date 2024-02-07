#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<locale.h>

int main(){
		setlocale(LC_ALL,"Portuguese");
		
	int y[20],x;
	
	printf(" Digite um numero\n " );
	for(x=0;x<20;x++){
	printf("Número %i  "  , x+1);
	scanf("%i",&y[x]);
	}
	
	
	for(x = 19;x>=0;x--){
	
	printf("\n%i", y[x]*10);
	
	}
	
	getch();
	return(1);
	};
