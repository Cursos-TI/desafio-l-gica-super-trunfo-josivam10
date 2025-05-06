#include <stdio.h>
int main (){

    char estado[100], capital[99], estado1[100], capital1[99];
    int populacao, ddd, populacao1, ddd1;
    float area, area1,densidadePOPU,densidadePOPU1;
    float pib, pib1,PIBpcarp, PIBpcarp1;
    int pontosT, pontosT1;
    int opcaoJogo, opcaoJogo1, resultado, resultado1;
    float SuperPoder, SuperPoder1;

    

    ///BEM VINDO AO JOGO  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    printf("##################### \n");
    printf("!!!!!!!!!!!!!!!!!!!!! \n");
    printf("  BEM VINDO AO JOGO \n");
    printf(" Desafio Super Trunfo \n");
    printf("!!!!!!!!!!!!!!!!!!!!!\n");
    printf("#####################\n");

    printf("##################### \n");
    printf("!!!!!!!!!!!!!!!!!!!!! \n");
    printf("VAMOS COMECAR O JOGO \n");
    printf("!!!!!!!!!!!!!!!!!!!!! \n");
    printf("##################### \n");

    ///ENTRADA DAS DUAS CARTAS @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@


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
    printf("#############################\n");
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

    /// CALCULOS DE DADOS @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    PIBpcarp1 = pib1 / populacao1;
    densidadePOPU1 = populacao1 / area1;
    PIBpcarp = pib / populacao;
    densidadePOPU = populacao / area;
    SuperPoder = (float)  populacao + area + pib + pontosT; 
    SuperPoder1 = (float)  populacao1 + area1 + pib1 + pontosT1; 

    /// PRIMEIRO MENU @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
    printf("#################################\n");
    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");

    printf("### Menu do jogo ### \n");
    printf("Escolha o Primeiro Atributo da Disputa \n");
    printf("1. Populacao \n");
    printf("2. Area \n");
    printf("3. PIB \n");
    printf("4. Densidade Populacional \n");
    printf("5. Pontos Turisticos \n");
    scanf ("%d",&opcaoJogo );

    /// SELECAO DO PRIMEIRO ATRIBUTO @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    switch (opcaoJogo)
    {
    case 1:
        printf("Voce escolheu Populacao: \n");
        printf("A Populacao da Carta 1 e: %d e a Populacao da Carta 2 e: %d \n", populacao, populacao1);
        resultado = populacao > populacao1 ? 1 : 0 ;
        break;

    case 2:
        printf("Voce escolheu Area: \n");
        printf("A Area da Carta 1 e: %.2f e a Area da Carta 2 e: %.2f \n", area, area1);
        resultado = area > area1 ? 1 : 0 ;
        break;

    case 3:
        printf("Voce escolheu PIB: \n");
        printf("A PIB da Carta 1 e: %.2f e a PIB da Carta 2 e: %.2f \n", pib, pib1);
        resultado = pib > pib1 ? 1 : 0 ;
        break;

    case 4:
        printf("Voce escolheu Densidade Populacional: \n");
        printf("A Dencidade Populacional da Carta 1 e: %.2f e a Dencidade Populacional da Carta 2 e: %.2f \n", densidadePOPU, densidadePOPU1);
        resultado = densidadePOPU < densidadePOPU1 ? 1 : 0 ;
        break;

    case 5:
        printf("Voce escolheu Populacao: \n");
        printf("A Populacao da Carta 1 e: %d e a Populacao da Carta 2 e: %d \n", pontosT, pontosT1);
        resultado = pontosT > pontosT1 ? 1 : 0 ;
        break;
    
    default:
        printf("### OPCAO INVALIDA ### \n");
        break;
    }

    /// SEGUNDO MENU @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    printf("### Menu do jogo ### \n");
    printf("Escolha o Segundo Atributo da Disputa \n");
    printf("### ATENCAO ### \n");
    printf("Por favor escolha \n   um ATRIBUTO \nDiferente do Primeiro! \n");
    printf("@@@ ATENCAO @@@ \n");
    printf("1. Populacao \n");
    printf("2. Area \n");
    printf("3. PIB \n");
    printf("4. Densidade Populacional \n");
    printf("5. Pontos Turisticos \n");
    scanf ("%d",&opcaoJogo1 );

     /// SELECAO DO SEGUNDO ATRIBUTO @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    if (opcaoJogo == opcaoJogo1)
    {
        printf("### OPCAO INVALIDA ### \n");
    }else{

    } switch (opcaoJogo1)
    {
    case 1:
        printf("Voce escolheu Populacao: \n");
        printf("A Populacao da Carta 1 e: %d e a Populacao da Carta 2 e: %d \n", populacao, populacao1);
        resultado1 = populacao > populacao1 ? 1 : 0 ;
        break;

    case 2:
        printf("Voce escolheu Area: \n");
        printf("A Area da Carta 1 e: %.2f e a Area da Carta 2 e: %.2f \n", area, area1);
        resultado1 = area > area1 ? 1 : 0 ;
        break;

    case 3:
        printf("Voce escolheu PIB: \n");
        printf("A PIB da Carta 1 e: %.2f e a PIB da Carta 2 e: %.2f \n", pib, pib1);
        resultado1 = pib > pib1 ? 1 : 0 ;
        break;

    case 4:
        printf("Voce escolheu Densidade Populacional: \n");
        printf("A Dencidade Populacional da Carta 1 e: %.2f e a Dencidade Populacional da Carta 2 e: %.2f \n", densidadePOPU, densidadePOPU1);
        resultado1 = densidadePOPU < densidadePOPU1 ? 1 : 0 ;
        break;

    case 5:
        printf("Voce escolheu Populacao: \n");
        printf("A Populacao da Carta 1 e: %d e a Populacao da Carta 2 e: %d \n", pontosT, pontosT1);
        resultado1 = pontosT > pontosT1 ? 1 : 0 ;
        break;
    
    default:
        printf("### OPCAO INVALIDA ### \n");
        break;
    }

    //// IMPRIMIR AS DUAS CARTAS COM TODOS OS CALCULOS @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    printf("########################\n");
    printf("!!!!!!!!!!!!!!!!!!!!!!!!\n");
    printf(" AQUI ESTA SUAS CARTAS \n");
    printf("!!!!!!!!!!!!!!!!!!!!!!!!\n");
    printf("########################\n");

    /// PRIMEIRA CARTA #########################################

    printf("CARTA 1\n");
    printf("Estado: %s \n",estado);
    printf("Codigo: %d \n",ddd);
    printf("Capital: %s \n",capital);
    printf("Populacao: %d \n",populacao);
    printf("Area: %.2f \n",area);
    printf("PIB: %.2f bilhoes de reais \n",pib);
    printf("Numero de Pontos Turisticos: %d \n",pontosT);
    printf("PIB per capita: %.2f \n",PIBpcarp);
    printf("Densidade Populacional: %.2f \n",densidadePOPU);
    printf("O SUPER PODER E: %.2f \n", SuperPoder);

    /// SEPARACAO DAS IMPRECOES DAS CARTAS #####################
        
    printf("###################################\n");
    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
    printf("###################################\n");
    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
    printf("###################################\n");

    /// SEGUNDA CARTA ##########################################

    printf("CARTA 2\n");
    printf("Estado: %s \n",estado1);
    printf("Codigo: %d \n",ddd1);
    printf("Capital: %s \n",capital1);
    printf("Populacao: %d \n",populacao1);
    printf("Area: %.2f \n",area1);
    printf("PIB: %.2f bilhoes de reais \n",pib1);
    printf("Numero de Pontos Turisticos: %d \n",pontosT1);
    printf("PIB per capita: %.2f \n",PIBpcarp1);
    printf("Densidade Populacional: %.2f \n",densidadePOPU1);
    printf("O SUPER PODER E: %.2f \n", SuperPoder1);

    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
    printf("#################################\n");
    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");

    /// RESULTADO FINAL ############################################

    if (resultado && resultado1)
    {
        printf(" ### PARABENS VOCE VENCEU! ### \n");
    }else if (resultado |= resultado1)
    {
        printf(" ### VOCE EMPATOU ### \n");
    }else {
        printf(" ### VOCE PERDEU ### \n");
    }
    
    /// CARTA VENCEDORA ###############################################

    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
    printf("#################################\n");
    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
    printf(" @@@ ESSA E A CARTA VENCEDORA @@@\n");
    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
    printf("#################################\n");
    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");


    if (resultado && resultado1)
    {    
    printf("CARTA 1\n");
    printf("Estado: %s \n",estado);
    printf("Codigo: %d \n",ddd);
    printf("Capital: %s \n",capital);
    printf("Populacao: %d \n",populacao);
    printf("Area: %.2f \n",area);
    printf("PIB: %.2f bilhoes de reais \n",pib);
    printf("Numero de Pontos Turisticos: %d \n",pontosT);
    printf("PIB per capita: %.2f \n",PIBpcarp);
    printf("Densidade Populacional: %.2f \n",densidadePOPU);
    printf("O SUPER PODER E: %.2f \n", SuperPoder);

    }else if (resultado |= resultado1)
    {
        printf(" ### VOCE EMPATOU ### \n");
    }else {
        printf("CARTA 2\n");
        printf("Estado: %s \n",estado1);
        printf("Codigo: %d \n",ddd1);
        printf("Capital: %s \n",capital1);
        printf("Populacao: %d \n",populacao1);
        printf("Area: %.2f \n",area1);
        printf("PIB: %.2f bilhoes de reais \n",pib1);
        printf("Numero de Pontos Turisticos: %d \n",pontosT1);
        printf("PIB per capita: %.2f \n",PIBpcarp1);
        printf("Densidade Populacional: %.2f \n",densidadePOPU1);
        printf("O SUPER PODER E: %.2f \n", SuperPoder1);
    
    }
    return 0;
}
