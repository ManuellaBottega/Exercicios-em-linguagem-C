#include <stdio.h>
#include <stdlib.h>

/*
Lista 10
Autor: Manuella Bottega
Data: 19/5/25
*/

int main()
{

    //Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente.

    int numero, contador = 1;

    printf("digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    for (; contador <= numero; contador ++) {
        printf("%d\n", contador);
    }

    //Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente.

    int numero;

    printf("digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    for (; numero > 0; numero --) {
        printf("%d\n", numero);
    }

    //Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares.

    int numero, impares;

    printf("digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    for (impares = 0; impares < 2*numero; impares ++) {
        impares += 1;
        printf("%d\n", impares);
    }

    //Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números maiores que 0.

    int numero = 3, multiplos;

    for (multiplos = 1; multiplos <= numero*5; multiplos ++) {
        if (multiplos % numero == 0) {
            printf("%d\n", multiplos);
        }
    }

    //Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números maiores que 0.

    int numero, soma = 0;

    for (numero = 0; numero < 101; numero ++) {
        if (numero % 2 == 0) {
            soma += numero;
        }
    }
    printf("%d", soma);

    //Faça um programa que mostre uma contagem regressiva na tela, iniciando em 10 e terminando em 0. Mostre uma mensagem “FIM!” após a contagem.

    int contagem;

    for (contagem = 10; contagem >= 0; contagem --) {
        printf("%d\n", contagem);
    }

    printf("FIM! ");

    //Escreva um programa que leia um número inteiro positivo N e em seguida imprima N linhas do chamado triângulo de Floyd:

    int numero, horizontal, vertical, contador=1;

    printf("digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    for (horizontal = 1; horizontal <= numero; horizontal ++) {
        for (vertical = 1; vertical <= horizontal; vertical ++){
            printf("%d ", contador);
            contador ++;
        }
        printf("\n");
    }

    //Faça um programa que receba um número inteiro maior do que 1 e verifique se o número fornecido é primo ou não.

    int numero, divisor, primo = 1;

    printf("digite um numero inteiro maior que 1: ");
    scanf("%d", &numero);

    for (divisor = 2; divisor < numero; divisor ++) {
        if (numero % divisor == 0) {
            primo = 0;
            break;
        }
    }

    if (primo)
        printf("%d e primo\n", numero);
    else
        printf("%d nao e primo\n", numero);
   return 0;
}