#include <stdio.h>
#include <string.h>

#define QTD 5

struct Territorio {
    char nome[50];
    char cor[20];
    int tropas;
};

int main() {
    char nomeMapa[50];
    struct Territorio t[QTD];
    int i;

    printf("========================================\n");
    printf("BEM-VINDO AO WAR\n");
    printf("========================================\n");
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
    }

    return 0;
}

