#include <stdio.h>
#include <stdlib.h>

/*
Lista 9
Autor: Manuella Bottega
Data: 27/05/25
*/

int main()
{
    //Exercicio 1

    int valores [6];

    printf("Digite 6 valores inteiros: ");

    for (int i = 0; i < 6; i ++){
        scanf("%d", &valores [i]);
    }

    for (int i = 0; i < 6; i ++){
    printf("%d", valores [i]);
    }

    //Exercicio 2

    int valores [6];

    printf("Digite 6 valores inteiros: ");

    for (int i = 0; i < 6; i ++){
        scanf("%d", &valores [i]);
    }

    for (int i = 6; i >= 1; i --){
    printf("%d", valores [i]);
    }

    //Exercicio 3

    int valores [5];
    float media = 0;

    printf("Digite 5 valores inteiros: ");

    for (int i = 0; i < 5; i ++){
        scanf("%d", &valores [i]);
        media += valores [i];
    }

    for (int i = 0; i < 5; i ++) {
        printf("%d", valores [i]);
    }

    printf("a media dos valores e: %f", media / 5.0);

    //Exercicio 4

    int A[6]={1, 0, 5, -2, -5, 7}, soma;

    printf("A soma dos numeros nas posicoes 0, 1 e 5 e: ");
    soma= A[0] + A[1] + A[5];
    printf("%d\n", soma);

    A[4] = 100;

    printf("Os numeros armazenados sao:\n");
    for (int i = 0; i < 6; i ++) {
        printf("%d\n", A [i]);
    }

    //Exercicio 5

    int valores[10], i, pares = 0;

    printf("Digite 10 numeros inteiros: ");

    for (i = 0; i < 10; i ++) {
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 10; i ++) {
        if (vetor[i] % 2 == 0) {
            pares++;
        }
    }

    printf("quantidade de numeros pares: %d", pares);

    //Exercicio 6

    int X[10], i, maior = X[0], menor = X[0];

    printf("Digite 10 numeros inteiros: ");

    for (i = 0; i < 10; i ++) {
        scanf("%d", &X[i]);
    }

    for (i = 1; i < 10; i ++) {
        if (X[i] > maior) {
            maior = X[i];
        }
        if (X[i] < menor) {
            menor = X[i];
        }
    }

    printf("maior valor: %d\n", maior);
    printf("menor valor: %d", menor);

    //Exercicio 7

    float valores[10], positivos = 0;
    int i, negativos = 0;

    printf("digite 10 numeros reais: ");

    for (i = 0; i < 10; i ++) {
        scanf("%f", &valores [i]);

        if (valores[i] < 0) {
            negativos ++;
        } else {
            positivos += valores[i];
        }
    }

    printf("Quantidade de negativos: %d\n", negativos);
    printf("Soma dos positivos: %.2f", positivos);

    //Exercicio 8

    int A[10], B[10], C[10], i;

    printf("digite 10 numeros inteiros para o grupo A: ");
    for (i = 0; i < 10; i ++) {
        scanf("%d", &A [i]);
    }

    printf("digite 10 numeros inteiros para o grupo B: ");
    for (i = 0; i < 10; i ++) {
        scanf("%d", &B [i]);
    }

    for (i = 0; i < 10; i ++) {
        C[i] = A[i] - B[i];
    }

    printf("Os valores no grupo C sao: \n");
    for (i = 0; i < 10; i ++) {
        printf("%d\n", C[i]);
    }

    //Exercicio 9

    int valores[100], i = 0, numero = 0;

    while (i < 100) {
        if (numero % 7 != 0) {
            valores[i] = numero;
            i ++;
        }
        numero ++;
    }

    printf("os 100 primeiros numeros naturais que nao sao multiplos de 7 sao: \n");
    for (i = 0; i < 100; i ++) {
        printf("%d\n", valores[i]);
    }

    //Exercicio 10

    float valores[20], quadrados[20];
    int n, i;

    printf("Quantos numeros deseja inserir (maximo 20)? ");
    scanf("%d", &n);
    printf("digite %d numeros reais: ", n);

    for (i = 0; i < n; i ++) {
        scanf("%f", &valores [i]);
        quadrados[i] = valores[i] * valores[i];
    }

    for (i = 0; i < n; i ++) {
        printf("o quadrado dos numeros que digitou sao: %2.f\n", quadrados[i]);
    }
    return 0;
}