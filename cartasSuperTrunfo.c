#include <stdio.h>

int main(){
    char estado[50];
    char codigo[50];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontoTuristico;

    printf("Digite o Estado: \n");
    scanf("%s", &estado);

    printf("Digite o Código: \n");
    scanf("%d", &codigo);

    printf("Digite a Cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a População: \n");
    scanf("%d", &populacao);

    printf("Digite a Área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%d", &pib);

    printf("Quantidade de Ponto Turisticos: \n");
    scanf("%d", &pontoTuristico);

    printf("Estado: %s\n", estado);
    printf("Código: %d\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %d\n", pib);
    printf("Quantida de Ponto Turistico: %d\n", pontoTuristico);

    return 0;
}