#include <stdio.h>

// Função para calcular desidade populacional e o PIB per Capita
float funcaoDivisao(float num1, float num2) {
    return (num1 / num2); // Divide os valores entre si
}

int main(){
    //Variáveis responsáveis por guardar as informação das cidades da primeira e segunda carta.
    char estado[50], cod_card[50], name_city[50];
    int populacao, turistic_points;
    float area_km, PIB, densidade_populacional, PIB_per_capita;

    char estado2[50], cod_card2[50], name_city2[50];
    int populacao2, turistic_points2;
    float area_km2, PIB2, densidade_populacional2, PIB_per_capita2;

    //Pedido e leitura das informações do usuário da primeira carta.
    printf("Bem-vindo(a) ao jogo Super-Trunfo de países. Para começar a jogar peço, por favor, que digite o estado que quer cadastar a primeira carta. \n");
    scanf("%s", &estado);

    printf("Agora peço que digite o codigo da carta, deve ter a inicial do estado seguido do número. ex: S01. \n");
    scanf("%s", &cod_card);

    printf("Digite o nome da cidade escolhida: \n");
    scanf("%s", &name_city);

    printf("Ótimo! Vamos adicionar alguns valores. Digite o número da população: \n");
    scanf("%d", &populacao);

    printf("Agora o número de pontos turísticos: \n");
    scanf("%d", &turistic_points);

    printf("Qual a área em Km²? \n");
    scanf("%f", &area_km);

    printf("E o PIB da cidade? \n");
    scanf("%f", &PIB);

    //Pedido e leitura das informações do usuário da segunda carta.

    printf("Muito bem! Agora vamos para a segunda carta, o sistema é o mesmo. \n");

    printf("Digite o estado da segunda carta. \n");
    scanf("%s", &estado2);

    printf("Digite o codigo carta \n");
    scanf("%s", &cod_card2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &name_city2);

    printf("Digite o número da população: \n");
    scanf("%d", &populacao2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &turistic_points2);

    printf("Área em Km²: \n");
    scanf("%f", &area_km2);

    printf("PIB da cidade: \n");
    scanf("%f", &PIB2);

    //Devolução das informações bem organizada de cada carta indicando qual é qual pelo codigo seguido das informações de cada uma.
    printf("Essas são as cartas cadastradas\n\n");
    printf("Carta: %s\nEstado: %s\nCidade: %s\nPopulação: %d\nNúmero de pontos turísticos: %d\nÁrea em Km²: %.2f\nPIB: %.2f\n", cod_card, estado, name_city, populacao, turistic_points, area_km, PIB);
    // Chamando a função e armazenando o resultado
    densidade_populacional = (float) funcaoDivisao(populacao, area_km);
    printf ("Densidade Populacional: %.2f Hab/Km²\n", densidade_populacional);
    PIB_per_capita = (float) funcaoDivisao(PIB, populacao);
    printf ("PIB per Capita: %.2f reais\n\n", PIB_per_capita);

    printf("Carta: %s\nEstado: %s\nCidade: %s\nPopulação: %d\nNúmero de pontos turísticos: %d\nÁrea em Km²: %.2f\nPIB: %.2f\n", cod_card2, estado2, name_city2, populacao2, turistic_points2, area_km2, PIB2);
     // Chamando a função e armazenando o resultado
    densidade_populacional2 = (float) funcaoDivisao(populacao2, area_km2);
    printf ("Densidade Populacional: %.2f Hab/Km²\n", densidade_populacional2);
    PIB_per_capita2 = (float) funcaoDivisao(PIB2, populacao2);
    printf ("PIB per Capita: %.2f reais\n", PIB_per_capita2);

    return 0;
}