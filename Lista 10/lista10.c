#include <stdio.h>
#include <stdlib.h>

/*
Lista 10
Autor: Manuella Bottega
Data: 04/06/25
*/

int main()
{
    //Exercicio 1

    int matriz [3][3], i, j, menor;

    printf("digite 9 numeros inteiros para uma matriz 3x3: \n");
    for (i = 0; i < 3; i ++) {
        for (j = 0; j < 3; j ++) {
            printf("numero [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    menor = matriz[0][0];

    for (i = 0; i < 3; i ++) {
        for (j = 0; j < 3; j ++) {
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }

    printf("O menor valor na matriz e: %d\n", menor);

    //Exercicio 2

    int matriz [4][4], i, j, maior, mi, mj;

    printf("digite 16 numeros inteiros para uma matriz 4x4: \n");
    for (i = 0; i < 4; i ++) {
        for (j = 0; j < 4; j ++) {
            printf("numero [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    maior = matriz [0][0];
    mj = 0;
    mi = 0;

    for (i = 0; i < 4; i ++) {
        for (j = 0; j < 4; j ++) {
            if (matriz[i][j] > maior) {
                    maior = matriz[i][j];
                    mi = i;
                    mj = j;
            }
        }
    }
        printf("o maior valor: %d, esta na posicao [%d][%d]\n", maior, mi, mj);

    //Exercicio 3

    int matriz [5][5], i, j;

    for (i = 0; i < 5; i ++){
        for (j = 0; j < 5; j ++) {
            if (i == j) {
                matriz [i][j] = 1;
            }
            else {
                matriz [i][j] = 0;
            }
        }
    }

    printf("matriz obtida: \n");

    for (i = 0; i < 5; i ++){
        for (j = 0; j < 5; j ++) {
                printf("%d", matriz[i][j]);
        }
            printf("\n");
    }

    //Exercicio 4

    int matriz [4][4], i, j, maior10 = 0;

    printf("digite 16 numeros inteiros para uma matriz 4x4: \n");
    for (i = 0; i < 4; i ++) {
        for (j = 0; j < 4; j ++) {
            printf("numero [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 4; i ++) {
        for (j = 0; j < 4; j ++) {
            if (matriz[i][j] > 10) {
                    maior10 ++;
            }
        }
    }

    printf("quantidade de numeros maiores que 10 na matriz: %d ", maior10);

    //Exercicio 5

    int matriz [4][4], i, j, negativos = 0;

    printf("digite 16 numeros inteiros para uma matriz 4x4: \n");
    for (i = 0; i < 4; i ++) {
        for (j = 0; j < 4; j ++) {
            printf("numero [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 4; i ++) {
        for (j = 0; j < 4; j ++) {
            if (matriz[i][j] < 0) {
                    negativos ++;
            }
        }
    }

    printf("quantidade de numeros negativos na matriz: %d ", negativos);

    //Exercicio 6

    int matriz [3][3], i, j, soma = 0;

    printf("digite 9 numeros inteiros para uma matriz 3x3: \n");
    for (i = 0; i < 3; i ++) {
        for (j = 0; j < 3; j ++) {
            printf("numero [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i ++) {
        for (j = 0; j < 3; j ++) {
            if (i == j) {
                    soma += matriz [i][j];
            }
        }
    }

    printf("a soma dos valores da diagonal principal da matriz e: %d ", soma);

    //Exercicio 7

    int matriz [3][3], i, j, soma = 0;

    printf("digite 9 numeros inteiros para uma matriz 3x3: \n");
    for (i = 0; i < 3; i ++) {
        for (j = 0; j < 3; j ++) {
            printf("numero [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i ++) {
        for (j = 0; j < 3; j ++) {
            if (j == 2 - i) {
                    soma += matriz [i][j];
            }
        }
    }

    printf("a soma dos valores da diagonal secundaria da matriz e: %d ", soma);

    //Exercicio 8

    int matriz [10][10], i, j;

    for (i = 0; i < 10; i ++){
        for (j = 0; j < 10; j ++) {
            if (i == j) {
                matriz [i][j] = (3*i)*(3*i) - 1;
            }
            if (i < j) {
                matriz [i][j] = 2*i + 7*j - 2;
            }
            if (i > j){
                matriz [i][j]= (4*i)*(4*i)*(4*i) + (5*j)*(5*j) + 1;
            }
        }
    }

    printf("matriz obtida: \n");

    for (i = 0; i < 10; i ++){
        for (j = 0; j < 10; j ++) {
                printf("%d  ", matriz[i][j]);
        }
            printf("\n");
    }

    return 0;
}