#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<locale.h>


int main() {
	setlocale(LC_ALL ,"portuguese");
    int numeros[10];  // Vetor para armazenar os n�meros
    int soma = 0;
    int media_num = 0;
    int media_den = 10; // N�mero de elementos

    // Solicitar ao usu�rio para digitar os n�meros
    printf("Digite 10 n�meros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("N�mero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    // Calcular a m�dia usando representa��o de fra��es
    media_num = soma;

    // Imprimir a m�dia
    printf("A m�dia dos n�meros �: %d/%d\n", media_num, media_den);

    return 0;
}

