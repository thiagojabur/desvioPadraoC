#include <iostream>
#include <math.h>

int main()
{
    int notas[10], maior=0, menor;
    float media=0, soma1=0, desvioPadrao=0;
    printf("Escola Jabur - Verificacao de notas!\n");
    for (int i=0; i<=9; i++) {
        printf("Digite a nota %i: ", i);
        scanf("%d", &notas[i]);
        while (notas[i] < 0 || notas[i] > 10 ) {
            printf("Numero invalido. \nDigite a nota %i: ", i);
            scanf("%d", &notas[i]);
        }
        if (i == 0) menor = notas[i];
        if (notas[i] > maior)
            maior = notas[i];
        if (notas[i] < menor)
            menor = notas[i];
        media += notas[i];
    }
    media = media/10;
    printf("Menor numero: %i \nMaior numero: %i \n", menor, maior);
    printf("Media: %.1f\n", media);
    for (int i=0; i<=9; i++)
        soma1 += pow(notas[i]-media,2);
    desvioPadrao = sqrt(soma1/10);
    printf("Desvio padrao: %.1f", desvioPadrao);
    //verificando repetitions
    for (int i=0; i<=9; i++) {
        for (int j=i+1; j<=9; j++)
            if (notas[i]== notas[j])
               printf("Repetido %i posicoes %i, %i \n", notas[i], i, j);
    }


    return 0;
}
