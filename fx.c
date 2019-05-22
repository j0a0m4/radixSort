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
int *gerar_vetor_preenchido() {
    int n, d;
    printf("Insira número de elementos: ");
    scanf("%d", &n);
    printf("Insira número de dígitos: ");
    scanf("%d", &d);
    int *vetor = gerar_lista(n,d);
    visualizar_lista(vetor,n);
    return vetor;
}