#include <stdio.h>

struct Aluno {
    char nome[20];
    int idade;
    float nota;
};

  int main(){
    struct Aluno Alunos [5];

    int indice;
    
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
    printf ("\nDigite qual aluno voce deseja ver os dados (1 a 5): ");
    scanf ("%d", &indice);

    if (indice < 1 || indice > 5) {
        printf ("Invalido\n");
    } else {
        printf ("----------------------\n");
        printf ("Aluno %d:\n", indice);
        printf ("Nome: %s\n", Alunos[indice - 1].nome);
        printf ("Idade: %d\n", Alunos[indice - 1].idade);
        printf ("Nota: %.2f\n", Alunos[indice - 1].nota);
        printf ("Digite a nova nota do aluno %d: ", indice);
        scanf ("%f", &Alunos[indice - 1].nota);

    }
    printf ("Dados atualizados do aluno %d:\n", indice);
    printf ("Nome: %s\n", Alunos[indice - 1].nome);
    printf ("Idade: %d\n", Alunos[indice - 1].idade);
    printf ("Nota: %.2f\n", Alunos[indice - 1].nota);

    return 0;
}
    
  
