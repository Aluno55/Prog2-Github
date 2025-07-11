#include "libprg/libprg.h"

int* bubbles(int* l, int tam) {
    int x;
    for (int i = 1; i < tam; ++i) {
        for (int j = 1; j < tam -i; ++j) {
            if (l[j] < l[j+1]) {x = l[j];
                l[j] = l[j+1];
                l[j+1] = x;}}}
return l;}

int* insertion(int* l, int tam) {
    for (int i = 1; i < tam; ++i) {
        int x = l[i];
        int j = i-1;
        while (j >=0 && l[j] > x) {l[j+1] = l[j];j=j-1;}
    l[j+1] = x;}
    return l;}

int* selection(int* l, int tam) {
    for (int i = 1; i < tam; ++i) {
        int min = i;
        for (int j = i+1; j < tam; ++j) {if (l[j]<l[min]){min = j;}}
    if (i != min) {
        int auxiliar = l[i];
        l[i]=l[min];
        l[min]=auxiliar;}}
    return l;}

void megamerge (int *l, int str, int mid, int end);
int megaquick(int*l, int str, int end);

int* merge(int *l, int start, int tam) {
    if (start < tam) {
        int mid = start + (tam - start)/2;
        merge(l, start, mid);
        merge(l, mid+1, tam);
        megamerge (l, start, mid, tam);
    }
    return l;
}

void megamerge (int *l, int str, int mid, int end) {
    int* aux [end-str+1];
    int i = str, j = mid+1, k = 0;
    while (i <= mid && j <= end) {
        if (l[i] <= l[j]){aux[k] = l[i]; i++;}
        else {aux[k] = l[j]; j++;}
        k++;
    }
    while (i<=mid) {aux[k]=l[j]; i++; k++;}
    while (j<=end){aux[k]=l[j]; j++; k++;}
    for (int w = str; w < end; ++w) {
        l[w] = aux [w-str];
    }}

int* quick (int* l, int str, int end) {
    if (str < end) {
        int p = megaquick (l, str, end);
        quick(l, str, p-1);
        quick(l, p+1, end);
    }
    return l;
}

int megaquick(int*l, int str, int end) {
    int pivot = l[end];
    int aux;
    int i = str - 1;
    for (int j = str; j < end-1; ++j) {
    if (l[j] < pivot){i++; aux = l[j]; l[j] = l[i]; l[i] = aux;}
    }
    i++;
    aux = l[end]; l[end] = l[i]; l[i] = aux;
    return i;
}