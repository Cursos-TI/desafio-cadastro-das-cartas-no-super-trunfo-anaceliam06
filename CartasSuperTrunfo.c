#include<stdio.h>
 
int main(){
    printf("Desafio Super Trunfo - Países \n");
        
    char estado [50], codigo_da_carta [50], nome_da_cidade [50];    
    int populacao, numero_de_pontos_turisticos;
    float area, PIB; 
    
    printf("Estado: \n");
    scanf("%s", &estado);

    printf("Carta: \n");
    scanf("%s", &codigo_da_carta);

    printf("Cidade: \n");
    scanf("%s", &nome_da_cidade);

    printf("Polulação: \n");
    scanf("%d", &populacao);

    printf("Pontos Turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos);

    printf("Area: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf ("%f", &PIB);

    printf("Estado: %s \n Carta: %s \n Cidade: %s \n População: %d \n Pontos Turísticos: %d \n Area: %f \n PIB: %f \n", estado, codigo_da_carta, nome_da_cidade, populacao, numero_de_pontos_turisticos, area, PIB);

    

    return 0;
}
