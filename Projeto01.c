#include <stdio.h>
#include <stdlib.h>
#include "Projeto01.h"
#include <ctype.h>
#include <string.h>

#define limbo " \n.,;:!?'()[]{}<>-_/|@#$%^&*+="

// Pesquisando me mostrou um tolower que funciona além do ASCII
void minus(char* str){
    for (int i = 0; str[i]; i++) {
        tolower(str[i]);
}}

void totalWords(char *title){
    char vine[200];
    int count = 0;

    FILE *f = fopen(title, "r");
    if (!f) {printf("Erro na abertura do arquivo\n");exit(EXIT_FAILURE);}
    while (!feof(f) && fscanf(f, " %s", vine) != 0){
        char* token = strtok(vine, limbo);
        while (token != NULL) {
            count++;
            token = strtok(NULL, limbo);}}
fclose(f);}

void searchWords(char *wordle, char *title){
    char vine[200];
    int count = 0;

    FILE *f = fopen(title, "r");
    if (!f) {printf("Erro na abertura do arquivo\n");exit(EXIT_FAILURE);}
    fgets(vine, sizeof(*vine), f);
    char* token = strtok(vine, limbo);
    while (token != NULL) {minus(token);
        if (strcmp(token, wordle) == 0) {count++;}
        token = strtok(NULL, limbo);}
fclose(f);}