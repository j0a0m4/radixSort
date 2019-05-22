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
    // Vetor com as filas
    Head *vetorFilas = inicializar_vetor(b);
    // Vetor com numeros gerados aleatoriamente
    int *vetor = gerar_lista(n, d);
    visualizar_lista(vetor, n);
    // Radix Sort
    for (int i = (d - 1); i >= 0; i--) {
        // Vetor com dígitos mapeados
        int vetorMapeado[n][d];
        for (int a = 0; a < n; a++) {
            int *elem = vetorizar_int(vetor[a]);
            int len = contar_digitos(vetor[a]);
            for (int b = 0; b < len; b++) {
                vetorMapeado[a][b] = elem[b];
            } 
        }
        for (int j = 0; j < n; j++) {
            int k = vetorMapeado[j][i];
            int elem = vetor[j];
            adicionar_na_fila(&vetorFilas[k], elem);
        }
        visualizar_vetor_filas(vetorFilas, b);
        int j = 0;
        for (int k = 0; k < b; k++) {
          while ((&vetorFilas[k])->prox != NULL) {
              int aux = remover_da_fila(&vetorFilas[k]);
              vetor[j] = aux;
              j = j + 1;
          } 
        }
    }
    // Visualizar Vetor
    visualizar_lista(vetor, n);
    return 0;
 }
