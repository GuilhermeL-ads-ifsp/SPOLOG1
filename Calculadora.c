#include <stdio.h>

int main() {
    float numero;
    char resposta;
    int valido = 0;
    
    while (1) {  // Loop infinito - só sai com N/n
        // 1. Solicitar entrada de número real
        printf("Digite um numero real: ");
        valido = scanf("%f", &numero);
        
        // Verificar se foi digitado um número válido
        if (valido != 1) {
            printf("Entrada invalida! Digite apenas um numero real.\n\n");
            while (getchar() != '\n'); // Limpa buffer
            continue;
        }
        
        // 2. Calcular e exibir o dobro formatado com 2 casas decimais
        printf("Dobro do valor digitado: %.2f\n\n", numero * 2);
        
        // 3. Apresentar pergunta de controle de fluxo
        printf("Deseja calcular outro numero? (S para Sim / N para Nao): ");
        scanf(" %c", &resposta);
        
        // 5. Avaliar resposta
        if (resposta == 'S' || resposta == 's') {
            printf("\n"); // Continua para próximo cálculo
        } else if (resposta == 'N' || resposta == 'n') {
            // 5b. Mensagem de encerramento
            printf("Calculadora encerrada. Ate logo!\n");
            break;
        } else {
            printf("Resposta invalida! Digite apenas S ou N.\n\n");
            
        }
    }
    
    return 0;
}