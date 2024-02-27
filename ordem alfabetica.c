#include <stdio.h>
#include <conio.h>

int main(){

char n1[128], n2[128];


do{

	printf("Entre com uma palavra: ");
	gets(n1);
	printf("\nEntre com outra palavra: ");
	gets(n2);
	
	
	printf("Ordem alfabética : \n");
	
	if (strcmp(n1,n2)<0) 
	{
		printf("%s\n%s\n" , n1,n2);	
	}
	
	else {
		printf ("%s\n%s\n", n2,n1);
	}
	
	
}while( n1 >=0 || n1<0|| n2>=0 || n2<0);

	



return 1;
}
