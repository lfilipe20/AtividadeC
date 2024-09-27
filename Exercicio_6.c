#include <stdio.h>
 int main() {
     int matriz [2][2];

     printf("Preencha a matriz 2x2 com valores inteiros \n");
     for (int i = 0; i < 2 ; i++) {
         for (int j= 0; j < 2 ; j++) {
             printf("Digite o valor para a posição [%d][%d]: ", i + 1, j + 1);
             scanf("%d", &matriz[i][j]);


         }
     }

     printf("\nA matriz 2x2 é: ");
     for (int i = 0; i < 2; i++) {
    for ( int j = 0; j < 2; j++) {
        printf("%d", matriz[i][j]);
    }
printf("\n");

     }
return 0;
 }
