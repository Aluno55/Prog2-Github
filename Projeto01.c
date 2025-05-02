#include <stdio.h>
#include <stdlib.h>
#include "Projeto01.h"
#include <time.h>

#include <string.h>



int counterWord(int count, char* search) {
    int total = 0;
    int time=clock(), irl=;
    char title[300];
    char searchword[1000];
    char extra[1000];


    printf("Insira o nome do arquivo: ");
    scanf("%s", title);

    FILE *f = fopen(title, "r");
    if (!f) {
        printf("Erro na abertura do arquivo\n");
        return 1;
    }

    while (!feof(f)) {
        fgets(title, sizeof(title), f);
        char* token = strtok(extra, " ");
    }


    while (fscanf(f, "%s", extra) == 1) {

        total++;
    }
    printf("Palavras Totais: %d\n", count);
//      printf("Quantidade da Palavra Selecionada: %d\n", specific);
    printf("Tempo gasto pela CPU: %d", time-clock());
    fclose(f);return 0;
}
