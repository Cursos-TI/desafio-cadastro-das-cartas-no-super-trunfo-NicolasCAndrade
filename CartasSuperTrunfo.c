#include <stdio.h>



int main() {

   /*Carta 1 */

    char estado1[2];
    char codigo1[4];
    char nomedacidade1[20];
    int populacao1;  
    int pontosturisticos1;
    float area1;
    float pib1;

    printf("Carta 1 \n");
    
    printf("Digite o Estado (A-H): \n");
    scanf("%1s", estado1);

    printf("Digite o Código: \n");
    scanf("%4s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%20s", nomedacidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos1);

    printf("Digite a Área (Em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);


    /*Carta 2 */

    char estado2[2];
    char codigo2[4];
    char nomedacidade2[20];
    int populacao2;  
    int pontosturisticos2;
    float area2;
    float pib2;

    printf("Carta 2 \n");
    
    printf("Digite o Estado (A-H): \n");
    scanf("%1s", estado2);

    printf("Digite o Código: \n");
    scanf("%4s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%20s", nomedacidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos2);

    printf("Digite a Área (Em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    return 0;

}
