#include <stdio.h>
#include <string.h>
#include <time.h>

#include "Projeto01.h"

int main(int argc, char *argv[]) {
    time_t irl = time(NULL);
    clock_t cpu = clock();

    printf("Insira o nome do arquivo: ");

    if (argc == 1) {
        printf("Falta informar o arquivo\n");
    } else if (argc == 2) {
        FILE *f = fopen(argv[2], "r");
        totalWords(*argv);
    } else if (argc == 3) {
        searchWords(argv[3], *argv);
    } else if (argc >= 4) {
        argv[2] == "--letra";
    } //placeholder

    printf("Tempo de Execução da CPU: %.5ld\n", (clock() - cpu) / CLOCKS_PER_SEC);
    printf("Tempo de Execução no fisico: %.5ld segundos\n", time(NULL) - irl);
    return 0;
}
