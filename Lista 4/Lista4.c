#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Lista 4
Autor: Manuella Bottega
Dara: 07/04/25
*/

int main()
{
    //Exercicio 1

    int numero;

    printf("Digite um numero: \n");
    scanf("%d", &numero);

    if(numero > 20){
            printf("O numero %d e maior que 20 \n",numero);
    }

    //Exercicio 2

    int num1, num2, soma;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &num2);

    soma = num1 + num2;

    if(soma>10){
        printf("O resultado da soma e: %d\n", soma);
    }

    //Exercicio 3

    int num, divisao;

    printf("digite um numero: \n");
    scanf("%d", &num);

    if(num % 2==0){
        printf("o numero e par\n");
    } else{
    printf("o numero e impar\n");
    }

    //Exercicio 4

    int numero;

    printf("digite um numero: \n");
    scanf("%d", &nume);

    if(numero == 0){
        printf("numero e nulo\n");
    } else {
        if(numero > 0)
            printf("numero e positivo\n");
        else
            printf("numero e negativo\n");
    }

    //Exercicio 5

    int num1, num2, soma;

    printf("digite dois numeros: \n");
    scanf("%d %d", &num1, &num2);

    soma = num1 + num2;
    
    if(soma > 20){
        printf("%d\n", soma + 8);
    } else{
    if(soma <= 20)
        printf("%d\n", soma - 5);
    }

    //Exercicio 6

    float numero, x;

    printf("digite um numero: \n");
    scanf("%f", &numero);
    
    if(numero >= 0){
        x=sqrt(numero);
        printf("%f\n", x);
    } else {
        printf("%f\n", numero * numero);
    }

    //Exercicio 7

    int num1, num2;

    printf("digite dois numeros:\n");
    scanf("%d %d", &num1, &num2);
    
    if(numb1>numb2){
        printf("o maior numero e: %d\n", num1);
        printf("o menor numero e: %d\n", num2);
    } else {
        printf("o maior numero e: %d\n", num2);
        printf("o menor numero e: %d\n", num1);
    }

    //Exercicio 8

    int numerador, divisor;

    printf("digite o valor de A e B: \n");
    scanf("%d %d", &numerador, &divisor);

    if(numerador % divisor == 0){
        printf("A e divisivel por B\n");}
    else    {
        printf("A nao e divisivel por B\n");} 
    
    //Exercicio 9
    
    int A;

    printf("digite o valor de A: \n");
    scanf("%d", &A);
    
    if(A % 3 == 0){
        printf("A e multiplo 3\n");}
    else{
        printf("A nao e multiplo 3\n");} 
    
    //Exercicio 10
    
    int A;

    printf("digite o valor de A: \n");
    scanf("%d", &A2);
    
    if(A % 5 == 0){
        printf("A e divisivel por 5\n");}
    else{
        printf("A nao e divisivel por 5\n");} 
    
    // Exercício 11
    
    int A;
    printf("digite o valor de A: \n");
    scanf("%d", &A3);

    if(A % 21 == 0){
        printf("A e divisivel por 3 e 7\n");}
    else{
        printf("A nao e divisivel por 3 e 7\n");}
    
    //Exercicio 12
    
    int A;
    printf("Digite um número: \n");
    scanf("%d", &A);
    if (A % 10 == 0) {
        printf("O número é divisível por 10\n");
    }
    if (A % 5 == 0) {
        printf("O número é divisível por 5\n");
    }
    if (A % 2 == 0) {
        printf("O número é divisível por 2\n");
    } else{
        printf("O número não é divisível por 10, 5 ou 2\n");
    }
    
    //exercicio 13
    
    float salario, prestacao, limite;
    
    printf("Digite o salário bruto: \n");
    scanf("%f", &salario);
    printf("Digite o valor da prestação: \n");
    scanf("%f", &prestacao);
    
    limite = salario * 0.30;
    
    if (prestacao <= limite) {
        printf("Empréstimo pode ser concedido\n");
    } else {
        printf("Empréstimo NÃO pode ser concedido\n");
    }
    
    //exercicio 14

    int A, B, C, D, menor, maior;
    
    printf("digite quatro numeros: \n");
    scanf("%d %d %d %d", &A,&B, &C, &D);
    
    maior=A;
    menor=A;
    
    if(B>maior)
    maior=B;
    if(C>maior)
    maior=C;
    if(D>maior)
    maior=D;
    if(B<menor)
    menor=B;
    if(C<menor)
    menor=C;
    if(D<menor)
    menor=D;
    printf("o menor numero e %d\n", menor);
    printf("o maior numero e %d\n", maior);
    
    //exercicio 15
    
    int E, F, G;

    printf("digite tres numeros\n");
    scanf("%d %d %d", &E,&F, &G);

    if(E > F && F > G){
        printf("%d,%d,%d\n", G, F, E);
    } else{
        if(F > G && G > E)
            printf("%d,%d,%d\n", E, G, F);
        if(F > E && E > G)
            printf("%d,%d,%d\n", G, E, F);
        if(E > G && G > F)
            printf("%d,%d,%d\n", F, G, E);
        if(G > F && F > E)
            printf("%d,%d,%d\n", E, F, G);
        if(G > E && E > F)
            printf("%d,%d,%d\n", F, E, G);}
    
    //Exercicio 16
    
    int H, I, J;

    printf("digite tres numeros: \n");
    scanf("%d %d %d", &H,&I, &J);

    if(H > I && I > J){
        printf("%d,%d,%d\n", H, I, J);
    } else{
        if(H > J && J > I)
            printf("%d,%d,%d\n", H, J, I);
        if(J > H && H > I)
            printf("%d,%d,%d\n", J, H, I);
        if(J > I && I > H)
            printf("%d,%d,%d\n", J, I, H);
        if(I > J && J > H)
            printf("%d,%d,%d\n", I, J, H);
        if(I > H && H > J)
            printf("%d,%d,%d\n", I, H, J);}
    
    //Exercicio 17
    
    int K;

    printf("digite um numero:\n");
    scanf("%d", &K);

    if(K > 20 && K < 90){
        printf("o numero esta entre 20 e 90\n");
    } else {
        printf("o numero nao esta entre 20 e 90\n");}
    
    //Exerficio 18
    
    int O;

    printf("Digite um número: \n");
    scanf("%d", &O);

    if (O == 5) {
        printf("O numero é igual a 5\n");
    } else if (O== 200) {
        printf("O numero é igual a 200\n");
    } else if (O== 400) {
        printf("O numero é igual a 400\n");
    } else if (O>= 500 && numero <= 1000) {
        printf("O numero está no intervalo entre 500 e 1000\n");
    } else {
        printf("O numero está fora dos escopos anteriores\n");
    }

    //Exercicio 19
    
    float L, M, maior, menor;
    
    printf("digite dois numeros\n");
    scanf("%f %f", &L, &M);
    
    if(L > M){
    maior=L;
    menor=M;
    } else{
    maior = M;
    menor = L;
    }
    if(maior >= 0){
    printf("a raiz quadrada do maior numero e: %f\n", sqrt(maior));
    } else{
    printf("nao e possivel calcular a raiz quadrada do maior numero\n");
    }
    printf("o quadrado do menor numero e: %f\n", menor*menor);
    
    //exercicio 20
    
    float peso, altura, imc;

    printf("Digite o peso em quilos e sua altura em metros: \n");
    scanf("%f %f", &peso, &altura);

    imc = peso / (altura * altura);

    if (imc < 20) {
        printf("Abaixo do peso\n");
    } else if (imc >= 20 && imc <= 25) {
        printf("Peso Normal\n");
    } else if (imc > 25 && imc <= 30) {
        printf("Sobrepeso\n");
    } else if (imc > 30 && imc <= 40) {
        printf("Obeso\n");
    } else {
        printf("Obeso Mórbido\n");
    }
    
    //exercicio 21
    
    float saldo, credito, creditoJ;

    printf("Informe o saldo medio do ultimo ano\n");
    scanf("%f", &saldo);

    if (saldo >= 0 && saldo <= 500) {
        credito = 0;
    } else if (saldo <= 1000) {
        credito = saldo*0.30;
    } else if (saldo<= 3000) {
        credito = saldo*0.40;
    } else {
        credito = saldo*0.50;
    }

    creditoJ = credito + (credito * 0.02);
    
    printf("Saldo medio: %f\n", saldo);
    printf("Valor do credito: %f\n", creditoJ);
    printf("Valor do credito com 2%% de juros: %f\n", creditoJ);

    return 0;
}
    