#include <stdio.h>
#include <stdlib.h>
#include "Projeto01.h"

int same(char* word, char* search){
    for(int i = 0; word[i] != '\0' && search [i] != '\0'; i++){
        if (word[i] != search[i])
            {return word[i] == '\0' && search[i] == '\0';}
    } return 1;
};

int counterWord(int count, char* search) {
    int total = 0;
    char title[300];
    char searchword[1000];
    int specific=0;
    char extra[1000];

    printf("Insira o nome do arquivo: ");
    scanf("%s", title);

    FILE *f = fopen(title, "r");
    if (!f) {
        printf("Erro na abertura do arquivo\n");
        return 1;
    }

    fgets(title, sizeof(title), f);
    feof(f);


    while (fscanf(f, " %s", extra) == 1) {
        if(same(extra, searchword)){
        specific++;
        }
        
        total++;
    }
    printf("Palavras Totais: %d\n", count);
    if(specific){
      printf("Quantidade da Palavra Selecionada: %d\n", specific);
    }
    fclose(f);
    return 0;
}