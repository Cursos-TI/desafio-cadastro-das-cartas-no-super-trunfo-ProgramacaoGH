#include <stdio.h>

int main(){
    // informaçoes necessarias para as cartas do jogo.
    int carta = 1;
    int carta2 = 2;
    char estado[50];
    char codigo;
    char cidade[8];
    int populacao;
    float area;
    float pib;
    int pontoTuristico;
    //pedindo as informaçoes ao jogador 1 para imprimir o resultado na tela.
    printf("Digite o Estado 1: \n");
    scanf("%s", &estado);

    printf("Digite o Código 1: \n");
    scanf("%i", &codigo);

    printf("Digite a Cidade 1: \n");
    scanf("%s", &cidade);

    printf("Digite a População 1: \n");
    scanf("%d", &populacao);

    printf("Digite a Área 1: \n");
    scanf("%f", &area);

    printf("Digite o PIB 1: \n");
    scanf("%d", &pib);

    printf("Quantidade de Ponto Turisticos 1: \n");
    scanf("%d", &pontoTuristico);
    // imprimindo dados da carta do primeiro jogador na tela.
    printf("Carta: %i\n",carta);

    printf("Estado: %s\n", estado);
    printf("Código: %i\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %d\n", pib);
    printf("Quantida de Ponto Turistico: %d\n", pontoTuristico);



    // pedindo as informaçoes ao jogador 2 para imprimir na tela.
    printf("Digite o Estado 2: \n");
    scanf("%s", &estado);

    printf("Digite o Código 2: \n");
    scanf("%i", &codigo);

    printf("Digite a Cidade 2: \n");
    scanf("%s", &cidade);

    printf("Digite a População 2: \n");
    scanf("%d", &populacao);

    printf("Digite a Área 2: \n");
    scanf("%f", &area);

    printf("Digite o PIB 2: \n");
    scanf("%d", &pib);

    printf("Quantidade de Ponto Turisticos 2: \n");
    scanf("%d", &pontoTuristico);
    // imprimindo dados da carta do jogador 2 na tela.
    printf("Carta2: %i\n",carta2);

    printf("Estado: %s\n", estado);
    printf("Código: %i\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %d\n", pib);
    printf("Quantida de Ponto Turistico: %d\n", pontoTuristico);



    return 0;
}