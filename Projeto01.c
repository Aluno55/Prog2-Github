#include <stdio.h>
#include <stdlib.h>
#include "Projeto01.h"

int counterWord(){
    char space = ' ';
    int repeats = 1;
    char title[1000];
    char searchword[1000];

    printf("Insira o nome do arquivo: ");
    scanf("%s", title);

    FILE *f = fopen("../%s", "r");

    if (!f) {printf("Erro na abertura do arquivo\n");return 1;}
    scanf("%[^\n]", searchword);

    while (fscanf(f, " %s", title) == 1) {
        puts(title);
        if (searchword[0] == space) {
            repeats++;
    };
    }

    fclose(f);return 0;}