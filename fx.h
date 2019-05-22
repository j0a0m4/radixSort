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
// Função para contar numero de dígitos
// num = inteiro a ser contado
int contar_digitos(int num);
// Transformar um inteiro numa representacao vetorial
int *vetorizar_int(int elem);

#endif // FX_H
