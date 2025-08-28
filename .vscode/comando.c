#include <stdio.h>

int main() {
    int vetor[5];
    int i, maior;

    printf("Digite 5 valores:\n");
    for(i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];

    for(i = 1; i < 5; i++) {
        if(vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    printf("O maior valor é: %d\n", maior);

    return 0;
}
