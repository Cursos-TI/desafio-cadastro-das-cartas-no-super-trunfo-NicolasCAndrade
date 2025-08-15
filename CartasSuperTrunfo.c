#include <stdio.h>

int main()
{

   /*Carta 1 */

    char estado1[2];
    char codigo1[4];
    char nomedacidade1[20];
    unsigned long int populacao1;
    int pontosturisticos1;
    float area1;
    float pib1;
    float superpoder1;

    /*Adicionei Densidade Populacional e PIB per Capita */

    float densidade_populacional1;
    float pib_per_capita1;

    printf("Carta 1 \n");

    printf("Digite o Estado (A-H): \n");
    scanf("%1s", estado1);

    printf("Digite o Código: \n");
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%19s", nomedacidade1);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos1);

    printf("Digite a população: \n");
    scanf("%lu", &populacao1);

    printf("Digite a Área (Em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    /*Calculos da Densidade e do PIB*/

    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    printf("A Densidade Populacional é: %.3f\n", densidade_populacional1);
    printf("O PIB per Capita é: %.2f\n", pib_per_capita1);

    /*Carta 2 */

    char estado2[2];
    char codigo2[4];
    char nomedacidade2[20];
    unsigned long int populacao2;
    int pontosturisticos2;
    float area2;
    float pib2;
    float superpoder2;

    /*Adicionei Densidade Populacional e PIB per Capita */

    float densidade_populacional2;
    float pib_per_capita2;

    printf("Carta 2 \n");

    printf("Digite o Estado (A-H): \n");
    scanf("%1s", estado2);

    printf("Digite o Código: \n");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%19s", nomedacidade2);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos2);

    printf("Digite a população: \n");
    scanf("%lu", &populacao2);

    printf("Digite a Área (Em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    /*Calculos da Densidade e do PIB*/

    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    printf("A Densidade Populacional é: %.3f\n", densidade_populacional2);
    printf("O PIB per Capita é: %.2f\n", pib_per_capita2);

    /*Calculo do super poder*/

    superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontosturisticos1 + pib_per_capita1 + (1.0f / densidade_populacional1);
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontosturisticos2 + pib_per_capita2 + (1.0f / densidade_populacional2);

    /*O MAIOR valor vence*/

    int resultado_populacao = populacao1 > populacao2;
    int resultado_pontos_turisticos = pontosturisticos1 > pontosturisticos2;
    int resultado_pib = pib1 > pib2;
    int resultado_pib_per_capita = pib_per_capita1 > pib_per_capita2;
    int resultado_superpoder = superpoder1 > superpoder2;

    /*O MENOR valor vence*/

    int resultado_densidade = densidade_populacional1 < densidade_populacional2;

    printf("População: 1 para verdadeiro - Carta 1 vence e 0 para falso - Carta 2 vence: %d\n", resultado_populacao);
    printf("Pontos Turisticos:  1 para verdadeiro - Carta 1 vence e 0 para falso - Carta 2 vence: %d\n", resultado_pontos_turisticos);
    printf("PIB:  1 para verdadeiro - Carta 1 vence e 0 para falso - Carta 2 vence: %d\n", resultado_pib);
    printf("PIB per Capita:  1 para verdadeiro - Carta 1 vence e 0 para falso - Carta 2 vence: %d\n", resultado_pib_per_capita);
    printf("Super poder:  1 para verdadeiro - Carta 1 vence e 0 para falso - Carta 2 vence: %d\n", resultado_superpoder);
    printf("Densidade Populacional:  1 para verdadeiro - Carta 1 vence e 0 para falso - Carta 2 vence: %d\n", resultado_densidade);

    return 0;
}
