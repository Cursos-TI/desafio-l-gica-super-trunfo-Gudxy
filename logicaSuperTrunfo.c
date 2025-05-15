#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
    char nome[50];
    int CDC, PT;
    float area, PIB;
    unsigned long int populacao;
    int comecar, regras;
    int opcao;

    printf("Escolha sua opcao\n");
    printf("1. Comecar Jogo\n");
    printf("2. Regras do Jogo\n");
    scanf("%d", &opcao);

    



    switch (opcao)
    {
        case 1: 
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
    printf("População: %d\n", populacao);
    printf("Área: %.2f KM²\n", area);
    printf("PIB: $%.2f\n", PIB);
    printf("Pontos Turísticos: %d\n", PT);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional);
    printf("PIB per Capita: %.2f Reais\n",PIB_per_capita);

    // Segunda cidade
    char nome2[50];
    int CDC2, PT2;
    float area2, PIB2;
    unsigned long int populacao2;

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
    printf("População: %d\n", populacao2);
    printf("Área: %.2f KM²\n", area2);
    printf("PIB: $%.2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", PT2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional2);
    printf("PIB per Capita: %.2f Reais\n",PIB_per_capita2);
    
    long double Super_Poder1 = (float)(populacao + area + PIB + PT + PIB_per_capita + Densidade_Populacional);
    long double Super_Poder2 = (float)(populacao2 + area2 + PIB2 + PT2 + PIB_per_capita2 + Densidade_Populacional2);

    printf("\n-- Comparação de Cartas --\n");

    printf("População: Carta 1 venceu (%d)\n", populacao > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area > area2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB > PIB2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", PT > PT2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", Densidade_Populacional > Densidade_Populacional2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", PIB_per_capita > PIB_per_capita2);
    printf("Super Poder: Carta 1 venceu (%.2f)\n", Super_Poder1 > Super_Poder2);
    
    
    printf("\n-- Vencedores entre as duas cartas --\n");

    if (populacao > populacao2) {
        printf("Carta 1 venceu em populacao!\n");
    } else if  (populacao < populacao2) {
        printf("Carta 2 venceu em populacao!\n");
    }

    if (area > area2) {
        printf("Carta 1 venceu em area (km2)!\n");
    } else if (area < area2) {
        printf("Carta 2 venceu em area (km2)!\n");
    }

    if (PIB > PIB2) {
        printf("Carta 1 venceu em PIB!\n");
    } else if (PIB < PIB2) {
        printf("Carta 2 venceu em PIB!\n");
    }

    if (PT > PT2) {
        printf("Carta 1 venceu em Pontos Turisticos!\n");
    } else if (PT < PT2) {
        printf("Carta 2 venceu em Pontos Turisticos!\n");
    }

    if (Densidade_Populacional > Densidade_Populacional2) {
        printf("Carta 2 venceu em Densidade Populacional!\n");
    } else if (Densidade_Populacional < Densidade_Populacional2) {
        printf("Carta 1 venceu em Densidade populacional!\n");
    }
    
    if (PIB_per_capita > PIB_per_capita2) {
        printf("Carta 1 venceu em PIB Per Capita!\n");
    } else if (PIB_per_capita < PIB_per_capita2) {
        printf("Carta 2 venceu em PIB Per Capita!\n");
    }
    break;
     
    case 2: 
        printf("Escolha a regra para ser explicada\n");
        printf("1. Paises - 2. Informacao: \n");
        scanf("%d", &regras);

        switch (regras)
    {
        case 1:
            printf("Escolhe 2 paises antes de comecar o Jogo\n");
        break;

        case 2:
        printf("Pesquise e coloque as informacoes correta de cada pais sem erros\n");
        break;
    }


}

    
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
