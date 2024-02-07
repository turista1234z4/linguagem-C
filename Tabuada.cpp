#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>
int y,z=0,x;
int main (){
setlocale(LC_ALL ,"portuguese");
printf("Entre com um numero inteiro: ");
scanf("%i" , &z);

for(x=1; x<=10; x=x+1){
	y=(z*x);
	printf ("\n%i x %i= %i" , z,x,y);
}
	
	getch();
	return(1);
}




