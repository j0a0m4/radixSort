#include "fila.h"
#include "fx.h"
#include <stdio.h>
#include <stdlib.h>

 int main(int argc, char const *argv[]) {
    // Variaveis
    int b, n, d;
    b = 10;
    // Entrada Usuario
    printf("Insira número de elementos: ");
    scanf("%d", &n);
    printf("Insira número de dígitos: ");
    scanf("%d", &d);
    // Vetor com numeros gerados aleatoriamente
    int *vetor = gerar_lista(n, d);
    visualizar_lista(vetor, n);
    // Vetor com as filas
    Head *vetorFilas = inicializar_vetor(b);
    visualizar_vetor_filas(vetorFilas, b);
    return 0;
 }