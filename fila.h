#if !defined(FILA_H)
#define FILA_H

typedef struct head {
    struct fila *prox;
} Head;


typedef struct fila {
    int num;
    struct fila *prox;
} Fila;

// Função para inicializar vetor com as filas
Head *inicializar_vetor(int len);
// Função para visualizar vetor com as filas
void visualizar_vetor_filas(Head *vetor, int len);
// Função para adicionar elemento na fila
void *adicionar_na_fila(Head *head, int elem);
// Função para remover elemento na fila
void *remover_da_fila(Head *head);
// Função para visualizar fila
void visualizar_fila(Head *head);
// Função para percorrer fila até o último elemento
Fila *percorrer_fila(Fila *node);

#endif // FILA_H
