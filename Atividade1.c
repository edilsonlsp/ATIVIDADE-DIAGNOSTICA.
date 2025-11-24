#include <stdio.h>

struct Aluno {
    char nome [20];
    int idade;
    float nota;
};

int main() {
    struct Aluno Alunos[2];

    for (int i = 0; i < 2; i++) {

        printf ("Digite o nome do aluno %d: ", i + 1);
        scanf ("%s", Alunos[i].nome);
        printf ("Digite a idade do aluno %d: ", i+1);
        scanf ("%d", &Alunos[i].idade);
        printf ("Digite a nota do aluno %d: ", i+1);
        scanf ("%f", &Alunos[i].nota);

    }

    printf ("\n Cadastro dos Alunos:\n");
    for (int i = 0; i < 2; i++) {
        
        printf ("Aluno %d:\n", i + 1);
        printf ("Nome: %s\n", Alunos[i].nome);
        printf ("Idade: %d\n", Alunos[i].idade);
        printf ("Nota: %.2f\n", Alunos[i].nota);
}

return 0;
}