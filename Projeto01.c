#include <stdio.h>
#include <stdlib.h>
#include "Projeto01.h"

int counterWord() {
    int total = 0;
    char title[1000];
    char searchword[1000];
    int specific=0;
    char extra[1000];

    printf("Insira o nome do arquivo: ");
    scanf("%s", title);
    scanf("%s", searchword)
    
    FILE *f = fopen(title, "r");

    if (!f) {
        printf("Erro na abertura do arquivo\n");
        return 1;
    }

    while (fscanf(f, " %s", title) == 1) {
        puts(extra);
        if(extra == searchword){
        specific++;
        }
        
        total++;
    }
    printf("Palavras Totais: %d\n", total);
    if(!specific){printf("Quantidade da Palavra Selecionada: %d\n", specific);}
    fclose(f);
    return 0;
}
