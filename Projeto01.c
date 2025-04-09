#include <stdio.h>
#include <stdlib.h>
#include "Projeto01.h"

int aquilo(){
int repeats = 1;
char title[1030];
char searchword = ' ' [50];

    printf("Insira o nome do arquivo: ");
    scanf("%s", title);

    FILE *f = fopen(title, "r");

    if (!f) {printf("Erro na abertura do arquivo\n");return 1;}

    printf("Insira uma palavra para procurar (nada para quantidade maxima): ");
    scanf("%s", searchword);

    while (!feof(f)) {
    if(){
        fseek(f, sizeof (title), SEEK_SET);
    }



    }

    fclose(f);return 0;}
