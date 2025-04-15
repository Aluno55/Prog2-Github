#include <stdio.h>
#include <stdlib.h>
#include "Projeto01.h"

int counterWord() {
    int repeats = 0;
    char title[1000];
    char searchword[1000];

    printf("Insira o nome do arquivo: ");
    scanf("%s", title);

    FILE *f = fopen(title, "r");

    if (!f) {
        printf("Erro na abertura do arquivo\n");
        return 1;
    }

    while (fscanf(f, " %s", title) == 1) {
        puts(title);
        repeats++;
    }
    printf("Palavras:%d\n", repeats);
    fclose(f);
    return 0;
}
