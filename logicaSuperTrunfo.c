#include <stdio.h>

int main() {

    char nome[50], nome2[50];
    int CDC, PT, CDC2, PT2;
    float area, PIB, area2, PIB2;
    unsigned long int populacao, populacao2;
    int opcao, regras, comparacao, atributo;

    printf("Escolha sua opcao\n");
    printf("1. Comecar Jogo\n");
    printf("2. Regras do Jogo\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            // Carta A01
            printf("== Carta A01 ==\n");

            printf("Nome do pais: ");
            scanf("%s", nome);

            printf("Codigo do pais: ");
            scanf("%d", &CDC);

            printf("Pontos Turisticos: ");
            scanf("%d", &PT);

            printf("Populacao: ");
            scanf("%u", &populacao);

            printf("Area do pais em KM²: ");
            scanf("%f", &area);

            printf("PIB do pais: ");
            scanf("%f", &PIB);

            float Densidade_Populacional = populacao / area;
            float PIB_per_capita = PIB / populacao;

            printf("\n-- Informações do pais A01 --\n");
            printf("Nome: %s\n", nome);
            printf("Código: %d\n", CDC);
            printf("População: %lu\n", populacao);
            printf("Área: %.2f KM²\n", area);
            printf("PIB: $%.2f\n", PIB);
            printf("Pontos Turísticos: %d\n", PT);
            printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional);
            printf("PIB per Capita: %.2f Reais\n", PIB_per_capita);

            // Carta B02
            printf("\n-- Carta B02 --\n");

            printf("Nome do segundo pais: ");
            scanf("%s", nome2);

            printf("Codigo do segundo pais: ");
            scanf("%d", &CDC2);

            printf("Pontos Turisticos: ");
            scanf("%d", &PT2);

            printf("Populacao: ");
            scanf("%u", &populacao2);

            printf("Area do segundo pais em KM²: ");
            scanf("%f", &area2);

            printf("PIB do segundo pais: ");
            scanf("%f", &PIB2);

            float Densidade_Populacional2 = populacao2 / area2;
            float PIB_per_capita2 = PIB2 / populacao2;

            printf("\n-- Informações do Segundo Pais B02 --\n");
            printf("Nome: %s\n", nome2);
            printf("Código: %d\n", CDC2);
            printf("População: %lu\n", populacao2);
            printf("Área: %.2f KM²\n", area2);
            printf("PIB: $%.2f\n", PIB2);
            printf("Pontos Turísticos: %d\n", PT2);
            printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional2);
            printf("PIB per Capita: %.2f Reais\n", PIB_per_capita2);

            long double Super_Poder1 = populacao + area + PIB + PT + PIB_per_capita + Densidade_Populacional;
            long double Super_Poder2 = populacao2 + area2 + PIB2 + PT2 + PIB_per_capita2 + Densidade_Populacional2;

            // Comparação
            printf("\n**Escolha sua opcao de comparação**\n");
            printf("1. Comparar Maior entre as duas cartas\n");
            printf("2. Comparar Menor entre as duas cartas\n");
            printf("Escolha: ");
            scanf("%d", &comparacao);

            printf("\nEscolha o atributo para comparar:\n");
            printf("1. Área\n");
            printf("2. Populacao\n");
            printf("3. PIB\n");
            printf("4. Densidade Populacional\n");
            printf("Opção: ");
            scanf("%d", &atributo);

            printf("\n-- Resultado da Comparação --\n");

            if (comparacao == 1) {  // MAIOR
                switch (atributo) {
                    case 1:
                        if (area > area2)
                            printf("Carta 1 venceu em área!\n");
                        else
                            printf("Carta 2 perdeu em área!\n");
                        break;
                    case 2:
                        if (populacao > populacao2)
                            printf("Carta 1 venceu em população!\n");
                        else
                            printf("Carta 2 perdeu em população!\n");
                        break;
                    case 3:
                        if (PIB > PIB2)
                            printf("Carta 1 venceu em PIB!\n");
                        else
                            printf("Carta 2 perdeu em PIB!\n");
                        break;
                    case 4:
                        if (Densidade_Populacional < Densidade_Populacional2)
                            printf("Carta 1 venceu em densidade populacional!\n");
                        else
                            printf("Carta 2 perdeu em densidade populacional!\n");
                        break;
                    default:
                        printf("Opção inválida!\n");
                }
            } else if (comparacao == 2) {  // MENOR
                switch (atributo) {
                    case 1:
                        if (area < area2)
                            printf("Carta 1 perdeu com menor área!\n");
                        else
                            printf("Carta 2 venceu com menor área!\n");
                        break;
                    case 2:
                        if (populacao < populacao2)
                            printf("Carta 1 perdeu com menor população!\n");
                        else
                            printf("Carta 2 venceu com menor população!\n");
                        break;
                    case 3:
                        if (PIB < PIB2)
                            printf("Carta 1 perdeu com menor PIB!\n");
                        else
                            printf("Carta 2 venceu com menor PIB!\n");
                        break;
                    case 4:
                        if (Densidade_Populacional > Densidade_Populacional2)
                            printf("Carta 1 perdeu com menor densidade populacional!\n");
                        else
                            printf("Carta 2 venceu com menor densidade populacional!\n");
                        break;
                    default:
                        printf("Opção inválida!\n");
                }
            } else {
                printf("Opção de comparação inválida!\n");
            }

            // Comparação Final - Super Poder
            printf("\n-- Super Poder --\n");
            if (Super_Poder1 > Super_Poder2)
                printf("Carta 1 venceu no Super Poder!\n");
            else if (Super_Poder2 > Super_Poder1)
                printf("Carta 2 venceu no Super Poder!\n");
            else
                printf("Empate no Super Poder!\n");
            break;

        case 2:
            printf("Escolha a regra para ser explicada:\n");
            printf("1. Países\n2. Informação\n");
            scanf("%d", &regras);

            switch (regras) {
                case 1:
                    printf("Escolha dois países antes de começar o jogo.\n");
                    break;
                case 2:
                    printf("Pesquise e insira as informações corretas de cada país sem erros.\n");
                    break;
                default:
                    printf("Regra inválida!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
