#include "libprg/libprg.h"
#include <stdlib.h>

typedef struct nutz {
    int val;
    link* antes;
    link* proxima;
} link;

link* criar(int value) {
    link* chai = (link*) malloc(sizeof(link));
    chai->val = value;
    chai->proxima = NULL;
    chai->antes = NULL;
    return chai;
}

link* adicione(int valuer, link* head) {
    link* neonut = criar(valuer);  
    neonut->proxima = head;    
    head->antes = neonut;   
    return neonut;
}

void remora(link** noz, int value) {
    link* target = *noz;

    while (target->proxima) {
        if (target->val == value) {
            if (!target->antes) {
                *noz = target->proxima;
            } else {target=target->proxima;}
                free (target);
                break;
        }
        target = target->proxima;
    }
}

void destruidor (link** noz) {
    link* target = *noz;
    link* next = NULL;
    while (target) {
        next = target->proxima;
        free(target);
        target=next;
    }
    *noz=NULL;
}