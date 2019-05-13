#include "fila.h"
#include <stdlib.h>
#include <stdio.h>

Fila *adicionar_na_fila(Fila *node, char *elem) {
    Fila *new = (Fila *) malloc(sizeof(Fila));
    new->num = elem;
    new->prox = NULL;
    // Caso a fila não esteja vazia
    if (node != NULL) {
        // Adicionando ao final da fila
        node = percorrer_fila(node);
        node->prox = new;
    }
    // Esse retorno é facultativo, a função poderia returnar void
    return new;
}

Fila *remover_da_fila(Fila *node) {
    Fila *ptr = node->prox;
    free(node);
    // Esse retorno é obrigatório, para atualizar o ponteiro do inicio da fila em main
    return ptr;
}

void visualizar_fila(Fila *node) {
    printf("----------Fila---------\n");
    while (node != NULL) {
        printf("Num: %s \n", node->num);
        node = node->prox;
    }
}

Fila *percorrer_fila(Fila *node) {
    while (node->prox != NULL) {
        node = node->prox;
    }
    return node;
}