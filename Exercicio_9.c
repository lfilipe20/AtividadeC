#include <stdio.h>

int main() {
    int num, i;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    printf("Tabuada do %d:\n", num);
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}