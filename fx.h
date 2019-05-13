#if !defined(FX_H)
#define FX_H

// Função para gerar uma lista com n elementos aleatórios de d dígitos
// n = quantidade de elementos
// d = quantidade de dígitos
int *gerar_lista(int n, int d);
// Função para visualizar elementos da lista
// arr = ponteiro pro vetor
// len = comprimento do vetor
void visualizar_lista(int *arr, int len);
// Função que pega a entrada do usuario para gerar o vetor preenchido com n elementos de d digitos e em seguida imprime o conteudo na tela
int *gerar_vetor_preenchido();

#endif // FX_H
