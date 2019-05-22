#include "fila.h"
#include <stdlib.h>
#include <stdio.h>

Head *inicializar_vetor(int len) {
    Head *vetorFilas = (Head *) malloc(len * sizeof(Head));
    Head *vetor = vetorFilas;
    for (int i = 0; i < len; i++) {
        // Inicialização do vetor
        vetorFilas = (Head *) malloc(sizeof(Head));
        vetorFilas++;
    }
    return vetor;
}

void *adicionar_na_fila(Head *head, int elem) {
    Fila *new = (Fila *) malloc(sizeof(Fila));
    new->num = elem;
    new->prox = NULL;
    // Caso a fila não esteja vazia
    if (head->prox != NULL) {
        // Adicionando ao final da fila
        Fila *node = head->prox;
        node = percorrer_fila(node);
        node->prox = new;
    } else {
        head->prox = new;
    }
}

Fila *remover_da_fila(Fila *node) {
    Fila *ptr = node->prox;
    free(node);
    // Esse retorno é obrigatório, para atualizar o ponteiro do inicio da fila em main
    return ptr;
}

void visualizar_fila(Head *head) {
    Fila *node = head->prox;
    printf("----------Fila---------\n");
    while (node != NULL) {
        printf("Num: %d \n", node->num);
        node = node->prox;
    }
}

Fila *percorrer_fila(Fila *node) {
    while (node->prox != NULL) {
        node = node->prox;
    }
    return node;
}