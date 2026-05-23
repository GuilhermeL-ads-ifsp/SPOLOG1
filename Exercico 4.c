#include <stdio.h>

int main() {
    int A[2][2], B[2][2], C[2][2];
    int i, j;

    // Lendo os valores da Matriz A
    printf("Digite os valores para a Matriz A (2x2):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\n");

    // Lendo os valores da Matriz B
    printf("Digite os valores para a Matriz B (2x2):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Calculando a Matriz C (Soma de A + B)
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Imprimindo a Matriz C resultante
    printf("\nMatriz C resultante (A + B):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d\t", C[i][j]); // O \t serve para alinhar em colunas
        }
        printf("\n"); // Quebra de linha ao fim de cada linha da matriz
    }

    return 0;
}

