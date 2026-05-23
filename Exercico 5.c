#include <stdio.h>

int main() {
    int vendas[4][3];
    int i, j;
    int total_produto;
    int total_mes[3] = {0, 0, 0}; // Vetor para guardar a soma de cada um dos 3 meses
    int maior_venda_mes, melhor_mes;

    // 1 e 2. Lendo os dados da matriz
    printf("--- Entrada de Dados de Vendas ---\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 3; j++) {
            printf("Produto %d, Mes %d: ", i + 1, j + 1);
            scanf("%d", &vendas[i][j]);
        }
        printf("\n");
    }

    // 3. Calculando e exibindo o total vendido por produto (Soma das Linhas)
    printf("--- Total Vendido por Produto no Trimestre ---\n");
    for(i = 0; i < 4; i++) {
        total_produto = 0; // Reseta o somador para o próximo produto
        for(j = 0; j < 3; j++) {
            total_produto += vendas[i][j];
            
            // Aproveitando o mesmo laço para acumular o total de cada mês (Soma das Colunas)
            total_mes[j] += vendas[i][j];
        }
        printf("Produto %d: %d unidades vendidas\n", i + 1, total_produto);
    }

    // 4. Descobrindo o mês com maior número total de vendas
    maior_venda_mes = total_mes[0];
    melhor_mes = 1; // Começamos assumindo que o mês 1 (índice 0) é o maior

    for(j = 1; j < 3; j++) {
        if(total_mes[j] > maior_venda_mes) {
            maior_venda_mes = total_mes[j];
            melhor_mes = j + 1; // +1 apenas para exibir o número real do mês ao usuário
        }
    }

    printf("\n--- Analise Mensal ---\n");
    printf("O mes com maior numero de vendas foi o Mes %d, com um total de %d produtos vendidos.\n", melhor_mes, maior_venda_mes);

    return 0;
}
