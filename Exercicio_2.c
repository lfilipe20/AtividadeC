#include <stdio.h>

int main (){
    int num1, num2;

    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if (num1>num2){
        printf("O maior numero é %d\n", num1);
        } else if (num2>num1){
            printf("O maior numero é %d\n", num2);
        } else {
            printf("Os numeros sao iguais.\n");

        }
return 0;
}
