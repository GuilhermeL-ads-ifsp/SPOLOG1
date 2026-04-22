#include <stdio.h>

int main() {
    int opcao = 0;

    while (opcao != 5) {
        printf("\n--- MENU ---\n");
        printf("1 . Atacar com a espada\n");
        printf("2. Usar magia de defesa\n");
        printf("3. Beber poção de cura\n");
        printf("4. Tentar fugir da batalha\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Voce escolheu: Atacar com a espada.\n");
                break;

            case 2:
                printf("Voce escolheu: Usar magia de defesa.\n");
                break;

            case 3:
                printf("Voce escolheu: Beber poção de cura.\n");
                break;

            case 4:
                printf("Tentar fugir da batalha...\n");
                break;

            default:
                printf("Opcao invalida! Turno perdido .\n");
        }
    }

    return 0;
}
