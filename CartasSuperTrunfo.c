#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Wevany

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char Estado[8];
    char Cidade[4];
    int Codigo;
    int Populacao;
    float Area;
    float PIB;
    int numeroT;


    // Cadastro das Cartas: 
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Informe o nome do Estado: \n");
    scanf("%c", &Estado);

    printf("Informe a Cidade: \n");
    scanf("%c", &Cidade);

    scanf("%i", &Estado,Cidade);

    printf("Informe a População: \n");
    scanf("%i", &Populacao);

    printf("Informe a Área: \n");
    scanf("%f", &Area);

    printf("Informe o PIB: \n");
    scanf("%f", &PIB);

    printf("Informe o Número de Ponto Turisco: \n");
    scanf("%i", &numeroT);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Estado: %c\n - Cidade: %c\n", Estado, Cidade);
    printf("Codigo: %i\n - População: %i\n - Numero de Ponto Túrisco: %i\n", Codigo, Populacao, numeroT);
    printf("Área: %f\n - PIB: %f\n", Area, PIB);

    return 0;
}
