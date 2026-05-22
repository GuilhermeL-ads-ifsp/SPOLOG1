#include <stdio.h>
int main() {
 int matriz[4][4];
 int i, j;
 int soma = 0;
 printf("Preenchendo a matriz 4x4:\n");

 // Laço externo percorre as linhas
 for(i = 0; i < 4; i++) {
 // Laço interno percorre as colunas
 for(j = 0; j < 4; j++) {
 printf("Digite o valor para a posição [%d][%d]: ", i, j);
 scanf("%d", &matriz[i][j]);
soma += matriz [i] [j];
 }
 } 
 printf("Soma de elementos: %d\n", soma);
 

 return 0;
 }

