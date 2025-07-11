#include <stdio.h>
#include <stdlib.h>
#include "libprg/libprg.h"

typedef struct Pillar {
    int*elemental;
    int top;
    int capacity;
} pill_t;

pill_t* creator() {

    // create the pile
    pill_t *pillbug = (pill_t*) malloc(sizeof(pill_t));

    // size the pile
    pillbug->elemental = (int*) malloc(sizeof(int)* INITIAL);
    pillbug->top = -1;
    pillbug->capacity = INITIAL;
    return pillbug;}

void push(pill_t* pinha, int value) {
    if (pinha->top+1 >= pinha->capacity) {
        printf("I'm filled to the brim!"); exit(EXIT_FAILURE);}
    pinha->elemental[pinha->top] = value;
    pinha->top++;}

int pop(pill_t* pinha) {
    int value = pinha->elemental[pinha->top];
    pinha->top--;
    if (pinha->top < 0) {
        printf("I'm empty!");exit(EXIT_FAILURE);}
        return value;}

int size(pill_t* pinha){return pinha->top+1;}

int empty(pill_t* pinha){return pinha->top<0;}

void destruct(pill_t* pinha){
    free(pinha->elemental);
    free(pinha);
}