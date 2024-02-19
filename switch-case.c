#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>

float x,z, resultado;
char y;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	printf("Entre com um número real: ");
		scanf("%f" ,&x);
		
	printf("\nEntre com outro número real: ");
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
                printf("Erro: Divisão por zero não é permitida.\n");
            }
            break;
        default:
            printf("Operador inválido. Use +, -, *, ou /.\n");
    }

	
	
getch ;
return 1;	
}

//*dado dois números reais e um caractere (+,-,*,/) representando uma operação a ser feita, calcule e informe o resultado da operação
