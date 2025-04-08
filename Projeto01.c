#include <stdio.h>
#include <stdlib.h>
#include "Projeto01.h"

int aquilo(){
int repeats = 0;
char title[50];
char word [50];

    printf("Insira o nome do arquivo: ");
    scanf("%s", &title);

    FILE *f = fopen(title, "r");

    if (!f) {
        printf("Erro na abertura do arquivo\n");
        return 1;}

    printf("Insira uma palavra para procurar (nada para quantidade maxima): ");
    scanf("%s", &word[0]);

    while (!feof(f)) {
        fseek(f, sizeof (title), SEEK_SET);




    }

    fclose(f);return 0;}