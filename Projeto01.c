#include <stdio.h>
#include <stdlib.h>
#include "Projeto01.h"
#include <time.h>
#include <string.h>

void minus(char* str){
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');
        }
    }
}

void totalWords(){
    char limbo[]= " \n.,;:!?'()[]{}<>-_/|@#$%^&*+=";
    char vine[200];
    int count = 0;
    char title[200];
    printf("Insira o nome do arquivo: ");
    scanf("%s", title);
    FILE *f = fopen(title, "r");
    if (!f) {printf("Erro na abertura do arquivo\n");exit(EXIT_FAILURE);}
    while (!feof(f) && fscanf(f, " %s", vine) != 0){
        char* token = strtok(vine, limbo);
        while (token != NULL) {count++;
            token = strtok(NULL, limbo);}}
fclose(f);}

void searchWords(char *wordle){
    char limbo[]= " \n.,;:!?'()[]{}<>-_/|@#$%^&*+=";
    char vine[200];
    int count = 0;
    char title[200];
    printf("Insira o nome do arquivo: ");
    scanf("%s", title);
    FILE *f = fopen(title, "r");
    if (!f) {printf("Erro na abertura do arquivo\n");exit(EXIT_FAILURE);}
    fgets(vine, sizeof(*vine), f);
    char* token = strtok(vine, limbo);
    while (token != NULL) {minus(token);
        if (strcmp(token, wordle) == 0) {count++;}
        token = strtok(NULL, limbo);}
fclose(f);}