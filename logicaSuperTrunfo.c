#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main(){

    // Variáveis
    int atributo;

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
    printf("### Menu Interativo ### \n1. População\n2. Área\n3. PIB\n4. Densidade Populacional\n5. Pontos Turísticos\n\n ESCOLHA UMA DAS OPCOES ACIMA: ");
    scanf("%d", &atributo);


    //Comparação de Cartas Com Base No Atributo

    if (atributo == 1)
    {
         if (Populacao1 > Populacao2)
         {
            printf("Comparação de cartas (Atributo: População): \nCarta 1 - São Paulo (SP): %u Habitantes\nCarta 2 - Rio de Janeiro (RJ): %u Habitantes\nCarta 1 (São Paulo) venceu! \n", Populacao1, Populacao2);
        } else if (Populacao1 < Populacao2)
        {
            printf("Comparação de cartas (Atributo: População): \nCarta 1 - São Paulo (SP): %u Habitantes\nCarta 2 - Rio de Janeiro (RJ): %u Habitantes\nCarta 2 (Rio de Janeiro) venceu! \n", Populacao1, Populacao2);
        } else if (Populacao1 == Populacao2)
        {
            printf("Comparação de cartas (Atributo: População): \nCarta 1 - São Paulo (SP): %u Habitantes\nCarta 2 - Rio de Janeiro (RJ): %u Habitantes\nEmpate! \n", Populacao1, Populacao2);
        }    
    } else if (atributo == 2)
    {
        if (Area1 > Area2)
         {
            printf("Comparação de cartas (Atributo: Area): \nCarta 1 - São Paulo (SP): %.2f KM²\nCarta 2 - Rio de Janeiro (RJ): %.2f KM²\nCarta 1 (São Paulo) venceu! \n", Area1, Area2);
        } else if (Area1 < Area2)
        {
            printf("Comparação de cartas (Atributo: Area): \nCarta 1 - São Paulo (SP): %.2f KM²\nCarta 2 - Rio de Janeiro (RJ): %.2f KM²\nCarta 2 (Rio de Janeiro) venceu! \n", Area1, Area2);
        } else if (Area1 == Area2)
        {
            printf("Comparação de cartas (Atributo: Area): \nCarta 1 - São Paulo (SP): %.2f KM²\nCarta 2 - Rio de Janeiro (RJ): %.2f KM²\nEmpate! \n", Area1, Area2);
        }    
    } else if (atributo == 3)
    {
        if (PIB1 > PIB2)
         {
            printf("Comparação de cartas (Atributo: PIB): \nCarta 1 - São Paulo (SP): R$ %.2f\nCarta 2 - Rio de Janeiro (RJ): R$ %.2f\nCarta 1 (São Paulo) venceu! \n", PIB1, PIB2);
        } else if (PIB1 < PIB2)
        {
            printf("Comparação de cartas (Atributo: PIB): \nCarta 1 - São Paulo (SP): R$ %.2f\nCarta 2 - Rio de Janeiro (RJ): R$ %.2f\nCarta 2 (Rio de Janeiro) venceu! \n", PIB1, PIB2);
        } else if (PIB1 == PIB2)
        {
            printf("Comparação de cartas (Atributo: PIB): \nCarta 1 - São Paulo (SP): R$ %.2f\nCarta 2 - Rio de Janeiro (RJ): R$ %.2f\nEmpate! \n", PIB1, PIB2);
        }    
    } else if (atributo == 4)
    {
        if (DensidadePopulacional1 < DensidadePopulacional2)
         {
            printf("Comparação de cartas (Atributo: Densidade Populacional): \nCarta 1 - São Paulo (SP): %.2f Habitantes por KM²\nCarta 2 - Rio de Janeiro (RJ): %.2f Habitantes por KM²\nCarta 1 (São Paulo) venceu! \n", DensidadePopulacional1, DensidadePopulacional2);
        } else if (DensidadePopulacional1 > DensidadePopulacional2)
        {
            printf("Comparação de cartas (Atributo: Densidade Populacional): \nCarta 1 - São Paulo (SP): %.2f Habitantes por KM²\nCarta 2 - Rio de Janeiro (RJ): %.2f Habitantes por KM²\nCarta 2 (Rio de Janeiro) venceu! \n", DensidadePopulacional1, DensidadePopulacional2);
        } else if (DensidadePopulacional1 == DensidadePopulacional2)
        {
            printf("Comparação de cartas (Atributo: Densidade Populacional): \nCarta 1 - São Paulo (SP): %.2f Habitantes por KM²\nCarta 2 - Rio de Janeiro (RJ): %.2f Habitantes por KM²\nEmpate! \n", DensidadePopulacional1, DensidadePopulacional2);
        } 
    } else if (atributo == 5)
    {
        if (NumeroPontosTuristicos1 > NumeroPontosTuristicos2)
         {
            printf("Comparação de cartas (Atributo: Pontos Turísticos): \nCarta 1 - São Paulo (SP): %u Pontos Turísticos\nCarta 2 - Rio de Janeiro (RJ): %u Pontos Turísticos\nCarta 1 (São Paulo) venceu! \n", NumeroPontosTuristicos1, NumeroPontosTuristicos2);
        } else if (NumeroPontosTuristicos1 < NumeroPontosTuristicos2)
        {
            printf("Comparação de cartas (Atributo: Pontos Turísticos): \nCarta 1 - São Paulo (SP): %u Pontos Turísticos\nCarta 2 - Rio de Janeiro (RJ): %u Pontos Turísticos\nCarta 2 (Rio de Janeiro) venceu! \n", NumeroPontosTuristicos1, NumeroPontosTuristicos2);
        } else if (NumeroPontosTuristicos1 == NumeroPontosTuristicos2)
        {
            printf("Comparação de cartas (Atributo: Pontos Turísticos): \nCarta 1 - São Paulo (SP): %u Pontos Turísticos\nCarta 2 - Rio de Janeiro (RJ): %u Pontos Turísticos\nEmpate! \n", NumeroPontosTuristicos1, NumeroPontosTuristicos2);
        } 
    } else
    {
        printf("Opção Inválida!!");
    }

    return 0;
}
