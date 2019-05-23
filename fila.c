#include "fila.h"
#include <stdlib.h>
#include <stdio.h>

Head *inicializar_vetor(int len) {
    // Aloca dinamicamente memoria para vetor de ponteiros Head de tamanho len
    Head *vetorFilas = (Head *) malloc(len * sizeof(Head));
    // Ponteiro auxiliar
    Head *vetor = vetorFilas;
    // Percorre todo vetor de ponteiros
    for (int i = 0; i < len; i++) {
        // Atribui pro vetor[i] memoria para fila
        vetorFilas = (Head *) malloc(sizeof(Head));
        // Inicializa fila com ponteiro pro proximo vazio
        vetorFilas->prox = NULL;
        // Atualiza ponteiro auxiliar pra proxima posicao
        vetorFilas++;
    }
    return vetor;
}

void visualizar_vetor_filas(Head *head, int len) {
    Head *vetor = head;
    for (int i = 0; i < len; i++) {
        if (vetor->prox != NULL) {
            printf("Fila[%d]: ", i);
            visualizar_fila(vetor);
        } else {
            printf("Fila[%d]: \n", i);
        }
        vetor++;
    }
    printf("\n");
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
    // Caso a fila esteja vazia
    } else {
        head->prox = new;
    }
}

int remover_da_fila(Head *head) {
    // Apontando pro início da fila
    Fila *node = head->prox;
    // Verificar underflow
    if (node != NULL) {
        // Salvando conteudo do node que vai ser removido
        Fila *ptr = node->prox;
        int elem = node->num;
        // Desalocando node
        free(node);
        // Atualizando ponteiro de início da fila
        head->prox = ptr;
        // Retorna elemento removido
        return elem;
    }
}

void visualizar_fila(Head *head) {
    // Apontando pro início da fila
    Fila *node = head->prox;
    // Percorre toda fila enquanto tiver node
    while (node != NULL) {
        // Imprime o conteudo do node na tela
        printf("\t%d", node->num);
        // Atualiza ponteiro pro proximo node
        node = node->prox;
    }
    printf("\n");
}

Fila *percorrer_fila(Fila *node) {
    // Percorre a fila ate o ultimo node
    while (node->prox != NULL) {
        node = node->prox;
    }
    // Retorna ponteiro pro final da fila
    return node;
}
