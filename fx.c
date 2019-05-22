#include "fx.h"
#include "fila.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

int *gerar_lista(int n, int d) {
    // para gerar novos items em cada execução
    srand(time(0));
    //determinar limite de digitos para gerar elementos aleatorios
    int limit = (int) pow(10,d);
    //alocar espaco dinamicamente na memoria para o vetor
    int *vetor = (int *) malloc(n * sizeof(int));
    // iterar sobre o vetor para adicionar elementos
    for (int i = 0; i < n; i++) {
        // gerar elemento aleatório com limite de digitos
        int num = rand() % limit;
        vetor[i] = num;
    }
    // retornar ponteiro para o vetor
    return vetor;
}
void visualizar_lista(int *arr, int len) {
    // iterar sobre o vetor arr de comprimento len
    for (int i = 0; i < len; i++) {
        // imprimir conteúdo na tela
        printf("Vetor[%d]: %d \n",i, arr[i]);
    }
}

int contar_digitos(int num) {
    int count = 0;
    while (num != 0) {
        count++;
        num /= 10;
    }
    return count;
}

int *vetorizar_int(int elem){
    int len = contar_digitos(elem);
    int aux[len];
    int z = 0;
    int *numero = malloc(len * sizeof(int));
    for (int i = 0; i < len; i++) {
        aux[i] = elem % 10;
        elem /= 10;
    }
    for (int i = (len - 1); i >= 0; i--) {
        numero[i] = aux[z];
        z++;
    }
    return numero;
}

/*
   int vetorDigitos[n][d];
   int elem = vetor[0];
   int len = contar_digitos(vetor[0]);
   int aux[len];
   int aux2[len];
   for (int i = 0; i < len; i++) {
       aux[i] = elem % 10;
       elem /= 10;
       printf("%d \n", aux[i]);
   }
   int z = 0;
   for (int i = (len - 1); i >= 0; i--) {
       aux2[i] = aux[z];
       z++;
   }
   for (int i = 0; i < len; i++) {
       printf("%d \n", aux2[i]);
   }
 */