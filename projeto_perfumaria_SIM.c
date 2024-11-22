#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <time.h>
#define max 15


int main()
{
 setlocale(LC_ALL, "Portuguese");
    int i,opcao, tipo, setor, estrati[max], aleatorio[max], numero[1000], j;
    int passoInt;
    char ja_consta, chopcao;
    float populacao,margem, n ,nsist, no, cont, cont1, porcentamostra, passo, proporcao, passoFloat;
    srand(time(0));


                system("cls");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n                   ______________________________________________________________________");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                              ' BEM VINDO '                           |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                        ' SISTEMA DE AMOSTRAGEM '                     |");
                printf("\n                  |                        '   FATEC - AMERICANA   '                     |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                             _______________                          |");
                printf("\n                  |                            |               |                         |");
                printf("\n                  |                            | PRESS - ENTER |                         |");
                printf("\n                  |                            |_______________|                         |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |______________________________________________________________________|");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n");
                system("pause");
                system("cls");





 do
    {
                system("cls");
                printf("\n");
                printf("\n");
                printf("\n                   ______________________________________________________________________");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                    *** Qual o tamanho população? ***                 |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                    _______________     _______________               |");
                printf("\n                  |                   |               |   |               |              |");
                printf("\n                  |                   |    FINITA     |   |   INFINITA    |              |");
                printf("\n                  |                   |   PRESS - [1] |   |  PRESS - [2]  |              |");
                printf("\n                  |                   |_______________|   |_______________|              |");
                printf("\n                  |                                                                      |");
                printf("\n                  |______________________________________________________________________|");
                printf("\n                  |                 |                                    |   |           |");
                printf("\n                  |                 |    Por favor, selecione uma opção: |   |     ");
                scanf("%i",&opcao);
                printf("                  |_________________|____________________________________|___|___________|");
                printf("\n");
                printf("\n");
                fflush(stdin);
                system("pause");
                system("cls");


        switch (opcao)
        {
        case 1:
                system("cls");
                printf("\n");
                printf("\n");

                printf("\n                   ______________________________________________________________________");
                printf("\n                  |                 |                                    |   |           |");
                printf("\n                  |                 |    Qual o tamanho da população?    |   |      ");
                scanf("%f", &populacao);
                printf("                  |_________________|____________________________________|___|___________|");
                printf("\n");
                printf("\n");
                printf("\n                   ______________________________________________________________________");
                printf("\n                  |                 |                                    |   |           |");
                printf("\n                  |                 |    Qual a margem de erro?          |   |      ");
                scanf("%f", &margem);
                printf("                  |_________________|____________________________________|___|___________|");
                printf("\n");


            no = 1 / pow((margem/100),2); //remover o + 1
            n = (populacao * no)/(populacao + no);

                printf("\n");
                printf("\n                   ______________________________________________________________________");
                printf("\n                  |                 |                                    |   |           |");
                printf("\n                  |                 |    O numero de amostras é:         |   |     %.0f    |", n);
                printf("\n                  |_________________|____________________________________|___|___________|");
                printf("\n");
                printf("\n");
                system("pause");
                system("cls");

                system("cls");
                printf("\n");
                printf("\n");
                printf("\n                   ______________________________________________________________________");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                    *** Qual o tipo de amostragem? ***                |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |        _______________   _______________    _______________          |");
                printf("\n                  |       |               | |               |  |               |         |");
                printf("\n                  |       |   ALEATÓRIA   | | ESTRATIFICADA |  |  SISTEMÁTICA  |         |");
                printf("\n                  |       |   PRESS - [1] | |  PRESS - [2]  |  |  PRESS - [3]  |         |");
                printf("\n                  |       |_______________| |_______________|  |_______________|         |");
                printf("\n                  |                                                                      |");
                printf("\n                  |______________________________________________________________________|");
                printf("\n                  |                 |                                        |   |       |");
                printf("\n                  |                 | Qual o tipo de amostragem você deseja? |   |   ");
                scanf("\n%d",&tipo);
                printf("                  |_________________|________________________________________|___|_______|");
                printf("\n");
                printf("\n");
                fflush(stdin);
                system("pause");
                system("cls");
            int populacao1 = populacao;


                // imprime numeros aleatórios, mas as vezes algum número se repete
                //for(i=0; i<n; i++){
                  //  printf(" %d", rand() % populacao1 + 1);
            if (tipo == 1){
                system("cls");
                printf("\n");
                printf("\n");
                printf("\n                   ______________________________________________________________________");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |               *** ------AMOSTRAGEM ALEATÓRIA------ ***               |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");

                printf("\n");
                for (i=0; i<n; i++) {
                    numero[i] = rand() % populacao1 + 1;
                    ja_consta = 'N';
                    for (j=0; j<i && ja_consta == 'N'; j++) {
                        if (numero[i] == numero[j]){
                            ja_consta = 'S';
                        }
                    }
                    if (ja_consta == 'S'){
                        i--;
                    }
                }
                printf("                   ______________________________________________________________________\n");
                for (i=0; i<n; i++){

                printf("                  |                                  %d                                  |\n", numero[i]);

                }
                printf("                  |______________________________________________________________________|\n");
            }

                printf("\n");
                printf("\n");
                fflush(stdin);
                system("pause");
                system("cls");


            if (tipo == 2){
                proporcao = n / populacao;
                system("cls");
                printf("\n");
                printf("\n");
                printf("\n                   ______________________________________________________________________");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |             *** ------AMOSTRAGEM ESTRATIFICADA------ ***             |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |______________________________________________________________________|");
                printf("\n                  |                                                                      | \n");
                printf("                  |                     A proporção é: %.4f                            |\n", proporcao);
                printf("                  |______________________________________________________________________|\n");

                printf("\n");
                printf("\n");
                fflush(stdin);
                system("pause");
                system("cls");

                system("cls");
                printf("\n");
                printf("\n");
                printf("\n                   ______________________________________________________________________");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |             *** ------AMOSTRAGEM ESTRATIFICADA------ ***             |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |______________________________________________________________________|");
                printf("\n                  |                 |                                        |   |       |");
                printf("\n                  |                 |  Quantos setores irá ter?              |   |   ");
                scanf("%d", &setor);
                printf("                  |_________________|________________________________________|___|_______|");
                printf("\n");
                for (i=1; i<=setor; i++){
                    printf("\n                  |______________________________________________________________________|");
                    printf("\n                  |                 |                                        |   |       |");
                    printf("\n                  |                 |  Qual o valor do setor %d?              |   |   ", i);
                    scanf("%d", &estrati[i]);
                    printf("                  |_________________|________________________________________|___|_______|");
                }
                printf("\n");
                printf("\n");

                    printf("                   ______________________________________________________________________\n");
                for (i=1; i<=setor; i++){


                    printf("                  |                    O resultado do setor %d é %.0f                        |\n", i, (estrati[i] * proporcao));

                }
                    printf("                  |______________________________________________________________________|\n");
            }

            if (tipo == 3){
                system("cls");
                printf("\n");
                printf("\n");
                printf("\n                   ______________________________________________________________________");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |               *** ------AMOSTRAGEM SISTEMÁTICA------ ***             |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |______________________________________________________________________|");


                printf("\n");
                printf("\n");
                printf("\n                   ______________________________________________________________________");
                printf("\n                  |              |                                                 |     |");
                printf("\n                  |              | Deseja retirar uma amostra de quantos porcento? |  ");
                scanf("%f", &porcentamostra);
                printf("                  |______________|_________________________________________________|_____|");
                printf("\n");

                nsist = (populacao * porcentamostra) / 100;

                cont = (rand()% 9) + 1;
                passo = populacao / nsist;
                passoInt = passo;
                passoFloat = passoInt;
                printf("\n                  |______________________________________________________________________|");
                printf("\n                  |                     O passo é:   %.0f                                   |\n", passoFloat);
                printf("                  |______________________________________________________________________|\n");


                    printf("                   ______________________________________________________________________\n");
                for(i=0; i < nsist ; i++){

                    printf("                  |                                  %.0f                                   |\n", cont);

                    cont += passoFloat;
                    if(cont>populacao1){
                        cont1 = cont-populacao1;
                        cont = cont1;
                    }
                }
                    printf("                  |______________________________________________________________________|\n");
            }


            printf("\n");
            system("pause");
            break;

        case 2:
                system("cls");
                printf("\n             _____________________________________________________________________");
                printf("\n            |                                                                     |");
                printf("\n            |               *** -------POPULAÇÃO INFINITA------- ***              |");
                printf("\n            |_____________________________________________________________________|");


                printf("\n    ____________________________________________________________________________________");
                printf("\n   |                                                                                    |");
                printf("\n   | Para os testes com população infinita, a unica amostragem possível é a aleatória!! |");
                printf("\n   |____________________________________________________________________________________|");


                printf("\n    _____________________________________");
                printf("\n   |                            |        |");
                printf("\n   |   Qual a margem de erro?   |    ");
                scanf("%f", &margem);
                printf("\n   |____________________________|________|");

            no = 1 / pow((margem/100),2);
            int no2 = no;

                printf("\n    ____________________________________");
                printf("\n   |                                    |");
                printf("\n   |     O erro amostral é: %d", no2);
                printf("\n   |____________________________________|");

                printf("\n    ______________________________________________________________________");
                printf("\n   |                                                                      |");
                printf("\n   |                                                                      |");
                printf("\n   |               *** ------AMOSTRAGEM ALEATÓRIA------ ***               |");
                printf("\n   |                                                                      |");
                printf("\n   |______________________________________________________________________|\n\n");

            for (i=0; i<no2; i++) {
                numero[i] = rand() % no2 + 1;
                ja_consta = 'N';
                for (j=0; j<i && ja_consta == 'N'; j++) {
                    if (numero[i] == numero[j]){
                        ja_consta = 'S';
                    }
                }
                if (ja_consta == 'S'){
                    i--;
                }
            }
                printf("   |                                                                      |\n");
                for (i=0; i<no2; i++){
                printf("   |                                  %d                                   |\n", numero[i]);
            }
                printf("   |______________________________________________________________________|\n");

            printf("\n");
            system("pause");
            break;

        default:
                system("cls");
                printf("\n   _________________________ ");
                printf("\n  |                         |");
                printf("\n  |     Opção Inválida!     |");
                printf("\n  |_________________________|\n\n");


            system("pause");

        }

    }
    while (opcao <= 2);

    return 0;
}
