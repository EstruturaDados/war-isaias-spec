#include <stdio.h>
#include <string.h>

#define QTD 5
#define TROPAS_PADRAO 300

struct Territorio {
    char nome[50];
    char cor[20];
    int tropas;
};

int main() {
    struct Territorio t[QTD];
    char nomeMapa[50];
    int i;

    printf("========================================\n");
    printf("BEM-VINDO AO WAR\n");
    printf("========================================\n");
    printf("- Cadastro do mapa com %d territorios.\n", QTD);
    printf("- Cada territorio inicia com %d tropas.\n", TROPAS_PADRAO);
    printf("Pressione ENTER para continuar.\n");
    getchar();

    printf("Nome do mapa: ");
    fgets(nomeMapa, 50, stdin);
    nomeMapa[strcspn(nomeMapa, "\n")] = '\0';

    for (i = 0; i < QTD; i++) {
        printf("\nTerritorio %d\n", i + 1);

        printf("Nome: ");
        fgets(t[i].nome, 50, stdin);
        t[i].nome[strcspn(t[i].nome, "\n")] = '\0';

        printf("Cor: ");
        fgets(t[i].cor, 20, stdin);
        t[i].cor[strcspn(t[i].cor, "\n")] = '\0';

        t[i].tropas = TROPAS_PADRAO;
    }

    printf("\n=== MAPA: %s ===\n", nomeMapa);
    printf("%-20s | %-15s | %-6s\n", "Nome", "Cor", "Tropas");
    printf("---------------------------------------------\n");
    for (i = 0; i < QTD; i++) {
        printf("%-20s | %-15s | %-6d\n", t[i].nome, t[i].cor, t[i].tropas);
    }

    return 0;
}
