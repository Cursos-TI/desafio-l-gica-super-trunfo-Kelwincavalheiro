#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
     char escolhaLuta;
   
    char estadoCarta1;
    int codigoCarta1;
    char nomeCidadeCarta1[50];
    unsigned int populacaoCarta1;
    float areaCarta1;
    float pibCarta1;
    int pontosTuristicosCarta1;

    char estadoCarta2;
    int codigoCarta2;
    char nomeCidadeCarta2[50];
    unsigned int populacaoCarta2;
    float areaCarta2;
    float pibCarta2;
    int pontosTuristicosCarta2;

    //carta 1
    printf("Digite o estado da Carta 1: ");
    scanf(" %c", &estadoCarta1);  
    printf("Digite o código da Carta 1: ");
    scanf("%d", &codigoCarta1); 
    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %49[^\n]", nomeCidadeCarta1);
    printf("Digite a população da Carta 1: ");
    scanf("%u", &populacaoCarta1); 
    printf("Digite a área da Carta 1 (em km²): ");
    scanf("%f", &areaCarta1); 
    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &pibCarta1); 
    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf("%d", &pontosTuristicosCarta1);


    printf("\nCarta1:\n");
    printf("Código: %d\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidadeCarta1);
    printf("População: %d\n", populacaoCarta1);
    printf("Área: %f\n", areaCarta1);
    printf("PIB: %f\n", pibCarta1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosCarta1);

    //carta2
    printf("\n Digite o estado da Carta 2: ");
    scanf(" %c", &estadoCarta2);  
    printf("Digite o código da Carta 2: ");
    scanf("%d", &codigoCarta2); 
    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %49[^\n]", nomeCidadeCarta2);
    printf("Digite a população da Carta 2: ");
    scanf("%u", &populacaoCarta2); 
    printf("Digite a área da Carta 2 (em km²): ");
    scanf("%f", &areaCarta2); 
    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &pibCarta2); 
    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &pontosTuristicosCarta2);

    printf("\nCarta 2:\n");
    printf("Código: %d\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidadeCarta2);
    printf("População: %d\n", populacaoCarta2);
    printf("Área: %f\n", areaCarta2);
    printf("PIB: %f\n", pibCarta2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosCarta2);

    printf("\nEscolha o atributo da luta, sendo que\n");
    printf("população: 1\n area: 2\n pib: 3\n pontos turisticos: 4\n todos os atributos: 5\n");
    scanf(" %c", &escolhaLuta);

    if(escolhaLuta == '1'){
        if(populacaoCarta1 > populacaoCarta2){
            printf("atributo população: Carta 1 venceu\n");
        }else if(populacaoCarta1 == populacaoCarta2){
            printf("atributo população: Carta 1 e carta 2 empataram\n");           
        }else{
            printf("atributo população: Carta 2 venceu\n");
        }
    }
     if(escolhaLuta == '2'){
        if(areaCarta1 > areaCarta2){
            printf("atributo area: Carta 1 venceu\n");           
        }else if(areaCarta1 == areaCarta2){
            printf("atributo area: Carta 1 e carta 2 empataram\n");           
        }else{
            printf("atributo area: Carta 2 venceu\n");
        }
    }
     if(escolhaLuta == '3'){
        if(pibCarta1 > pibCarta2){
            printf("atributo pib: Carta 1 venceu\n");   
        }else if(pibCarta1 == pibCarta2){
            printf("atributo pib: Carta 1 e carta 2 empataram\n");           
        }else{
            printf("atributo pib: Carta 2 venceu\n");
        }
    }
     if(escolhaLuta == '4'){
        if(pontosTuristicosCarta1 > pontosTuristicosCarta2){
            printf("pontos turisticos: Carta 1 venceu\n");           
        }else if(pontosTuristicosCarta1 == pontosTuristicosCarta2){
            printf("pontos turisticos: Carta 1 e carta 2 empataram\n");           
        }else{
            printf("pontos turisticos: Carta 2 venceu\n");
        }
    }
     if(escolhaLuta == '5'){
         if(populacaoCarta1 > populacaoCarta2){
            printf("atributo população: Carta 1 venceu\n");
        }else if(populacaoCarta1 == populacaoCarta2){
            printf("atributo população: Carta 1 e carta 2 empataram\n");           
        }else{
            printf("atributo população: Carta 2 venceu\n");
        }
     
        if(areaCarta1 > areaCarta2){
            printf("atributo area: Carta 1 venceu\n");           
        }else if(areaCarta1 == areaCarta2){
            printf("atributo area: Carta 1 e carta 2 empataram\n");           
        }else{
            printf("atributo area: Carta 2 venceu\n");
        }
    
        if(pibCarta1 > pibCarta2){
            printf("atributo pib: Carta 1 venceu\n");   
        }else if(pibCarta1 == pibCarta2){
            printf("atributo pib: Carta 1 e carta 2 empataram\n");           
        }else{
            printf("atributo pib: Carta 2 venceu\n");
        }
    
        if(pontosTuristicosCarta1 > pontosTuristicosCarta2){
            printf("pontos turisticos: Carta 1 venceu\n");           
        }else if(pontosTuristicosCarta1 == pontosTuristicosCarta2){
            printf("pontos turisticos: Carta 1 e carta 2 empataram\n");           
        }else{
            printf("pontos turisticos: Carta 2 venceu\n");
        }
     }

    return 0;
}
