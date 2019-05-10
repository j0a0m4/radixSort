#include "fx.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    Fila *ptr = adicionar_na_fila(NULL,"254");
    adicionar_na_fila(ptr,"765");
    adicionar_na_fila(ptr,"12");
    visualizar_fila(ptr);
    // Para remover precisamos atualizar o ponteiro do inicio da fila com essa atribuição
    ptr = remover_da_fila(ptr);
    visualizar_fila(ptr);
    return 0;
}
