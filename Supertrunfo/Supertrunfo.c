#include <stdio.h>  // Biblioteca para entrada e saída padrão

int main() {

    // Declaração de variáveis: armazena dados das duas cartas do jogo
    int populacao1, populacao2;  
    int carta1, carta2;
    float area1, area2;
    float pib1, pib2;
    int Num_pontos_turisticos1, Num_pontos_turisticos2;
    char estado1[20], estado2[20];
    char codigo1[20], codigo2[20];
    char nome_cidade1[20], nome_cidade2[20];

    // Introdução ao jogo
    printf("Olá, caro jogador!\n\n");
    printf("Vamos iniciar o jogo do Super Trunfo.\n\n");
    printf("A primeira etapa é realizar o cadastro das cartas. Vamos lá!\n\n");

    // Cadastro da primeira carta
    printf("Informe o número da sua primeira carta: ");
    scanf("%d", &carta1);
    printf("Informe o nome do estado: ");
    scanf("%s", estado1);
    printf("Informe o código da carta: ");
    scanf("%s", codigo1);
    printf("Informe o nome da cidade: ");
    scanf("%s", nome_cidade1);
    printf("Informe o tamanho da população: ");
    scanf("%d", &populacao1);
    printf("Informe a área: ");
    scanf("%f", &area1);
    printf("Informe o PIB: ");
    scanf("%f", &pib1);
    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d", &Num_pontos_turisticos1);
    printf("\n");

    // Cadastro da segunda carta
    printf("Obrigado pelas informações da primeira carta! Agora vamos cadastrar a segunda carta.\n\n");
    printf("Informe o número da sua segunda carta: ");
    scanf("%d", &carta2);
    printf("Informe o nome do estado: ");
    scanf("%s", estado2);
    printf("Informe o código da carta: ");
    scanf("%s", codigo2);
    printf("Informe o nome da cidade: ");
    scanf("%s", nome_cidade2);
    printf("Informe o tamanho da população: ");
    scanf("%d", &populacao2);
    printf("Informe a área: ");
    scanf("%f", &area2);
    printf("Informe o PIB: ");
    scanf("%f", &pib2);
    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d", &Num_pontos_turisticos2);
    printf("\n");

    // Exibição dos dados das cartas
    printf("Obrigado pelas informações da sua segunda carta!\n\n");
    printf("Agora vamos exibir os dados das duas cartas que você cadastrou, ok? :)\n\n");

    printf("DADOS DA PRIMEIRA CARTA\n");
    printf("Número da carta: %d\n", carta1);
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área da cidade: %f\n", area1);
    printf("PIB da cidade: %f\n", pib1);
    printf("Quantidade de pontos turísticos: %d\n", Num_pontos_turisticos1);
    printf("\n");

    printf("DADOS DA SEGUNDA CARTA\n");
    printf("Número da carta: %d\n", carta2);
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área da cidade: %f\n", area2);
    printf("PIB da cidade: %f\n", pib2);
    printf("Quantidade de pontos turísticos: %d\n", Num_pontos_turisticos2);
    printf("\n");

    // Encerramento do jogo
    printf("Muito obrigado pela sua participação, jogador!\n");
    printf("Chegamos ao fim do jogo Super Trunfo.\n");

    return 0;
}