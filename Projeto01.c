#include <stdio.h>
#include <stdlib.h>
#include "Projeto01.h"
#include <time.h>
#include <string.h>

// Alteração numa função de programação 1, utilizando ponteiro pra mudar para minuscula
void minus(char* str){
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');
        }
    }
}

int counterWord(int count, char *search[]) {
    time_t irl= time(NULL);
    clock_t cpu=clock();
    char title[200], *wordle=search[2];
    int total = 0, specific = 0;
    char vine[500];
    char limbo[]= " \n.,;:!?'()[]{}<>-_/|@#$%^&*+=";




    printf("Insira o nome do arquivo: ");
    scanf("%s", title);
    // não entendi a busca de palavra

    FILE *f = fopen(title, "r");
    if (!f) {printf("Erro na abertura do arquivo\n");return 1;}

    while (!feof(f) && total < 1000 && fscanf(f, " %s", vine) != 0) {
        fgets(vine, sizeof(vine), f);
        char* token = strtok(vine, limbo);
        while (token != NULL) {total++;
            minus(token);
            if (strcmp(token, wordle) == 0) {specific++;}
            token = strtok(NULL, limbo);}
     }

    if(specific>0){printf("Quantidade da Palavra Selecionada: %d\n", specific);}
    else{printf("Palavras Totais (Max 1000): %d\n", total);}

    printf("Tempo de Execução da CPU: %.5ld\n", (clock() - cpu) / CLOCKS_PER_SEC);
    printf("Tempo de Execução no fisico: %.5ld segundos\n", time(NULL) - irl);

    fclose(f);return 0;}