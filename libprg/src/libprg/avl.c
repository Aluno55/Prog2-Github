#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "libprg/libprg.h"

//create não tem valor??? criar no add?

typedef struct avl {
    int val, tam;
    struct no *menor, *maior;
} node_avl_t;

node_avl_t* create_avl() {
    node_avl_t *no = (node_avl_t*) malloc (sizeof(node_avl_t));
    no->tam = 1;
    no->maior = no->menor = NULL;
    return no;}

void in_order_avl(node_avl_t* root){
if (root) {
        in_order_avl(root->menor);
        printf("%d", root->val);
        in_order_avl(root->maior);}};

void pre_order_avl(node_avl_t* root){
if (root) {
        printf("%d", root->val);
        pre_order_avl(root->menor);
        pre_order_avl(root->maior);}};

void post_order_avl(node_avl_t* root){
if (root) {
        post_order_avl(root->menor);
        post_order_avl(root->maior);
        printf("%d", root->val);}};  

int altura(node_avl_t *v) {return v? v->tam : 0;}
int balanceio(node_avl_t *v) {return v? (altura(v->menor) - altura(v->maior)) : 0;}

#define max(a,b) (((a) > (b)) ? (a) : (b))

int left(node_avl_t *v){
    node_avl_t* u = v->maior;
    v->maior = u->menor;
    u->menor = v;
    v->tam = max(altura(v−>menor), altura(v−>maior)) + 1;
    u->tam = max(altura(u−>menor), altura(u−>maior)) + 1;
    return u;}

int right(node_avl_t *v){
    node_avl_t* u = v->menor;
    v->menor = u->maior;
    u->maior = v;
    v->tam = max(altura(v−>menor), altura(v−>maior)) + 1;
    u->tam = max(altura(u−>menor), altura(u−>maior)) + 1;
    return u;}

node_avl_t ∗double_right(node_avl_t ∗v) {
v->menor = left(v->menor);
return right(v);}

node_avl_t ∗double_left(node_avl_t ∗v) {
v->maior = right(v->maior);
return left(v);}

node_avl_t* add_avl(node_avl_t* root, int value){
    if (!root){
        root = create_avl();
        root->val = value;
        return root;}
    if (value < root->val){
        root->menor = add_avl (root->menor, value);
    } else if (value > root->val){
        root->maior = add_avl(root->maior, value);
    } else return root;
    root->tam = max(altura(root->menor), altura(root->maior)) + 1;

    int x = balanceio(root);
   

    
    return root;}

node_avl_t* remove_avl(node_avl_t* root, int value);
bool search_avl(node_avl_t* root, int value);  
