#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>

float x,z, resultado;
char y;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	printf("Entre com um n�mero real: ");
		scanf("%f" ,&x);
		
	printf("\nEntre com outro n�mero real: ");
		scanf("%f" ,&z);
		
	printf("\nEntre com o operador (+,-,*,/): ");
		scanf(" %c" ,&y);
		  	
	switch (y) {
        case '+':
            resultado = x + z;
            printf("%.2f + %.2f = %.2f\n", x, z, resultado);
            break;
        case '-':
            resultado = x - z;
            printf("%.2f - %.2f = %.2f\n", x, z, resultado);
            break;
        case '*':
            resultado = x * z;
            printf("%.2f * %.2f = %.2f\n", x, z, resultado);
            break;
        case '/':
            if (z != 0) {
                resultado = x / z;
                printf("%.2f / %.2f = %.2f\n", x, z, resultado);
            } else {
                printf("Erro: Divis�o por zero n�o � permitida.\n");
            }
            break;
        default:
            printf("Operador inv�lido. Use +, -, *, ou /.\n");
    }

	
	
getch ;
return 1;	
}

//*dado dois n�meros reais e um caractere (+,-,*,/) representando uma opera��o a ser feita, calcule e informe o resultado da opera��o
