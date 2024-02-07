#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<locale.h>


int main() {
	setlocale(LC_ALL ,"portuguese");
    int numeros[10];  // Vetor para armazenar os números
    int soma = 0;
    int media_num = 0;
    int media_den = 10; // Número de elementos

    // Solicitar ao usuário para digitar os números
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    // Calcular a média usando representação de frações
    media_num = soma;

    // Imprimir a média
    printf("A média dos números é: %d/%d\n", media_num, media_den);

    return 0;
}

