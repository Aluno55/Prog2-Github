#include "Projeto01.h"

int multiplicar (int x, int y) {
    if (x == 0 || y == 0) return 0;
    return x + multiplicar(x, y-1);
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
    if (ag <= 1) return ag;
    return gold(ag-1) + gold(ag-2);
}

int vector (int* ling, int tam) {
    if (tam == 0) return 0;
    return ling[tam-1] + vector(ling, tam-1);
}

int bi_search (int* vector, int tam, int val, int start) {
    if (val == vector[tam - start]/2) return -1;
    if (vector[tam - start]/2 < val) return bi_search(vector, tam, val, (tam - start)/2);
    if (vector[tam - start]/2 > val) return bi_search(vector, (tam - start)/2, val, start);
}