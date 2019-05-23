#include "fx.h"
#include "fila.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

int *gerar_lista(int n, int d) {
    // para gerar novos items em cada execução
    srand(time(0));
    //determinar paramentros para gerar d digitos
    int limit = (int) pow(10, d);
    //alocar espaco dinamicamente na memoria para o vetor
    int *vetor = (int *) malloc(n * sizeof(int));
    // iterar sobre o vetor para adicionar elementos
    for (int i = 0; i < n; i++) {
        // gerar elemento aleatório com d digitos
        int num = rand() % limit;
        vetor[i] = num;
    }
    // retornar ponteiro para o vetor
    return vetor;
}
void visualizar_lista(int *arr, int len) {
    // iterar sobre o vetor arr de comprimento len
    printf("Tabela: ");
    for (int i = 0; i < len; i++) {
        // imprimir conteúdo na tela
        printf("\t%d", arr[i]);
    }
    printf("\n");
}

int contar_digitos(int num) {
    int count = 0;
    while (num != 0) {
        count++;
        num /= 10;
    }
    return count;
}

int *vetorizar_int(int elem, int d){
    int len = contar_digitos(elem);
    int aux[d];
    int z = 0;
    int *numero = malloc(d * sizeof(int));
    for (int i = 0; i < d; i++) {
        if (i <= (len - 1)) {
            aux[i] = elem % 10;
            elem /= 10;
        } else {
            aux[i] = 0;
        }
    }
    for (int i = (d - 1); i >= 0; i--) {
        numero[i] = aux[z];
        z++;
    }
    return numero;
}