#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<locale.h>
float x, y;
int main (){
	setlocale(LC_ALL ,"portuguese");
	printf("Informe o valor total de suas vendas esse m�s:");
	scanf("%f",&x);
	y= (x/100) *10;
	
	printf("Sua comiss�o � de :%.2f",y);

	
	
	getch ();
	return 1;

}
