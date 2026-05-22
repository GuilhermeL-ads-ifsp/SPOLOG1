#include <stdio.h>

int main() {
    int matriz[3][3];
    int maior_valor;
    int linha_maior = 0;
    int coluna_maior = 0;

    printf("Digite os elementos para uma matriz 3x3:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            
            printf("Digite o valor para a posicao [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    
    maior_valor = matriz[0][0];

  
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] > maior_valor) {
                maior_valor = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
        }
    }

  
    printf("\n--- Resultado ---\n");
    printf("O maior valor digitado foi: %d\n", maior_valor);
    printf("Ele foi encontrado na Linha %d, Coluna %d.\n", linha_maior + 1, coluna_maior + 1);

    return 0;
}