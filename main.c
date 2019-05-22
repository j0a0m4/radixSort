#include "fila.h"
#include "fx.h"
#include <stdio.h>
#include <stdlib.h>

 int main(int argc, char const *argv[]) {
    // Variáveis
    int b, n, d;
    b = 10;
    printf("Insira número de elementos: ");
    scanf("%d", &n);
    printf("Insira número de dígitos: ");
    scanf("%d", &d);
    // Vetor com numeros gerados aleatoriamente
    int *vetor = gerar_lista(n,d);
    visualizar_lista(vetor,n);
    // Vetor com as filas
    Head *vetorFilas = inicializar_vetor(b);
    adicionar_na_fila(&vetorFilas[0],20);
    adicionar_na_fila(&vetorFilas[0],30);
    visualizar_fila(&vetorFilas[0]);
    return 0;
 }
 
