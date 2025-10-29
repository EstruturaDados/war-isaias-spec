#include <stdio.h>
#include <string.h>

int main() {
    char nomeMapa[50];

    printf("========================================\n");
    printf("BEM-VINDO AO WAR\n");
    printf("========================================\n");
    printf("Instrucoes:\n");
    printf("- Nesta fase, cadastro do mapa.\n");
    printf("- Cada territorio tem nome, cor e tropas fixas.\n");
    printf("\nPressione ENTER para continuar.\n");
    getchar();

    printf("Nome do mapa: ");
    fgets(nomeMapa, 50, stdin);
    nomeMapa[strcspn(nomeMapa, "\n")] = '\0';

    printf("Mapa: %s\n", nomeMapa);
    return 0;
}

