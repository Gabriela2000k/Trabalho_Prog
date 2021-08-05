#include <stdio.h>
#include <stdlib.h>
#include <time.h> //adicionei essa biblioteca para fazer o "sorteio"
int main()
{   //declarei vetores de caracteres para receber nomes(alguns já atribuí valores),variáveis inteiras, variaveis de numeros com virgula usando float e mais abaixo uma constante
    char nome_do_cliente [50];
    char sobrenome_do_cliente [50];
    int idade_do_cliente;
    int contratar;
    int data_de_nascimento [50];
    int telefone_do_cliente [50];
    int forma_de_pagamento;
    int quantidade_de_convidados;
    float pvalor_total11=530.00;
    float pvalor_total12=570.00;
    float pvalor_total13=620.00;
    float pvalor_total21=530.00;
    float pvalor_total22=600.00;
    float pvalor_total23=625.00;
    float mvalor_total11=630.00;
    float mvalor_total12=680.00;
    float mvalor_total13=720.00;
    float mvalor_total21=640.00;
    float mvalor_total22=685.00;
    float mvalor_total23=800.00;
    float gvalor_total11=920.00;
    float gvalor_total12=975.00;
    float gvalor_total13=1200.00;
    float gvalor_total21=930.00;
    float gvalor_total22=980.00;
    float gvalor_total23=1350.00;
    const float desconto_a_vista=15; //Declarei essa constante pois é o valor fixo que passo para porcentagem para os caos de descontos
    float valor_atracao;
    char tipo_de_festa1 [20] = {'b', 'a', 's', 'i', 'c', '\0'};
    char tipo_de_festa2 [20] = {'m', 'o', 'd', 'e', 'r', 'a', 't', 'e', '\0'};
    char tipo_de_festa3 [20] = {'p', 'r', 'e', 'm', 'i', 'u', 'm', '\0'};
    char atracao [100] = "musica ao vivo\ncarrinho gourmet tematico";
    char atracao1 [100] ="Welcome drink\nOpen Bar\ncarrinho gourmet tematico\nPersonagens";
    char atracao2 [100] ="Welcome drink\nOpen Bar\ncarrinho gourmet tematico\nEscultura de gelo\nStand up";
    int publico_festa;
    int tipo_de_festa_total;
    int mudanca_de_dados;


    printf("=================== Brothers Party ===================\n");

    printf("\n\n\n Para objetivo de cadastramento e delinear o perfil do cliente, responda o questionario abaixo \n\n\n");


    printf("\n\n\nDigite o seu nome para cadastramento: \n\n\n");
    scanf("%s", &nome_do_cliente); //Inicializo coletando as informaçoes do usuario e coloco nas devidas variáveis

    printf("\n\n\nDigite o seu sobrenome para cadastramento: \n\n\n");
    scanf("%s",&sobrenome_do_cliente);

    printf("\n\n\nDigite sua data de nascimento para cadastramento usando '/' exemplo-->xx/xx/xxxx: \n\n\n");
    scanf("%s",&data_de_nascimento);

    printf("\n\n\nDigite o seu numero de contato para cadastramento: \n\n\n");
    scanf("%s",&telefone_do_cliente);

    printf("\n\n\nDigite sua idade: \n\n\n");
    scanf("%d", &idade_do_cliente);

    printf("\n\nDigite por favor a quantidade de convidados previstos para o evento: \n\n");
    printf("\n\n\n A quantidade maxima de convidados eh de 500 pessoas \n\n\n");
    scanf("%d", &quantidade_de_convidados);

    printf("\n O pagamento sera a vista ou parcelado? pagamentos a vista terao desconto \n");
    printf("\n\n\n Pagamentos a vista digite:1      Pagamentos parcelado digite:2\n\n\n");
    scanf("%d", &forma_de_pagamento);

    while (forma_de_pagamento!=1 && forma_de_pagamento!=2) //Uso while com teste no inicio para forçar o usuário a digitar um valor valido, como informado no printf anterior
    {
        printf("\n\n\ Digite uma opcao valida\n\n\ ");
        scanf("%d", &forma_de_pagamento);
    }
    printf("\n\n\ Opcao armazenada\n\n\ ");

    printf("\n O evento sera para o publico infantil ou para adultos? \n");
    printf("\n\n\n Publico infantil digite:1      Publico adulto:2\n\n\n");
    scanf("%d", &publico_festa);
    while (publico_festa!=1 && publico_festa!=2)  //Uso while com teste no inicio para forçar o usuário a digitar um valor valido, como informado no printf anterior
    {
        printf("\n\n\ Digite uma opcao valida\n\n\ ");
        scanf("%d", &publico_festa);
    }
    printf("\n\n\ Opcao armazenada\n\n\ ");


    printf("\n\n\ A festa sera simples, modesta ou mais sofisticada? \n\n");
    printf("\n\n\n Para festa simples digite:1  Para festa media digite:2 ou para mais sofisticada digite:3 \n\n\n");
    scanf("%d", &tipo_de_festa_total);
    while (tipo_de_festa_total!=1 && tipo_de_festa_total!=2 && tipo_de_festa_total!=3) //Uso while com teste no inicio para forçar o usuário a digitar um valor valido, como informado no printf anterior
    {
        printf("\n\n\ Digite uma opcao valida\n\n\ ");
        scanf("%d", &tipo_de_festa_total);
    }
    printf("\n\n\ Opcao armazenada\n\n\ ");

    printf("%s %s Gostaria de alterar algum dado fornecido? Se sim digite 1, no caso de querer apenas continuar digite 2 ou se querer ver dados ja fornecidos digite 3\n\n",nome_do_cliente,sobrenome_do_cliente);
    scanf("%d", &mudanca_de_dados);

//uso a variavel mudanca_de_dados como parametro junto do while novamente com teste no inicio(para repetir quantas vezes for preciso e se for preciso)para de acordo com oq for digitado pelo usuário o programa apenas mostrar oq tiver sido cadastrado, alterar oq foi cadastrado ou não fazer nada
    while(mudanca_de_dados!=2)//Usei o número 2 como flag para sair da repetição
    {

        switch(mudanca_de_dados) //Uso o switch para "controlar" as escolhas digitadas de acordo com oq foi dito no printf anterior
        {
        case 1://Aqui repito oq foi mostrado anteriormente para o usuário poder modificar o cadastro caso queira
            printf("\n\n\nDigite o seu nome para cadastramento: \n\n\n");
            scanf("%s", &nome_do_cliente);

            printf("\n\n\nDigite o seu sobrenome para cadastramento: \n\n\n");
            scanf("%s",&sobrenome_do_cliente);

            printf("\n\n\nDigite sua data de nascimento para cadastramento usando '/' exemplo-->xx/xx/xxxx: \n\n\n");
            scanf("%s",&data_de_nascimento);

            printf("\n\n\nDigite o seu numero de contato para cadastramento: \n\n\n");
            scanf("%s",&telefone_do_cliente);

            printf("\n\n\nDigite sua idade: \n\n\n");
            scanf("%d", &idade_do_cliente);

            printf("\n\nDigite por favor a quantidade de convidados previstos para o evento: \n\n");
            printf("\n\n\n A quantidade maxima de convidados eh de 500 pessoas \n\n\n");
            scanf("%d", &quantidade_de_convidados);

            printf("\n O pagamento sera a vista ou parcelado? pagamentos a vista terao desconto \n");
            printf("\n\n\n Pagamentos a vista digite:1      Pagamentos parcelado digite:2\n\n\n");
            scanf("%d", &forma_de_pagamento);

            while (forma_de_pagamento!=1 && forma_de_pagamento!=2)
            {
                printf("\n\n\ Digite uma opcao valida\n\n\ "); //Uso while com teste no inicio para forçar o usuário a digitar um valor valido
                scanf("%d", &forma_de_pagamento);
            }
            printf("\n\n\ Opcao armazenada\n\n\ ");

            printf("\n O evento sera para o publico infantil ou para adultos? \n");
            printf("\n\n\n Publico infantil digite:1      Publico adulto:2\n\n\n");
            scanf("%d", &publico_festa);
            while (publico_festa!=1 && publico_festa!=2) //Uso while com teste no inicio para forçar o usuário a digitar um valor valido
            {
                printf("\n\n\ Digite uma opcao valida\n\n\ ");
                scanf("%d", &publico_festa);
            }
            printf("\n\n\ Opcao armazenada\n\n\ ");


            printf("\n\n\ A festa sera simples, modesta ou mais sofisticada? \n\n");
            printf("\n\n\n Para festa simples digite:1  Para festa media digite:2 ou para mais sofisticada digite:3 \n\n\n");
            scanf("%d", &tipo_de_festa_total);
            while (tipo_de_festa_total!=1 && tipo_de_festa_total!=2 && tipo_de_festa_total!=3) //Uso while com teste no inicio para forçar o usuário a digitar um valor valido
            {
                printf("\n\n\ Digite uma opcao valida\n\n\ ");
                scanf("%d", &tipo_de_festa_total);
            }
            break;

        case 3: //Aqui mostro os dados cadastrados ´pelo usuario
            printf("\n\nNOME--->%s %s\n\nIDADE--->%d\n\nDATA DE NASCIMENTO--->%s\n\nNUMERO DE TELEFONE PARA CONTATO--->%s\n\nQUANTIDADE DE CONVIDADOS--->%d\n\nFORMA DE PAGAMENTO--->%d (A VISTA EH: 1  PARCELADO EH: 2)\n\nPUBLICO DA FESTA--->%d(PARA INFANTIL: 1  PARA ADULTO:2)\n\nTIPO DE FESTA--->%d(SIMPLES:1  MEDIA:2  SOFISTICADA:3)\n\n",nome_do_cliente,sobrenome_do_cliente,idade_do_cliente,data_de_nascimento,telefone_do_cliente,quantidade_de_convidados,forma_de_pagamento,publico_festa,tipo_de_festa_total);
            break;

        default:
            ("continue");

        }
        printf("Gostaria de alterar algum dado fornecido? Se sim digite 1, no caso de querer apenas continuar digite 2 ou se querer ver dados ja fornecidos digite 3\n\n");
        scanf("%d", &mudanca_de_dados); //aqui retorno o usuario novamente para a mesma pergunta para possibilita-lo escolher outra opçao ou muda-la(novamente se for o caso)

    }
    //Usei Operadores lógicos como condicionais aninhadas(if e else pois tenho mais facilidade e precisão por isso gosto mais) combinado de operadores relacionais para processar as informações coletadas e redireciona-las
    if(quantidade_de_convidados<=50 && publico_festa==1 && tipo_de_festa_total==1)
        printf("\n\n\ %s O kit festa para seu perfil eh: ---> %s <-- VALOR: %.2f \n\n\Contem: 4kg de bolo sabor creme com abacaxi e floresta negra\n\n250 salgadinhos sabor: coxinhas, bolinha de queijo e mini esfiha \n\n200 docinhos sabor: brigadeiro, beijinho e moranguinho \n\n10L de refrigerante: guarana, coca-cola, fanta e sprite\n\n 100 guardanapos \n\n100 copos descartaveis \n\n50 garfinhos, colheres e facas descartaveis \n\n50 pratinhos \n\n1 vela \n\n\ ",nome_do_cliente,tipo_de_festa1,pvalor_total11);
    else
    {
        if (quantidade_de_convidados<=50 && publico_festa==1 && tipo_de_festa_total==2)
            printf("\n\n\ %s O kit festa para seu perfil eh: ---> %s <-- VALOR: %.2f \n\n\Contem: 4kg de bolo sabor creme com abacaxi, nutella com mm e floresta negra \n\n300 salgadinhos sabor coxinhas, bolinha de queijo e mini esfiha \n\n250 docinhos sabor: brigadeiro com ovomaltine, beijinho, moranguinho e cajuzinho\n\n10L de refrigerante: guarana, coca-cola, fanta e sprite \n\n150 guardanapos \n\n140 copos descartaveis \n\n70 garfinhos, colheres e facas descartaveis \n\n70 pratinhos descartaveis\n\n1 vela personalizada \n\n\ ",nome_do_cliente,tipo_de_festa2, pvalor_total12);

        else
        {
            if (quantidade_de_convidados<=50 && publico_festa==1 && tipo_de_festa_total==3)
                printf("\n\n\ %s O kit festa para seu perfil eh: ---> %s <-- VALOR: %.2f \n\n\Contem: 4kg de bolo sabor creme com abacaxi, nutella com mm, leite ninho e floresta negra \n\n250 salgadinhos sabor: mini pizzas doces e salagadas, bolinha de queijo, mini esfiha e bolinho de siri\n\n200 docinhos sabor: brigadeiro gourmet com pistache, beijinho, palha italiana gourmet sabor chocolate belga e cajuzinho \n\n10L de refrigerante: guarana, coca-cola, fanta e pepsi 100 guardanapos 100 copos personalizados 50 garfinhos colheres e facas descartaveis dourados 50 pratinhos descartaveis dourados e 1 vela personalizada \n\n\ ",nome_do_cliente,tipo_de_festa3,pvalor_total13);

            else
            {
                if (quantidade_de_convidados<=50 && publico_festa==2 && tipo_de_festa_total==1)
                    printf("\n\n\ %s O kit festa para seu perfil eh: ---> %s <-- VALOR: %.2f \n\n\Contem: 4kg de bolo sabor creme com abacaxi e mousse de maracuja\n\n250 salgadinhos sabor: coxinhas, bolinha de queijo com presunto e mini esfiha\n\n200 docinhos sabor: brigadeiro, beijinho e moranguinho\n\n10L de refrigerante: guarana, coca-cola, fanta e sprite 100 guardanapos 100 copos descartaveis 50 garfinhos, colheres e facas descartaveis \n\n50 pratinhos descartaveis \n\n1 vela \n\n\ ",nome_do_cliente,tipo_de_festa1,pvalor_total21);

                else
                {
                    if  (quantidade_de_convidados<=50 && publico_festa==2 && tipo_de_festa_total==2)
                        printf("\n\n\ %s O kit festa para seu perfil eh: ---> %s <--  VALOR: %.2f \n\n\Contem: 4kg de bolo sabor creme com abacaxi, mousse de maracuja e mousse de limao \n\n250 salgadinhos sabor: coxinhas, bolinho de aipim e mini esfiha\n\n200 docinhos sabor: brigadeiro, beijinho, moranguinho e olho de sogra\n\n10L de refrigerante: guarana, coca-cola, fanta e sprite \n\n100 guardanapos \n\n100 copos descartaveis \n\n50 garfinhos, colheres e facas descartaveis\n\n 50 pratinhos descartaveis \n\n 1 vela personalizada \n\n\ ",nome_do_cliente,tipo_de_festa1,pvalor_total22);

                    else
                    {
                        if (quantidade_de_convidados<=50 && publico_festa==2 && tipo_de_festa_total==3)
                            printf("\n\n\ %s O kit festa para seu perfil eh: ---> %s <--  VALOR: %.2f \n\n\Contem: 4kg de bolo sabor creme com abacaxi, mousse de limao, mousse de maracuja, floresta negra e frutas vermelhas \n\n300 salgadinhos sabor: bolinho de bacalhau, bolinha de queijo com presunto, mini esfiha, bolinho de siri e risole de camarao \n\n200 docinhos sabor: brigadeiro gourmet com pistache, beijinho, palha italiana gourmet sabor chocolate belga e cajuzinho\n\n10L de refrigerante: guarana, coca-cola, fanta, pepsi e sprite.100 guardanapos dourados \n\n100 copos personalizados \n\n50 garfinhos, colheres e facas descartaveis douradas \n\n50 pratinhos descartaveis dourados \n\n 1 vela personalizada \n\n\ ",nome_do_cliente,tipo_de_festa3,pvalor_total23);

                        else
                        {
                            if (quantidade_de_convidados>50&&quantidade_de_convidados<=100 && publico_festa==1 && tipo_de_festa_total==1)
                                printf("\n\n\ %s O kit festa para seu perfil eh: ---> %s <-- VALOR: %.2f \n\n\Contem: 8kg de bolo sabor baunilha com morango, mousse de chocolate, sabor churros, floresta negra e doce de leite \n\n500 salgadinhos sabor:coxinha, kibe, bolinha de queijo com alho, queijo com presunto e coxinha doce e salgada \n\n400 docinhos sabor: brigadeiro, cajuzinho, beijinho e doce de leite com ninho \n\n20L de refrigerante: guarana, fanta e pepsi \n\n200 guardanapos \n\n200 copos descartaveis \n\n100 garfinhos, colheres e facas descartaveis \n\n100 pratinhos descataveis \n\n1 vela \n\n\ ",nome_do_cliente,tipo_de_festa1,mvalor_total11);

                            else
                            {
                                if (quantidade_de_convidados>50&&quantidade_de_convidados<=100 && publico_festa==1 && tipo_de_festa_total==2)
                                    printf("\n\n\ %s O kit festa para seu perfil eh: ---> %s <--  VALOR: %.2f \n\n\Contem:8 kg de bolo sabor mousse de chocolate, sabor churros, creme com abacaxi ,nutella com mm e doce de leite \n\n500 salgadinhos sabor:coxinha, kibe, bolinha de queijo com alho, queijo com presunto e coxinha doce e salgada \n\n400 docinhos sabor: brigadeiro, cajuzinho, beijinho e doce de leite com ninho \n\n20L de refrigerante: guarana, fanta e pepsi \n\n200 guardanapos \n\n200 copos descartaveis \n\n100 garfinhos, colheres e facas descartaveis \n\n100 pratinhos descataveis \n\n1 vela personalizada \n\n\ ",nome_do_cliente,tipo_de_festa2,mvalor_total12);

                                else
                                {
                                    if (quantidade_de_convidados>50&&quantidade_de_convidados<=100 && publico_festa==1 && tipo_de_festa_total==3)
                                        printf("\n\n\ %s O kit festa para seu perfil eh: ---> %s <-- VALOR: %.2f \n\n\Contem 8kg de bolo sabor creme com abacaxi com pessego, nutella com mm, leite ninho, amendoim e mousse de prestigio \n\n 500 salgadinhos sabor: mini pizzas doces e salagadas, bolinha de queijo, mini esfiha e bolinho de siri 400 docinhos: brigadeiro gourmet com pistache, beijinho, palha italiana gourmet sabor chocolate belga e cajuzinho \n\n20L de refrigerante: guarana, coca-cola, fanta e pepsi\n\n200 guardanapos \n\n200 copos personalizados \n\n100 garfinhos, colheres e facas descartaveis dourados \n\n100 pratinhos descartaveis dourados \n\n1 vela personalizada \n\n\ ",nome_do_cliente,tipo_de_festa3,mvalor_total13);

                                    else
                                    {
                                        if (quantidade_de_convidados>50&&quantidade_de_convidados<=100 && publico_festa==2 && tipo_de_festa_total==1)
                                            printf("\n\n\ %s O kit festa para seu perfil eh: ---> %s <--  VALOR: %.2f \n\n\Contem: 8kg de bolo sabor creme com abacaxi e mousse de maracuja \n\n500 salgadinhos sabor: coxinhas, bolinha de queijo com presunto e mini esfiha \n\n400 docinhos sabor: brigadeiro, beijinho e moranguinho. 20L de refrigerante: guarana, coca-cola, fanta e sprite 100 guardanapos \n\n200 copos descartaveis \n\n100 garfinhos, colheres e facas descartaveis \n\n100 pratinhos descartaveis \n\n1 vela \n\n\ ",nome_do_cliente,tipo_de_festa1,mvalor_total21);

                                        else
                                        {
                                            if (quantidade_de_convidados>50&&quantidade_de_convidados<=100 && publico_festa==2 && tipo_de_festa_total==2)
                                                printf("\n\n\ %s O kit festa para seu perfil eh: ---> %s <-- VALOR: %.2f \n\n\Contem: 8kg de bolo sabor creme com abacaxi, mousse de maracuja, e mousse de limao 500 salgadinhos sabor: coxinhas, bolinho de aipim e mini esfiha 400 docinhos sabor: brigadeiro, beijinho, moranguinho e olho de sogra \n\n20L de refrigerante: guarana, coca-cola, fanta e sprite \n\n200 guardanapos \n\n200 copos descartaveis \n\n100 garfinhos colheres e facas descartaveis\n\n100 pratinhos descartaveis \n\n1 vela personalizada \n\n\ ",nome_do_cliente,tipo_de_festa2,mvalor_total22);

                                            else
                                            {
                                                if (quantidade_de_convidados>50&&quantidade_de_convidados<=100 && publico_festa==2 && tipo_de_festa_total==3)
                                                    printf("\n\n\ %s O kit festa para seu perfil eh: ---> %s <--  VALOR: %.2f \n\n\Contem: 8kg de bolo sabor creme com abacaxi, mousse de limao, mousse de maracuja, floresta negra e frutas vermelhas \n\n600 salgadinhos sabor: bolinho de bacalhau, bolinha de queijo com presunto, mini esfiha, bolinho de sirim risole de camarao e kibe \n\n400 docinhos sabor: brigadeiro gourmet com pistache, beijinho, palha italiana gourmet sabor chocolate belga e cajuzinho \n\n20L de refrigerante: guarana, coca-cola, fanta, pepsi e sprite \n\n200 guardanapos dourados \n\n200 copos personalizados \n\n100 garfinhos, colheres e facas descartaveis douradas \n\n100 pratinhos descartaveis dourados \n\n1 vela personalizada \n\n\ ",nome_do_cliente,tipo_de_festa3,mvalor_total23);

                                                else
                                                {
                                                    if (quantidade_de_convidados>100&&quantidade_de_convidados<=500 && publico_festa==1 && tipo_de_festa_total==1)
                                                        printf("\n\n\ %s O kit festa para seu perfil eh: ---> %s <--  VALOR: %.2f \n\n\Contem: 20kg de bolo sabor creme com abacaxi e floresta negra \n\n1200 salgadinhos sabor: coxinhas, bolinha de queijo, mini esfiha, queijo com presunto, coxinha doce e salgada \n\n820 docinhos: brigadeiro, beijinho, cajuzinho, moranguinho e olho de sogra \n\n42L de refrigerante: guarana, coca-cola, fanta e sprite \n\n400 guardanapos \n\n400 copos descartaveis \n\n200 garfinhos, colheres e facas descartaveis \n\n 200 pratinhos \n\n1 vela \n\n\ ",nome_do_cliente, tipo_de_festa1,gvalor_total11);

                                                    else
                                                    {
                                                        if (quantidade_de_convidados>100&&quantidade_de_convidados<=500 && publico_festa==1 && tipo_de_festa_total==2)
                                                            printf("\n\n\ %s O kit festa para seu perfil eh: ---> %s <--  VALOR: %.2f \n\n\Contem:20 kg de bolo sabor mousse de chocolate, sabor churros, creme com abacaxi ,nutella com mm e doce de leite  \n\n1200 salgadinhos sabor:coxinha, kibe, bolinha de queijo com alho, queijo com presunto e coxinha doce e salgada \n\n820 docinhos sabor: brigadeiro, cajuzinho, beijinho e doce de leite com ninho \n\n 42L de refrigerante: guarana, fanta e pepsi \n\n400 guardanapos \n\n400 copos descartaveis \n\n200 garfinhos, colheres e facas descartaveis \n\n200 pratinhos descataveis \n\n 1 vela personalizada \n\n\ ",nome_do_cliente,tipo_de_festa2,gvalor_total12);

                                                        else
                                                        {
                                                            if (quantidade_de_convidados>100&&quantidade_de_convidados<=500 && publico_festa==1 && tipo_de_festa_total==3)
                                                                printf("\n\n\ %s O kit festa para seu perfil eh: ---> %s <--  VALOR: %.2f \n\n\Contem 20kg de bolo sabor creme com abacaxi com pessego, nutella com mm, leite ninho, amendoim e mousse de prestigio \n\n1200 salgadinhos sabor: mini pizzas doces e salagadas, bolinha de queijo, mini esfiha e bolinho de siri \n\n820 docinhos sabor: brigadeiro gourmet com pistache, beijinho, palha italiana gourmet sabor chocolate belga e cajuzinho \n\n42L de refrigerante: guarana, coca-cola, fanta e pepsi \n\n400 guardanapos \n\n400 copos personalizados \n\n 200 garfinhos colheres e facas descartaveis dourados \n\n200 pratinhos descartaveis dourados \n\n 1 vela personalizada \n\n\ ",nome_do_cliente,tipo_de_festa3,gvalor_total13);
                                                            else
                                                            {
                                                                if (quantidade_de_convidados>100&&quantidade_de_convidados<=500 && publico_festa==2 && tipo_de_festa_total==1)
                                                                    printf("\n\n\ %s O kit festa para seu perfil eh: ---> %s <--  VALOR: %.2f \n\n\Contem: 20kg de bolo sabor creme com abacaxi e mousse de maracuja \n\n1200 salgadinhos: coxinhas, bolinha de queijo com presunto, mini, coxinha, mini pizzas, bolinha de queijo com alho e esfiha \n\n820 docinhos: brigadeiro, beijinho e moranguinho\n\n 42L de refrigerante: guarana, coca-cola, fanta e sprite 400 guardanapos \n\n400 copos descartaveis \n\n200 garfinhos, colheres e facas descartaveis \n\n200 pratinhos descartaveis \n\n 1 vela \n\n\ ",nome_do_cliente,tipo_de_festa1,gvalor_total21);

                                                                else
                                                                {
                                                                    if (quantidade_de_convidados>100&&quantidade_de_convidados<=500 && publico_festa==2 && tipo_de_festa_total==2)
                                                                        printf("\n\n\ %s O kit festa para seu perfil eh: ---> %s <--  VALOR: %.2f \n\n\Contem: 20kg de bolo sabor creme com abacaxi, mousse de maracuja, e mousse de limao \n\n1200 salgados: coxinhas salgada e doce, bolinho de aipim, mini esfiha, bolinha de queijo com alho e mini pizzas  \n\n820 docinhos sabor: brigadeiro, beijinho, moranguinho, olho de sogra e cajuzinho \n\n 42L de refrigerante: guarana, coca-cola, fanta e sprite \n\n400 guardanapos \n\n400 copos descartaveis \n\n200 garfinhos,colheres e facas descartaveis \n\n 200 pratinhos descartaveis \n\n 1 vela personalizada \n\n\ ",nome_do_cliente,tipo_de_festa2,gvalor_total22);

                                                                    else
                                                                    {
                                                                        if (quantidade_de_convidados>100&&quantidade_de_convidados<=500 && publico_festa==2 && tipo_de_festa_total==3)
                                                                            printf("\n\n\ %s O kit festa para seu perfil eh: ---> %s <--  VALOR: %.2f \n\n\Contem: 20kg de bolo sabor creme com abacaxi, mousse de limao, mousse de maracuja, floresta negra e frutas vermelhas\n\n 1200 salgados sabor bolinho de bacalhau, bolinha de queijo com presunto, mini esfiha, bolinho de siri, risole de camarao e kibe n\n\820 docinhos sabor brigadeiro gourmet com pistache, beijinho, palha italiana gourmet sabor chocolate belga, cajuzinho e olho de sogra \n\n 42L de refrigerante: guarana, coca-cola, fanta, pepsi e sprite \n\n 400 guardanapos dourados \n\n400 copos personalizados \n\n200 garfinhos, colheres e facas descartaveis douradas \n\n200 pratinhos descartaveis dourados \n\n1 vela personalizada \n\n\ ",nome_do_cliente,tipo_de_festa3,gvalor_total23);


                                                                    }
                                                                }
                                                            }
                                                        }

                                                    }

                                                }

                                            }



                                        }

                                    }


                                }


                            }



                        }

                    }
                }
            }
        }
    }


    if (quantidade_de_convidados<=50 && publico_festa==1 && tipo_de_festa_total==1) //Uso novamente if como operador lógico e o swith como estrutura para executar o bloco de comandos em relação ao tipo d pagamento
        switch (forma_de_pagamento)
        {
        case 1:
            pvalor_total11=pvalor_total11-desconto_a_vista/100*pvalor_total11; //Fiz uso de operação aritmética simples usando os valores digitados pelo usuário para as variáveis  para calcular o valor total com desconto
            printf("\n\n\ valor com desconto por ser a pagamento a vista eh: %.2f \n\n\ ",pvalor_total11);
            break;

        case 2:
            printf("\n\n\ valor total sem desconto: %.2f \n\n\ ",pvalor_total11);
            break;

        default:
            printf("\n\n\ opcao de pagamento invalida \n\n\ ");
        }
    else
    {
        if (quantidade_de_convidados<=50 && publico_festa==1 && tipo_de_festa_total==2)
            switch (forma_de_pagamento)
            {
            case 1:
                pvalor_total12=pvalor_total12-desconto_a_vista/100*pvalor_total12; //Fiz uso de operação aritmética simples para calcular o valor total com desconto
                printf("\n\n\ valor com desconto por ser a pagamento a vista eh: %.2f \n\n\ ",pvalor_total12);
                break;

            case 2:
                printf("\n\n\ valor total sem desconto: %.2f \n\n\ ",pvalor_total12);
                break;

            default:
                printf("\n\n\ opcao de pagamento invalida \n\n\ ");
            }
        else
        {
            if (quantidade_de_convidados<=50 && publico_festa==1 && tipo_de_festa_total==3)
                switch (forma_de_pagamento)
                {
                case 1:
                    pvalor_total13=pvalor_total13-desconto_a_vista/100*pvalor_total13; //Fiz uso de operação aritmética simples para calcular o valor total com desconto
                    printf("\n\n\ valor com desconto por ser a pagamento a vista eh: %.2f \n\n\ ",pvalor_total13);
                    break;

                case 2:
                    printf("\n\n\ valor total sem desconto: %.2f \n\n\ ",pvalor_total13);
                    break;

                default:
                    printf("\n\n\ opcao de pagamento invalida \n\n\ ");
                }
            else
            {
                if (quantidade_de_convidados<=50 && publico_festa==2 && tipo_de_festa_total==1)
                    switch (forma_de_pagamento)
                    {
                    case 1:
                        pvalor_total21=pvalor_total21-desconto_a_vista/100*pvalor_total21; //Fiz uso de operação aritmética simples para calcular o valor total com desconto
                        printf("\n\n\ valor com desconto por ser a pagamento a vista eh: %.2f \n\n\ ",pvalor_total21);
                        break;

                    case 2:
                        printf("\n\n\ valor total sem desconto: %.2f \n\n\ ",pvalor_total21);
                        break;

                    default:
                        printf("\n\n\ opcao de pagamento invalida \n\n\ ");
                    }
                else
                {
                    if  (quantidade_de_convidados<=50 && publico_festa==2 && tipo_de_festa_total==2)
                        switch (forma_de_pagamento)
                        {
                        case 1:
                            pvalor_total22=pvalor_total22-desconto_a_vista/100*pvalor_total22; //Fiz uso de operação aritmética simples para calcular o valor total com desconto
                            printf("\n\n\ valor com desconto por ser a pagamento a vista eh: %.2f \n\n\ ",pvalor_total22);
                            break;

                        case 2:
                            printf("\n\n\ valor total sem desconto: %.2f \n\n\ ",pvalor_total22);
                            break;

                        default:
                            printf("\n\n\ opcao de pagamento invalida \n\n\ ");
                        }
                    else
                    {
                        if (quantidade_de_convidados<=50 && publico_festa==2 && tipo_de_festa_total==3)
                            switch (forma_de_pagamento)
                            {
                            case 1:
                                pvalor_total23=pvalor_total23-desconto_a_vista/100*pvalor_total23; //Fiz uso de operação aritmética simples para calcular o valor total com desconto
                                printf("\n\n\ valor com desconto por ser a pagamento a vista eh: %.2f \n\n\ ",pvalor_total23);
                                break;

                            case 2:
                                printf("\n\n\ valor total sem desconto: %.2f \n\n\ ",pvalor_total23);
                                break;

                            default:
                                printf("\n\n\ opcao de pagamento invalida \n\n\ ");
                            }

                        else
                        {
                            if (quantidade_de_convidados>50&&quantidade_de_convidados<=100 && publico_festa==1 && tipo_de_festa_total==1)
                                switch (forma_de_pagamento)
                                {
                                case 1:
                                    mvalor_total11=mvalor_total11-desconto_a_vista/100*mvalor_total11; //Fiz uso de operação aritmética simples para calcular o valor total com desconto
                                    printf("\n\n\ valor com desconto por ser a pagamento a vista eh: %.2f \n\n\ ",mvalor_total11);
                                    break;

                                case 2:
                                    printf("\n\n\ valor total sem desconto: %.2f \n\n\ ",mvalor_total11);
                                    break;

                                default:
                                    printf("\n\n\ opcao de pagamento invalida \n\n\ ");
                                }

                            else
                            {
                                if (quantidade_de_convidados>50&&quantidade_de_convidados<=100 && publico_festa==1 && tipo_de_festa_total==2)
                                    switch (forma_de_pagamento)
                                    {
                                    case 1:
                                        mvalor_total12=mvalor_total12-desconto_a_vista/100*mvalor_total12; //Fiz uso de operação aritmética simples para calcular o valor total com desconto
                                        printf("\n\n\ valor com desconto por ser a pagamento a vista eh: %.2f\n\n\ ",mvalor_total12);
                                        break;

                                    case 2:
                                        printf("\n\n\ valor total sem desconto: %.2f \n\n\ ",mvalor_total12);
                                        break;

                                    default:
                                        printf("\n\n\ opcao de pagamento invalida \n\n\ ");
                                    }
                                else
                                {
                                    if (quantidade_de_convidados>100&&quantidade_de_convidados<=500 && publico_festa==1 && tipo_de_festa_total==3)
                                        switch (forma_de_pagamento)
                                        {
                                        case 1:
                                            mvalor_total13=mvalor_total13-desconto_a_vista/100*mvalor_total13; //Fiz uso de operação aritmética simples para calcular o valor total com desconto
                                            printf("\n\n\ valor com desconto por ser a pagamento a vista eh: %.2f \n\n\ ",mvalor_total12);
                                            break;

                                        case 2:
                                            printf("\n\n\ valor total sem desconto: %.2f \n\n\ ",mvalor_total13);
                                            break;

                                        default:
                                            printf("\n\n\ opcao de pagamento invalida \n\n\ ");
                                        }
                                    else
                                    {
                                        if (quantidade_de_convidados>100&&quantidade_de_convidados<=500 && publico_festa==2 && tipo_de_festa_total==1)
                                            switch (forma_de_pagamento)
                                            {
                                            case 1:
                                                mvalor_total21=mvalor_total21-desconto_a_vista/100*mvalor_total21; //Fiz uso de operação aritmética simples para calcular o valor total com desconto
                                                printf("\n\n\ valor com desconto por ser a pagamento a vista eh: %.2f \n\n\ ",mvalor_total21);
                                                break;

                                            case 2:
                                                printf("\n\n\ valor total sem desconto: %.2f \n\n\ ",mvalor_total21);
                                                break;

                                            default:
                                                printf("\n\n\ opcao de pagamento invalida \n\n\ ");
                                            }
                                        else
                                        {
                                            if (quantidade_de_convidados>100&&quantidade_de_convidados<=500 && publico_festa==2 && tipo_de_festa_total==2)
                                                switch (forma_de_pagamento)
                                                {
                                                case 1:
                                                    mvalor_total22=mvalor_total22-desconto_a_vista/100*mvalor_total22; //Fiz uso de operação aritmética simples para calcular o valor total com desconto
                                                    printf("\n\n\ valor com desconto por ser a pagamento a vista eh: %.2f \n\n\ ",mvalor_total22);
                                                    break;

                                                case 2:
                                                    printf("\n\n\ valor total sem desconto: %.2f \n\n\ ",mvalor_total22);
                                                    break;

                                                default:
                                                    printf("\n\n\ opcao de pagamento invalida \n\n\ ");
                                                }
                                            else
                                            {
                                                if (quantidade_de_convidados>100&&quantidade_de_convidados<=500 && publico_festa==2 && tipo_de_festa_total==3)
                                                    switch (forma_de_pagamento)
                                                    {
                                                    case 1:
                                                        mvalor_total23=mvalor_total23-desconto_a_vista/100*mvalor_total23; //Fiz uso de operação aritmética simples para calcular o valor total com desconto
                                                        printf("\n\n\ valor com desconto por ser a pagamento a vista eh: %.2f \n\n\ ",mvalor_total23);
                                                        break;

                                                    case 2:
                                                        printf("\n\n\ valor total sem desconto: %.2f \n\n\ ",mvalor_total23);
                                                        break;

                                                    default:
                                                        printf("\n\n\ opcao de pagamento invalida \n\n\ ");
                                                    }
                                                else
                                                {
                                                    if (quantidade_de_convidados>100&&quantidade_de_convidados<=500 && publico_festa==1 && tipo_de_festa_total==1)
                                                        switch (forma_de_pagamento)
                                                        {
                                                        case 1:
                                                            gvalor_total11=gvalor_total11-desconto_a_vista/100*gvalor_total11; //Fiz uso de operação aritmética simples para calcular o valor total com desconto
                                                            printf("\n\n\ valor com desconto por ser a pagamento a vista eh: %.2f \n\n\ ",gvalor_total11);
                                                            break;

                                                        case 2:
                                                            printf("\n\n\ valor total sem desconto: %.2f \n\n\ ",gvalor_total11);
                                                            break;

                                                        default:
                                                            printf("\n\n\ opcao de pagamento invalida \n\n\ ");
                                                        }
                                                    else
                                                    {
                                                        if (quantidade_de_convidados>100&&quantidade_de_convidados<=500 && publico_festa==1 && tipo_de_festa_total==2)
                                                            switch (forma_de_pagamento)
                                                            {
                                                            case 1:
                                                                gvalor_total12=gvalor_total12-desconto_a_vista/100*gvalor_total12; //Fiz uso de operação aritmética simples para calcular o valor total com desconto
                                                                printf("\n\n\ valor com desconto por ser a pagamento a vista eh: %.2f \n\n\ ",gvalor_total12);
                                                                break;

                                                            case 2:
                                                                printf("\n\n\ valor total sem desconto: %.2f \n\n\ ",gvalor_total12);
                                                            break;

                                                            default:
                                                                printf("\n\n\ opcao de pagamento invalida \n\n\ ");
                                                            }
                                                        else
                                                        {
                                                            if (quantidade_de_convidados>100&&quantidade_de_convidados<=500 && publico_festa==1 && tipo_de_festa_total==3)
                                                                switch (forma_de_pagamento)
                                                                {
                                                                case 1:
                                                                    gvalor_total13=gvalor_total13-desconto_a_vista/100*gvalor_total13; //Fiz uso de operação aritmética simples para calcular o valor total com desconto
                                                                    printf("\n\n\ valor com desconto por ser a pagamento a vista eh: %.2f \n\n\ ",gvalor_total13);
                                                                    break;

                                                                case 2:
                                                                    printf("\n\n\ valor total sem desconto: %.2f \n\n\ ",gvalor_total13);
                                                                    break;

                                                                default:
                                                                    printf("\n\n\ opcao de pagamento invalida \n\n\ ");
                                                                }
                                                            else
                                                            {
                                                                if (quantidade_de_convidados>100&&quantidade_de_convidados<=500 && publico_festa==2 && tipo_de_festa_total==1)
                                                                    switch (forma_de_pagamento)
                                                                    {
                                                                    case 1:
                                                                        gvalor_total21=gvalor_total21-desconto_a_vista/100*gvalor_total21; //Fiz uso de operação aritmética simples para calcular o valor total com desconto
                                                                        printf("\n\n\ valor com desconto por ser a pagamento a vista eh: %.2f \n\n\ ",gvalor_total21);
                                                                        break;

                                                                    case 2:
                                                                        printf("\n\n\ valor total sem desconto: %.2f \n\n\ ",gvalor_total21);
                                                                        break;

                                                                    default:
                                                                        printf("\n\n\ opcao de pagamento invalida \n\n\ ");
                                                                    }
                                                                else
                                                                {
                                                                    if (quantidade_de_convidados>100&&quantidade_de_convidados<=500 && publico_festa==2 && tipo_de_festa_total==2)
                                                                        switch (forma_de_pagamento)
                                                                        {
                                                                        case 1:
                                                                            gvalor_total22=gvalor_total22-desconto_a_vista/100*gvalor_total22; //Fiz uso de operação aritmética simples para calcular o valor total com desconto
                                                                            printf("\n\n\ valor com desconto por ser a pagamento a vista eh: %.2f \n\n\ ",gvalor_total22);
                                                                            break;

                                                                        case 2:
                                                                            printf("\n\n\ valor total sem desconto: %.2f \n\n\ ",gvalor_total22);
                                                                            break;

                                                                        default:
                                                                            printf("\n\n\ opcao de pagamento invalida \n\n\ ");
                                                                        }
                                                                    else
                                                                    {
                                                                        if (quantidade_de_convidados>100&&quantidade_de_convidados<=500 && publico_festa==2 && tipo_de_festa_total==3)
                                                                            switch (forma_de_pagamento)
                                                                            {
                                                                            case 1:
                                                                                gvalor_total23=gvalor_total23-desconto_a_vista/100*gvalor_total23; //Fiz uso de operação aritmética simples para calcular o valor total com desconto
                                                                                printf("\n\n\ valor com desconto por ser a pagamento a vista eh: %.2f \n\n\ ",gvalor_total23);
                                                                                break;

                                                                            case 2:
                                                                                printf("\n\n\ valor total sem desconto: %.2f \n\n\ ",gvalor_total23);
                                                                                break;

                                                                            default:
                                                                                printf("\n\n\ opcao de pagamento invalida \n\n\ ");
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                        }
                                                    }

                                                }

                                            }

                                        }


                                    }

                                }

                            }

                        }

                    }


                }


            }

        }

    }
    printf("Gostaria de concorrer ao sorteio em tempo real e receber uma atracao GRATUITA para sua comemoracao? se sim digite 1 se não digite 2\n\n");//Para "entreterimento" e fazer algo diferente criei um sorteio
    scanf("%d",&contratar);
    if(contratar=1)
        srand(time(NULL)); //com a biblioteca time.h pude usar o srand para aparecer um numero aleatório no qual eu usei para fazer o srteio fantasia
    printf("Valor sorteado: %d",rand()%80); //Aqui usei o 80 para limitar a quantidade de numeros possiveis de serem sorteados

    if(rand>=50 && rand<=60) //usando o if para criar a estrutura operacional e operadores lógicos determinei de antemão os "requisitos" para um nuemero ser considerado sorteado
        printf("\n\nSeu numero esta entre os sorteados, atracoes correspondentes a esse valor: %s \n",atracao);
    else
    {
        if(rand>=26 && rand<=34)
            printf("\n\nSeu numero esta entre os sorteados, atracoes correspondentes a esse valor: %s ",atracao1);
        else
        {
            if(rand>=36 && rand<=40)
                printf("\n\nSeu numero esta entre os sorteados, atracoes correspondentes a esse valor: %s ",atracao2);
            else
            {
                printf("\n\nSeu numero nao esta entre os sorteados");
            }
        }
    }
    return 0;
}
