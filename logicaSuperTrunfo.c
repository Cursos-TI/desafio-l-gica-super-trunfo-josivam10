#include <stdio.h>

int main(){

    char estado[100], capital[99], estado1[100], capital1[99];
    int populacao, ddd, populacao1, ddd1;
    float area, area1,densidadePOPU,densidadePOPU1;
    float pib, pib1,PIBpcarp, PIBpcarp1;
    int pontosT, pontosT1;

    
    printf(" BEM VINDO AO JOGO \n");
    printf("Desafio Super Trunfo \n");
    printf("!!!!!!!!!!!!!!!!!!!!!\n");


    printf("VAMOS COMECAR O JOGO \n");
    printf("!!!!!!!!!!!!!!!!!!!!! \n");

    printf("DIGITE A CARTA 1 \n");
    printf("Qual o nome do estado: \n");
    scanf("%s",&estado);
    printf("Qual o DDD do estado: \n");
    scanf("%d",&ddd);
    printf("Digite a capital: \n");
    scanf("%s",&capital);
    printf("Digite a populacao: \n");
    scanf("%d",&populacao);
    printf("Digite a area do estado: \n");
    scanf("%f",&area);
    printf("Digite o pib: \n");
    scanf("%f",&pib);
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d",&pontosT);

    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");

    printf("DIGITE A CARTA 2 \n");
    printf("Qual o nome do estado: \n");
    scanf("%s",&estado1);
    printf("Qual o DDD do estado: \n");
    scanf("%d",&ddd1);
    printf("Digite a capital: \n");
    scanf("%s",&capital1);
    printf("Digite a populacao: \n");
    scanf("%d",&populacao1);
    printf("Digite a area do estado: \n");
    scanf("%f",&area1);
    printf("Digite o pib: \n");
    scanf("%f",&pib1);
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d",&pontosT1);

    printf("!!!!!!!!!!!!!!!!!!!!!!!!\n");
    printf(" AQUI ESTA SUAS CARTAS \n");
    printf("!!!!!!!!!!!!!!!!!!!!!!!!\n");

    printf("CARTA 1\n");
    printf("Estado: %s \n",estado);
    printf("Codigo: %d \n",ddd);
    printf("Capital: %s \n",capital);
    printf("Populacao: %d \n",populacao);
    printf("Area: %.2f \n",area);
    printf("PIB: %.2f bilhoes de reais \n",pib);
    printf("Numero de Pontos Turisticos: %d \n",pontosT);
    if (PIBpcarp = pib / populacao){

    }
    printf("PIB per capita: %.2f \n",PIBpcarp);
    if (densidadePOPU = populacao / area){
        
    }
    printf("Densidade Populacional: %.2f \n",densidadePOPU);


    printf("CARTA 2\n");
    printf("Estado: %s \n",estado1);
    printf("Codigo: %d \n",ddd1);
    printf("Capital: %s \n",capital1);
    printf("Populacao: %d \n",populacao1);
    printf("Area: %.2f \n",area1);
    printf("PIB: %.2f bilhoes de reais \n",pib1);
    printf("Numero de Pontos Turisticos: %d \n",pontosT1);
    if (PIBpcarp1 = pib1 / populacao1){

    }
    printf("PIB per capita: %.2f \n",PIBpcarp1);
    if (densidadePOPU1 = populacao1 / area1){

    }
    printf("Densidade Populacional: %.2f \n",densidadePOPU1);
    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");


    printf("NESSE JOGO DENSIDADE POPULACIONAL\n");
    printf("    VAMOS VER QUEM VAI GANHAR \n");
    printf("CARTA 1 \n");
    printf("Densidade Populacional: %.2f \n",densidadePOPU);
    printf("CARTA 2 \n");
    printf("Densidade Populacional: %.2f \n",densidadePOPU1);
    if( densidadePOPU < densidadePOPU1){
        printf("~~~~~~~~~~~~~~~~~\n");
        printf("  RESULTADO\n");
        printf("CARTA 1 GANHOU!\n");
    } else {
        printf("~~~~~~~~~~~~~~~~~\n");
        printf("  RESULTADO\n");
        printf("CARTA 2GANHOU! \n");
    }

    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!\n");

    if( densidadePOPU < densidadePOPU1){
        printf("-__CARTA 1 GANHOU__-\n");
        printf(" --CARTA VENCEDORA--\n");
        printf("Estado: %s \n",estado);
        printf("Codigo: %d \n",ddd);
        printf("Capital: %s \n",capital);
        printf("Populacao: %d \n",populacao);
        printf("Area: %.2f \n",area);
        printf("PIB: %.2f bilhoes de reais \n",pib);
        printf("Numero de Pontos Turisticos: %d \n",pontosT);
        printf("PIB per capita: %.2f \n",PIBpcarp);
        printf("Densidade Populacional: %.2f \n",densidadePOPU);
    } else {
        printf(" -__CARTA 2 GANHOU__- \n");
        printf(" --CARTA VENCEDORA--\n");
    printf("Estado: %s \n",estado1);
    printf("Codigo: %d \n",ddd1);
    printf("Capital: %s \n",capital1);
    printf("Populacao: %d \n",populacao1);
    printf("Area: %.2f \n",area1);
    printf("PIB: %.2f bilhoes de reais \n",pib1);
    printf("Numero de Pontos Turisticos: %d \n",pontosT1);
    printf("PIB per capita: %.2f \n",PIBpcarp1);
    printf("Densidade Populacional: %.2f \n",densidadePOPU1);
    }



    return 0;
}
