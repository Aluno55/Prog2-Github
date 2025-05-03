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

int counterWord(int count, char* search) {
    // Pedi ajuda pro Chat GPT fazer a parte do tempo, explicando que as vezes o retorno não é int nem long.
    time_t irl= time(NULL);
    clock_t cpu=clock();
    char title[300];
    int total = 0, specific = 0;
    char searchword[500];
    char vine[500];
    char limbo[]= " \n.,;:!?'()[]{}<>-_/|@#$%^&*+=";

    printf("Insira o nome do arquivo: ");
    scanf("%s", title);
    // Questionei o GPT para ver como não ser forçado a busca de palavra
    getchar();
    fgets(searchword, sizeof(searchword), stdin);
    searchword[strcspn(searchword, "\n")] = '\0';
    
    FILE *f = fopen(title, "r");
    if (!f) {printf("Erro na abertura do arquivo\n");return 1;}

    while (!feof(f) && total < 1000) {
        fgets(vine, sizeof(vine), f);
        char* token = strtok(vine, limbo);
        while (token != NULL) {total++;
    minus(token);
    if (strcmp(token, searchword) == 0) { specific++; }
    token = strtok(NULL, limbo);}      
    }
    //não tenho certeza dessa parte acima, não testei ainda
    //acho que deixaria tudo minusculo, move pela linha, contaria uma palavra sem problemas
    
    
    printf("Palavras Totais: %d\n", total);
//      printf("Quantidade da Palavra Selecionada: %d\n", specific);
    printf("Tempo de Execução da CPU: %.6f\n", (clock() - cpu) / CLOCKS_PER_SEC);
    printf("Tempo de Execução no fisico: %.6f segundos\n", time(NULL) - irl);
    fclose(f);return 0;
}
