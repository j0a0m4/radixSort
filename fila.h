#if !defined(FILA_H)
#define FILA_H

typedef struct head {
    struct fila *prox;
} Head;


typedef struct fila {
    int num;
    struct fila *prox;
} Fila;

Head *inicializar_vetor(int len);
void *adicionar_na_fila(Head *head, int elem);
Fila *remover_da_fila(Fila *node);
void visualizar_fila(Head *head);
void visualizar_vetor_filas(Head *vetor, int len);
Fila *percorrer_fila(Fila *node);

#endif // FILA_H
