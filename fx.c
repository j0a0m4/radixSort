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
    int a = (int) pow(10,(d - 1));
    int b = 9 * a;
    //alocar espaco dinamicamente na memoria para o vetor
    int *vetor = (int *) malloc(n * sizeof(int));
    // iterar sobre o vetor para adicionar elementos
    for (int i = 0; i < n; i++) {
        // gerar elemento aleatório com d digitos
        int num = rand() % (b - a + 1) + a;
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

void mapear_vetor(int vetorMapeado[][10], int vetor[], int n){
   for (int i = 0; i < n; i++) {
        int *elem = vetorizar_int(vetor[i]);
        int len = contar_digitos(vetor[i]);
        for (int j = 0; j < len; j++) {
            vetorMapeado[i][j] = elem[j];
        } 
    }
}