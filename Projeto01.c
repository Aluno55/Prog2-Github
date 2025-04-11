#include <stdio.h>
#include <stdlib.h>
#include "Projeto01.h"

int aquilo(){
int repeats = 1;
char title[1000];
char searchword[50] = ' ' ;

    printf("Insira o nome do arquivo: ");
    scanf("%s.txt", title);

    FILE *f = fopen(title, "r");

    if (!f) {printf("Erro na abertura do arquivo\n");return 1;}
    scanf("%[^\n]", searchword);

    while (!feof(f)) {
    if(){
        
        fscanf(f, "%s", );
        fseek(f, sizeof (title), SEEK_SET);
    }
    repeats++
    }

    

    
    fclose(f);return 0;}
