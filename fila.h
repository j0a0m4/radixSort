#if !defined(FILA_H)
#define FILA_H

typedef struct fila {
    // estamos armazenando o num como char para podermos acessar os dígitos pelos indíce ex.: num = 245, num[2] = 5;
    char *num;
    struct fila *prox;
} Fila;

Fila *adicionar_na_fila(Fila *node, char *elem);
Fila *remover_da_fila(Fila *node);
void visualizar_fila(Fila *node);
Fila *percorrer_fila(Fila *node);

#endif // FILA_H
