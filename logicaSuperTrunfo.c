#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main(){

    // Variáveis
    int primeiroatributo, segundoatributo;
    int resultado1, resultado2;

    // Dados da carta 1
    char Estado1[2] = "SP", CodigoDaCidade1[3] = "A01", NomeDaCidade1[20] = "São Paulo";
    int Populacao1 = 2000, NumeroPontosTuristicos1 = 15;
    float Area1 = 5, PIB1 = 100000;
    float DensidadePopulacional1 = Populacao1 / Area1;
    float PIBPerCapita1 = PIB1 / Populacao1;

    // Dados da Carta 2
    char Estado2[2] = "RJ", CodigoDaCidade2[3] = "A02", NomeDaCidade2[20] = "Rio de Janeiro";
    unsigned int Populacao2 = 2500, NumeroPontosTuristicos2 = 23;
    float Area2 = 4, PIB2 = 130000;
    float DensidadePopulacional2 = Populacao2 / Area2;
    float PIBPerCapita2 = PIB2 / Populacao2;

    // Menu Interativo
    printf("### MENU INICIAL ###\n");
    printf("1. Populacao\n");
    printf("2. Pontos Turisticos\n");
    printf("3. Area\n");
    printf("4. Densidade Populacional\n");
    printf("Escolha o primeiro Atributo: \n");
    scanf("%d", &primeiroatributo);

    switch (primeiroatributo)
    {
    case 1:
        printf("Voce escolheu o Atributo: Populacao: \n");
        resultado1 = Populacao1 < Populacao2 ? 1 : 0;
        printf("%d", resultado1);
        break;
    case 2:
        printf("Voce escolheu o Atributo: Pontos Turisticos: \n");
        resultado1 = NumeroPontosTuristicos1 < NumeroPontosTuristicos2 ? 1 : 0;
        printf("%d", resultado1);
        break;
    case 3:
        printf("Voce escolheu o Atributo: Area: \n");
        resultado1 = Area1 < Area2 ? 1 : 0;
        printf("%d", resultado1);
        break;
    case 4:
        printf("Voce escolheu o Atributo: Densidade Populacional: \n");
        resultado1 = DensidadePopulacional1 > DensidadePopulacional2 ? 1 : 0;
        printf("%d", resultado1);
        break;
    default:
        printf("Opcao Invalida, tente novamente");
        break;
    }

    printf("### MENU INICIAL ###\n");
    printf("1. Populacao\n");
    printf("2. Pontos Turisticos\n");
    printf("3. Area\n");
    printf("4. Densidade Populacional\n");
    printf("Escolha o Segundo Atributo: \n");
    scanf("%d", &segundoatributo);

    if (segundoatributo == primeiroatributo)
    {
        printf("O Segundo Atributo nao pode ser igual ao primeiro!");
    } else;
        switch (segundoatributo)
    {
    case 1:
        printf("Voce escolheu o Atributo: Populacao: \n");
        resultado2 = Populacao1 < Populacao2 ? 1 : 0;
        printf("%d", resultado2);
        break;
    case 2:
        printf("Voce escolheu o Atributo: Pontos Turisticos: \n");
        resultado2 = NumeroPontosTuristicos1 < NumeroPontosTuristicos2 ? 1 : 0;
        printf("%d", resultado2);
        break;
    case 3:
        printf("Voce escolheu o Atributo: Area: \n");
        resultado2 = Area1 < Area2 ? 1 : 0;
        printf("%d", resultado2);
        break;
    case 4:
        printf("Voce escolheu o Atributo: Densidade Populacional: \n");
        resultado2 = DensidadePopulacional1 > DensidadePopulacional2 ? 1 : 0;
        printf("%d", resultado2);
        break;
    default:
        printf("Opcao Invalida, tente novamente");
        break;
    }
}
