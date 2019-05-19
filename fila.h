#if !defined(FILA_H)
#define FILA_H

typedef struct fila {
    int num;
    struct fila *prox;
} Fila;

Fila *adicionar_na_fila(Fila *node, int elem);
Fila *remover_da_fila(Fila *node);
void visualizar_fila(Fila *node);
Fila *percorrer_fila(Fila *node);

#endif // FILA_H
