#include <stdio.h>

struct Aluno {
    char nome[20];
    int idade;
    float nota;
};

int main() {
    struct Aluno Alunos[4];
    int qnt = 0;
    int opção;

    do {
        printf("\nMenu:\n");
        printf("1. Adicionar um novo aluno\n");
        printf("2. Exibir todos os alunos\n");
        printf("3. Remover aluno\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opção);
        getchar();

        switch (opção) {

        case 1:
            if (qnt < 4) {
                printf("Nome do Aluno (a) %d: ", qnt + 1);
                fgets(Alunos[qnt].nome, 20, stdin);

                printf("Idade %d: ", qnt + 1);
                scanf("%d", &Alunos[qnt].idade);
                getchar();

                printf("Nota %d: ", qnt + 1);
                scanf("%f", &Alunos[qnt].nota);
                getchar();

                qnt++;
            } else {
                printf("Limite de alunos atingido.\n");
            }
            break;

        case 2:
            if (qnt == 0) {
                printf("Nenhum aluno cadastrado.\n");
            } else {
                printf("\nCadastro dos Alunos:\n");
                for (int i = 0; i < qnt; i++) {
                    printf("----------------------\n");
                    printf("Aluno %d:\n", i + 1);
                    printf("Nome: %s", Alunos[i].nome);
                    printf("Idade: %d\n", Alunos[i].idade);
                    printf("Nota: %.2f\n", Alunos[i].nota);
                }
            }
            break;

        case 3:
            if (qnt == 0) {
                printf("Nenhum aluno para remover.\n");
            } else {
                int remover;
                printf("Digite o numero do aluno para remover (1 a %d): ", qnt);
                scanf("%d", &remover);
                getchar();

                if (remover < 1 || remover > qnt) {
                    printf("Invalido\n");
                } else {
                    for (int i = remover - 1; i < qnt - 1; i++) {
                        Alunos[i] = Alunos[i + 1];
                    }
                    qnt--;
                    printf("Aluno removido com sucesso.\n");
                }
            }
            break;

        case 4:
            printf("Saindo...\n");
            break;

        default:
            printf("Opcao invalida!\n");
        }

    } while (opção != 4);

    return 0;
}
