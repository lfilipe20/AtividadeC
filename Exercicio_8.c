#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);


    str[strcspn(str, "\n")] = '\0';

    int comprimento = strlen(str);

    printf("A string digitada possui %d caracteres.\n", comprimento);

    return 0;
}