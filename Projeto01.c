#include <stdio.h>
#include <stdlib.h>
#include "Projeto01.h"
#include <time.h>

#include <string.h>



int counterWord(int count, char* search) {
    int total = 0;
    // Pedi ajuda para Chat GPT a fazer a parte do tempo, explicando que as vezes o retorno não é int nem long.
    time_t irl= time(NULL);
    clock_t cpu=clock();
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
    printf("Palavras Totais: %d\n", total);
//      printf("Quantidade da Palavra Selecionada: %d\n", specific);
    printf("Tempo de Execução da CPU: %.6f\n", ((double)(clock() - cpu)) / CLOCKS_PER_SEC);
    printf("Tempo de Execução no fisico: %.6f segundos\n", time(NULL) - irl);
    fclose(f);return 0;
}
