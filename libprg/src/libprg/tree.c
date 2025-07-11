#include <stdio.h>
#include <stdlib.h>
#include "libprg/libprg.h"

typedef struct no {
    int val, tam;
    struct no *menor, *maior;
} tree_t;

tree_t *ramificar(int val) {
    tree_t *no = (tree_t*) malloc (sizeof(tree_t));
    no->val = val;
    no->tam = 1;
    no->maior = no->menor = NULL;
    return no;}

void arsonist(tree_t *t) {
    if (t != NULL) {
        arsonist(t->menor);
        arsonist(t->maior);
        free(t);}}

tree_t* growth(tree_t* root, int v) {
    if (root==NULL) {return ramificar(v);}
    if (v< root->val){root->menor = growth(root->menor, v);}
    else if (v> root->val){root->maior = growth(root->maior, v);}
    return root;}

tree_t *cut(tree_t*r, int v) {
    if (r==NULL){return r;}
    if (v < r->val) {r->menor = cut(r->menor, v);
    } else if (v > r->val) {r->maior = cut(r->maior, v);
    } else if (r->val == v) {return NULL;
    } else{}//???
    }

bool searchTree (tree_t *r, int v) {
    if (r == NULL) return false;
    if (v == r->val) return true;
    if (v < r->val) return searchTree(r->menor, v);
    return searchTree(r->maior, v);}

bool searchTreeBoogaloo(tree_t* r, int v) {
    tree_t* t = r;
    while (t !=NULL) {
        if (v == t->val) return true;
        if  (v < t->val) {t = t->menor;}
        else {t=t->maior;}
    }return false;}

void inorder (tree_t *t) {
    if (t != NULL) {
        inorder(t->menor);
        printf("%d", t->val);
        inorder(t->maior);}}

void preorder (tree_t *t) {
    if (t != NULL) {
        printf("%d", t->val);
        preorder(t->menor);
        preorder(t->maior);}}

void posorder (tree_t *t) {
    if (t != NULL) {
        posorder(t->menor);
        posorder(t->maior);
        printf("%d", t->val);}}

// void lorder (tree_t* x) {
//     queue_t* f = creation();
//     while (x != NULL) {
//         printf("%d", x->val);
//         if (x->menor != NULL) {} // ???
//         if (x->maior != NULL){} // ???
//     //x = ???
//     }
// }
// int bonsai (tree_t *t) {
//     if (t != NULL) {
//         return heights(t->menor) - heights(t->maior);
//     } return 0;}
//
// # define max(a,b) ((a>b)) ? a : b
//
// tree_t* left(tree_t* v) {
//     tree_t* u= v->maior;
//     v->maior = u->menor;
//     u->menor = v;
//     v->tam = max(heights(u->menor), heights(v->maior))+1;
//     u->tam = max(heights(v->menor), heights(u->maior))+1;
//     return u;}
//
// tree_t* doubleleft(tree_t* v) {
//     v->menor = left(v->menor);
//     return v->maior;}