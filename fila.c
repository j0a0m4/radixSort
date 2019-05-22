#include "fila.h"
#include <stdlib.h>
#include <stdio.h>

Head *inicializar_vetor(int len) {
    Head *vetorFilas = (Head *) malloc(len * sizeof(Head));
    Head *vetor = vetorFilas;
    for (int i = 0; i < len; i++) {
        // Inicialização do vetor
        vetorFilas = (Head *) malloc(sizeof(Head));
        vetorFilas->prox = NULL;
        vetorFilas++;
    }
    return vetor;
}

void visualizar_vetor_filas(Head *head, int len) {
    Head *vetor = head;
    for (int i = 0; i < len; i++) {
        if (vetor->prox != NULL) {
            printf("Fila[%d]\n", i);
            visualizar_fila(vetor);
        } else {
            printf("Fila[%d] Vazia\n", i);
        }
        vetor++;
    }
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

void *remover_da_fila(Head *head) {
    Fila *node = head->prox;
    Fila *ptr = node->prox;
    free(node);
    head->prox = ptr;
}

void visualizar_fila(Head *head) {
    Fila *node = head->prox;
    while (node != NULL) {
        printf("Num: %d \n", node->num);
        node = node->prox;
    }
    printf("-------------------\n");
}

Fila *percorrer_fila(Fila *node) {
    while (node->prox != NULL) {
        node = node->prox;
    }
    return node;
}

/* exemplo de como adicionar no vetorFilas usando a funcao adicionar_na_fila
    adicionar_na_fila(endereço Head da fila, elemento que vai ser inserido);
    adicionar_na_fila(&vetorFilas[0], 20);
    adicionar_na_fila(&vetorFilas[1], 61);
    adicionar_na_fila(&vetorFilas[2], 92);
*/