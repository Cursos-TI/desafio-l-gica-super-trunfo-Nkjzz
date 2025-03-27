#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main(){

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

    /*
    Atributo organizado em:

    1. População
    2. Área
    3. PIB
    4. Densidade Populacional
    5. PIB Per Capital
    */

    int atributo = 1;
    //Comparacao de Cartas

    if (atributo == 1){
         if (Populacao1 > Populacao2){
            printf("Comparação de cartas (Atributo: População): \nCarta 1 - São Paulo (SP): %u\nCarta 2 - Rio de Janeiro (RJ): %u\nCarta 1 (São Paulo) venceu! \n", Populacao1, Populacao2);
        } else if (Populacao1 < Populacao2){
            printf("Comparação de cartas (Atributo: População): \nCarta 1 - São Paulo (SP): %u\nCarta 2 - Rio de Janeiro (RJ): %u\nCarta 2 (Rio de Janeiro) venceu! \n", Populacao1, Populacao2);
        } else if (Populacao1 == Populacao2){
            printf("Comparação de cartas (Atributo: População): \nCarta 1 - São Paulo (SP): %u\nCarta 2 - Rio de Janeiro (RJ): %u\nEmpate! \n", Populacao1, Populacao2);
        }    
    } else{
        printf("Trabalhando nisso...");
    }
    




    return 0;
}
