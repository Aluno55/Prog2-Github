#ifndef LIBPRG_LIBPRG_H
#define LIBPRG_LIBPRG_H

#define INITIAL 10
#include <stdbool.h>



// arvore
typedef struct no tree_t;
tree_t *ramificar(int val);
void arsonist(tree_t *t);
bool searchTreeBoogaloo(tree_t* r, int v);//not inside itself
tree_t* growth(tree_t* root, int v);
tree_t *cut(tree_t*r, int v);
bool searchTree (tree_t *r, int v);
void inorder (tree_t *t);
// int bonsai (tree_t *t) ;
void preorder (tree_t *t);
void posorder (tree_t *t);
// tree_t* left(tree_t* v);
// tree_t* doubleleft(tree_t* v);

//LISTA CHAIN DOUBLE
typedef struct nutz link;
link* criar(int value);
link* adicione(int valuer, link* head);
void remora(link** noz, int value);
void destruidor (link** noz);

// LISTA CHAIN OUROBOROS
typedef struct no trilha;
trilha* creationism(int value);
trilha* chained(int valuer, trilha* head);
trilha* searchers (trilha* ch, int vel);
void unchain(trilha** noz, int value);
void eliminate (trilha** noz);
trilha* reverses(trilha* l);

// LISTA
typedef struct lista list_t;
list_t* create(bool order);
int ordoSearch(list_t* L, int val);
void addlist(list_t* L, int val);
void destruction(list_t* lia);
int search(list_t* L, int valor);
int remover(list_t* L, int valor);
list_t* sort(list_t* l);
int tama(list_t* L);

// FILA
typedef struct FIFO queue_t;
queue_t* creation();
void add(int num, queue_t * fila);
int removes(queue_t* fila);
void destroy(queue_t* fia);
int measurement(queue_t* kill);
int full(queue_t* kill);
int nothing(queue_t* kill);
int start(queue_t* Q);
int end(queue_t* Q);

// PILA
typedef struct Pillar pill_t;
pill_t* creator();
void push(pill_t* pinha, int value);
int pop(pill_t* pinha);
int size(pill_t* pinha);
int empty(pill_t* pinha);
void destruct(pill_t* pinha);

//ordenação de listas
int* bubbles(int* l, int tam);
int* insertion(int* l, int tam);
int* selection(int* l, int tam);
int* merge(int *l, int start, int tam);
int* quick (int* l, int str, int end);

typedef struct avl node_avl_t;
node_avl_t* create_avl();
node_avl_t* add_avl(node_avl_t* root, int value);
node_avl_t* remove_avl(node_avl_t* root, int value);
bool search_avl(node_avl_t* root, int value);
void in_order_avl(node_avl_t* root);
void pre_order_avl(node_avl_t* root);
void post_order_avl(node_avl_t* root);

#endif