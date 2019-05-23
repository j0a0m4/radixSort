#include "fila.h"
#include "fx.h"
#include <stdio.h>
#include <stdlib.h>

 int main(int argc, char const *argv[]) {
    // Variaveis
    // n = quantidade de elementos a serem gerados
    // d = numero de dígitos de cada elemento
    // b = base numerica
    int b, n, d;
    b = 10;

    // Entrada Usuario
    printf("Insira número de elementos: ");
    scanf("%d", &n);
    printf("Insira número de dígitos: ");
    scanf("%d", &d);
    printf("\n");

    // Vetor de ponteiros para as filas
    Head *vetorFilas = inicializar_vetor(b);

    // Vetor com numeros gerados aleatoriamente
    int *vetor = gerar_lista(n, d);
    visualizar_lista(vetor, n);

    // Radix Sort
    for (int i = (d - 1); i >= 0; i--) {
        // Vetor com numeros mapeados vetorialmente
        int vetorMapeado[n][d];
        for (int a = 0; a < n; a++) {
            int *elem = vetorizar_int(vetor[a], d);
            for (int b = 0; b < d; b++) {
                vetorMapeado[a][b] = elem[b];
            } 
        }
        // Adicionar os numeros nas filas de acordo com o digito k
        for (int j = 0; j < n; j++) {
            int k = vetorMapeado[j][i];
            int elem = vetor[j];
            adicionar_na_fila(&vetorFilas[k], elem);
        }
        // Visualizar filas
        visualizar_vetor_filas(vetorFilas, b);
        // Esvaziar filas e reoordenar vetor
        int j = 0;
        for (int k = 0; k < b; k++) {
            while ((&vetorFilas[k])->prox != NULL) {
                int aux = remover_da_fila(&vetorFilas[k]);
                vetor[j] = aux;
                j++;
            } 
        }
        // Visualizar vetor reoordenado a cada iteracao
        visualizar_lista(vetor, n);
    }
    return 0;
}