#include "Projeto01.h"

int interativa(int Y, int X) {
    int result = 0;
    for (int i = 0; i < Y; ++i) {
        result+=X;
    }
    return result;
}

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
    if (ag <= 2) return gold(ag-1) + gold(ag-2);
}