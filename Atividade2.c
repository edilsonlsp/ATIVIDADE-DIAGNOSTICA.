#include <stdio.h>

struct Aluno {
    char nome[20];
    int idade;
    float nota;
};
 int main(){
    struct Aluno Alunos[5];

    for (int i = 0; i < 5; i++) {
        printf ("Nome do Aluno (a) %d: ",i + 1);
        fgets (Alunos[i].nome, 20, stdin);
        printf ("Idade %d: ", i + 1);
        scanf ("%d", &Alunos[i].idade); 
        getchar();
        printf ("Nota %d: ", i + 1);
        scanf ("%f", &Alunos[i].nota);
        getchar();

    }
    printf ("\n Cadastro dos Alunos:\n");
    for (int i = 0; i < 5; i++) {

        printf ("----------------------\n");
        printf ("Aluno %d:\n", i + 1);
        printf ("Nome: %s\n", Alunos[i].nome);
        printf ("Idade: %d\n", Alunos[i].idade);
        printf ("Nota: %.2f\n", Alunos[i].nota);
    }
    return 0;
 }
