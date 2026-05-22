#include <stdio.h>
int main() {
int i, j;

 int matriz[3][3] = {
 {1, 0, 0}, // Linha 0
 {0, 1, 0}, // Linha 1
 {0, 0, 1} // Linha 2

 

 }; 

 printf("\n");
 for(i = 0; i < 3; i++) {
 for(j = 0; j < 3; j++) {

 printf("%d\t", matriz[i][j]); 

}
printf("\n");}
return 0;}