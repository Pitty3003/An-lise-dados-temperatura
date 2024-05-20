#include<stdio.h>

float v0,v1, v2, v3, v4, v5;
int mes, v6, v7;
float jan, fev, mar, abr, mai, jun, jul, ago, set, out, nov, dez;
int qnd_jan, qnd_fev, qnd_mar, qnd_abr, qnd_mai, qnd_jun, qnd_jul, qnd_ago, qnd_set, qnd_out, qnd_nov, qnd_dez;
float temp_jan, temp_fev, temp_mar, temp_abr, temp_mai, temp_jun, temp_jul, temp_ago, temp_set, temp_out, temp_nov, temp_dez;

    
    

int main()
{
    qnd_jan = 0;
    qnd_fev = 0;
    qnd_mar = 0;
    qnd_abr = 0;
    qnd_mai = 0;
    qnd_jun = 0;
    qnd_jul = 0;
    qnd_ago = 0; 
    qnd_set = 0;
    qnd_out = 0;
    qnd_nov = 0;
    qnd_dez = 0;

    temp_jan = 0.0;
    temp_fev = 0.0;
    temp_mar = 0.0;
    temp_jun = 0.0;
    temp_jul = 0.0;
    temp_ago = 0.0;
    temp_set = 0.0;
    temp_out = 0.0;
    temp_nov = 0.0;
    temp_dez = 0.0;

    char linha[1000];

    FILE *arq ;

    arq = fopen ("dados.txt.txt", "r");
    if(arq==NULL) {
        printf("arquivo nao aberto\n");
        return 0;
    }

    //fseek (arq, 77, SEEK_SET);
    fgets(linha, 1000, arq);
    fgets(linha, 1000, arq);
    fgets(linha, 1000, arq);

    while(1)
    {

    if(fscanf (arq, "%f %f %f %f %f %f %d %d %d", &v0, &v1, &v2, &v3, &v4, &v5, &mes, &v6, &v7)!= 9)
    {
    break;
    }

    switch(mes)
    {
        case 1:
        qnd_jan++;
        temp_jan += v0;
        jan = temp_jan/qnd_jan;
        break;


        case 2:
        qnd_fev++;
        temp_fev = temp_fev + v0;
        fev = temp_fev/qnd_fev;
        break;


        case 3:
        qnd_mar++;
        temp_mar = temp_mar + v0;
        mar = temp_mar/qnd_mar;
        break;


        case 4:
        qnd_abr++;
        temp_abr = temp_abr + v0;
        abr = temp_abr/qnd_abr;
        break;


        case 5:
        qnd_mai++;
        temp_mai = temp_mai + v0;
        mai = temp_mai/qnd_mai;
        break;


        case 6:
        qnd_jun++;
        temp_jun = temp_jun + v0;
        jun = temp_jun/qnd_jun;
        break;


        case 7:
        qnd_jul++;
        temp_jul = temp_jul + v0;
        jul = temp_jul/qnd_jul;
        break;


        case 8:
        qnd_ago++;
        temp_ago = temp_ago + v0;
        ago = temp_ago/qnd_ago;
        break;


        case 9:
        qnd_set++;
        temp_set = temp_set + v0;
        set = temp_set/qnd_set;
        break;


        case 10:
        qnd_out++;
        temp_out = temp_out + v0;
        out = temp_out/qnd_out;
        break;


        case 11:
        qnd_nov++;
        temp_nov = temp_nov + v0;
        nov = temp_nov/qnd_nov;
        break;


        case 12:
        qnd_dez++;
        temp_dez = temp_dez + v0;
        dez = temp_dez/qnd_dez;
        break;
    }
    
    }

    printf("A media do mes de janeiro foi %f \n", jan);
    printf("A media do mes de fevereiro foi %f \n", fev);
    printf("A media do mes de marco foi %f \n", mar);
    printf("A media do mes de abril foi %f \n", abr);
    printf("A media do mes de maio foi %f \n", mai);
    printf("A media do mes de junho foi %f \n", jun);
    printf("A media do mes de julho foi %f \n", jul);
    printf("A media do mes de agosto foi %f \n", ago);
    printf("A media do mes de setembro foi %f \n", set);
    printf("A media do mes de outubro foi %f \n", out);
    printf("A media do mes de novembro foi %f \n", nov);
    printf("AA media do mes de dezembro foi %f \n", dez);


    fclose (arq);

}    