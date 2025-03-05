#include <stdio.h>

int main(){
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite sua Idade: \n");
    scanf("%d", &idade);

    printf("Digite sua Altura: \n");
    scanf("%f", &altura);

    printf("Digite seu Nome: \n");
    scanf("%s", &nome);

    printf("Digite sua Matricula: \n");
    scanf("%d", &matricula);

    printf("nome: %s\n", nome);
    printf("Altura: %f\n", altura);
    printf("Idade: %d\n", idade);
    printf("Matricula: %d\n", matricula);

    return 0;

}