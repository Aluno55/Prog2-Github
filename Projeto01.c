#include "Projeto01.h"

int recursiva (int x, int y) {
    if (x == 0 || y == 0) return 0;
    return x + recursiva(x, y-1);
}

int potency(int x, int y) {
    if (x == 0 || y == 0) return 1;
    return x * potency(x, y-1);
}

int fatorial(int fat) {
    if (fat <= 1) return 1;
    return fat * fatorial(fat-1);
}

int gold (int ag) {
    if (ag == 0) return 0;
    if (ag == 1) return 1;
    return gold(ag-1) + gold(ag-2);
}

int vector (int* ling, int tam) {
    if (tam == 0) return 0;
    return ling[tam-1] + vector(ling, tam-1);
}
