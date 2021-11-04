#include <stdio.h>
#include <stdlib.h>

int main()
{
int valor_consulta;
int valor_dia;
int qtdConsultasDia;
int consulta;
int qtdConsultas;
int mesAtual;
int dia;
int totalMes;

FILE *arquivo = fopen("arquivo.txt", "w");


for (mesAtual = 0; mesAtual < 12; mesAtual++ )
{

    if(mesAtual == 1){

        for (dia = 1; dia < 2; dia++)
        {
            printf("dia atual: %i \n", dia);

            printf("Informe a quantidade de consultas no dia:");
            scanf("%i", &qtdConsultasDia);

            for (qtdConsultas = 0; qtdConsultas < qtdConsultasDia; qtdConsultas++ )
            {
                printf("Mes atual: %i \n" , mesAtual );
                printf("Qtd Consultas do dia: %i \n" , qtdConsultasDia );
                printf("Consulta atual: %i \n" , qtdConsultas );
                printf("Informe o valor da consulta:");

                scanf("%i", &valor_consulta);
                valor_dia += valor_consulta;

                fprintf(arquivo, "%i\n", valor_dia);
            }

            /*
                Total da soma dos dias = valor_dia
                Total do mes corrente
            */


            totalMes = valor_dia;
            valor_dia = 0;

            printf("Total dia: %i \n", valor_dia);
        }

    }


    

    if(mesAtual == 0 || mesAtual == 2 || mesAtual == 4 || mesAtual == 6 || mesAtual == 7 || mesAtual == 9 || mesAtual == 11){

        for (dia = 1; dia < 3; dia++)
        {

            printf("Informe a quantidade de consultas no dia:");
            scanf("%i", &qtdConsultasDia);

            for (qtdConsultas = 0; qtdConsultas < qtdConsultasDia; qtdConsultas++ )
            {
                printf("%i \n" , mesAtual );
                printf("%i \n" , qtdConsultasDia );
                printf("%i \n" , qtdConsultas );
                printf("Informe o valor da consulta:");
                scanf("%i", &valor_consulta);
                valor_dia += valor_consulta;

                fprintf(arquivo, "%i\n", valor_dia);


            }

            printf("Total dia: %i \n", valor_dia);
        }
    }

    for (dia = 1; dia < 2; dia++)
    {
        printf("Informe a quantidade de consultas no dia:");
        scanf("%i", &qtdConsultasDia);

        for (qtdConsultas = 0; qtdConsultas < qtdConsultasDia; qtdConsultas++ )
        {
            printf("%i \n" , mesAtual );
            printf("%i \n" , qtdConsultasDia );
            printf("%i \n" , qtdConsultas );
            printf("Informe o valor da consulta:");
            scanf("%i", &valor_consulta);
            valor_dia += valor_consulta;

            fprintf(arquivo, "%i\n", valor_dia);
        }

        printf("Total dia: %i \n", valor_dia);
    }
}
}
