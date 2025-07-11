#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "libprg/libprg.h"

typedef struct avl {
    int val, tam;
    struct no *menor, *maior;
} node_avl_t;

node_avl_t* create_avl() {
    node_avl_t *no = (node_avl_t*) malloc (sizeof(node_avl_t));
    no->val = NULL;
    no->tam = 1;
    no->maior = no->menor = NULL;
    return no;}

int altura(node_avl_t *v) {
    if (v == NULL) {
        return 0;}
    return v->tam;}

int balanceio(node_avl_t *v) {
    if (v == NULL) {
        return 0;}
    return altura(v->menor) - altura(v->maior);}

node_avl_t* add_avl(node_avl_t* root, int value);
node_avl_t* remove_avl(node_avl_t* root, int value);
bool search_avl(node_avl_t* root, int value);
void in_order_avl(node_avl_t* root);
void pre_order_avl(node_avl_t* root);
void post_order_avl(node_avl_t* root);

