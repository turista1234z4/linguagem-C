#include <stdio.h>

int main() {
    int idades[10];
    int maiorOuIgual18 = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);

        if (idades[i] >= 18) {
            maiorOuIgual18++;
        }
    }

    printf("Quantidade de pessoas com idade maior ou igual a 18 anos: %d\n", maiorOuIgual18);

    return 0;
}




