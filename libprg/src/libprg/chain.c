#include "libprg/libprg.h"
#include <stdlib.h>

typedef struct no {
    int val;
    trilha* prox;
} trilha;

trilha* creationism(int value) {
    trilha* chai = (trilha*) malloc(sizeof(trilha));
    chai->val = value;
    chai->prox = chai;
    return chai;
}

trilha* chained(int valuer, trilha* head) {
    trilha* neonut = creationism(valuer);
    neonut->prox = head;

    //ouroboros
    trilha* target = head;
    while (target->prox != head)
    {target = target->prox;}

    return neonut;
}
    /*  incluindo no fim  */
    // trilha* tails = head;
    // while (tails->prox != NULL) {
    //     tails = tails->prox;}
    // tails->prox = neonut;

trilha* searchers (trilha* ch, int vel) {
    trilha* target = ch;
    while (target){
        if (target->val == vel){return target;}
        //utiliza %x por ser valor de memoria hexa
        target = target->prox;
    }
    return NULL;
}

    //passa o endereço, &vetor
void unchain(trilha** noz, int value) {
    trilha* target = *noz;
    trilha* ant = NULL;
    while (target) {
        if (target->val == value) {
            if (!ant) {
                *noz = target->prox;
            } else {ant->prox=target->prox;}
                free (target);
                break;
        }
        ant = target;
        target = target->prox;
    }
}
    //passa o endereço, &vetor
void eliminate (trilha** noz) {
    trilha* target = *noz;
    trilha* next = NULL;
    while (target) {
        next = target->prox;
        free(target);
        target=next;
    }
    *noz=NULL;
}

trilha* reverses(trilha* l) {
    trilha *at = l, *nx = l->prox, *pr = NULL;
    while (at->prox != NULL) {
        at->prox=pr;
        pr=at;
        at=nx;
        nx=at->prox;
    }
    l = at;
    return l;
}