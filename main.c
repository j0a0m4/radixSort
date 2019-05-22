#include "fila.h"
#include "fx.h"
#include <stdio.h>

 int main(int argc, char const *argv[]) {
    int n, d;
    printf("Insira número de elementos: ");
    scanf("%d", &n);
    printf("Insira número de dígitos: ");
    scanf("%d", &d);
    int *vetor = gerar_lista(n,d);
    visualizar_lista(vetor,n);
     return 0;
 }
 
