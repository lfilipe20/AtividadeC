#include <stdio.h>


struct Aluno {
    char nome[100];
    int idade;
    float nota;
};

int main() {
    struct Aluno alunos[3];

    for(int i = 0; i < 3; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("Digite a idade do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].idade);

        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota);

        getchar();
    }


    printf("\nInformações dos Alunos:\n");
    for(int i = 0; i < 3; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Nota: %.2f\n\n", alunos[i].nota);
    }

    return 0;
}