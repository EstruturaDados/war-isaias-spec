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
    struct Territorio t[QTD]; // vetor estático com 5 territórios

    printf("========================================\n");
    printf("BEM-VINDO AO WAR\n");
    printf("========================================\n");
    printf("Pressione ENTER para continuar.\n");
    getchar();

    printf("Nome do mapa: ");
    fgets(nomeMapa, 50, stdin);
    nomeMapa[strcspn(nomeMapa, "\n")] = '\0';

    printf("Mapa: %s\n", nomeMapa);
    return 0;
}

