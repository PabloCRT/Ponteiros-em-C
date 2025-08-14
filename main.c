#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese_Brazil");
  struct Aluno{
         char nome[50];
         int idade;
         float media;       
  };
  struct Aluno aluno[3];
  
  for(int i=0; i<3; i++){
          printf("Digite o nome do(a) %d° aluno: ", i+1);
          scanf("%s", &aluno[i].nome);
          printf("Digite a idade do(a) %s: ", aluno[i].nome);
          scanf("%d", &aluno[i].idade);
          printf("Digite a média do(a) %s: ", aluno[i].nome);
          scanf("%f", &aluno[i].media);
  };
  printf("\n");
  for(int i=0; i<3; i++){
          printf("%d° aluno: \n Nome: %s; \n Idade: %d; \n Média: %f.", i+1, aluno[i].nome, aluno[i].idade, aluno[i].media);
  };
  return 0;
}
