#include <stdio.h>

struct Pessoa {
    char nome[30];
    int idade;
    float altura;

};

int main() {
    struct Pessoa pessoa1;

    printf("Digite o nome da pessoa: ");
    fgets(pessoa1.nome, sizeof(pessoa1.nome), stdin);

    printf("Digite a idade da pessoa: ");
    scanf("%d", &pessoa1.idade);

    printf("Digite a altura da pessoa (em metros): ");
    scanf("%f", &pessoa1.altura);

    printf("\nDados da Pessoa:\n");
    printf("Nome: %s", pessoa1.nome);
    printf("Idade %d", pessoa1.idade);
    printf("Altura %f", pessoa1.altura);

    return 0;

}

