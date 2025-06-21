#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Lista 6
Autor: Manuella Bottega
Data: 28/4/25
*/

int main()
{
    // Exercício 1

    int numero = 0;
    while (numero <= 50) {
        printf("%d,", numero);
        numero++;
    }

    // Exercício 2

    int num = 1;

    while (num <= 100) {
        printf("%d,", num);
        num++;
    }

    // Exercício 3

    int number = 100;

    while (number >= 1) {
        printf("%d,", number);
        number--;
    }

    // Exercício 4

    int numero = 100;

    while (numero <= 200) {
        printf("%d,", n);
        numero++;
    }

    // Exercício 5

    int numero = 200;

    while (numero >= 100) {
        printf("%d,", i);
        numero--;
    }

    // Exercício 6

    int numero = 1;

    while (numero <= 500) {
        if (numero % 5 == 0) {
            printf("%d,", numero);
        }
        numero++;
    }

    // Exercício 7

    int numero = 1;

    while (numero <= 100) {
        if (numero % 2 == 0) {
            printf("%d,", numero);
        }
        numero++;
    }

    // Exercício 8

    int number = 1, cont = 0;

    while (cont < 100) {
        printf("%d,", number);
        number += 2;
        cont++;
    }

    // Exercício 9

    int number = 1, quadrado;

    while (number <= 20) {
        quadrado = number * number;
        printf("%d,", quadrado);
        number++;
    }

    // Exercício 10

    int number = 1;

    while (number <= 100) {
        if (number % 2 != 0) {
            printf("%d,", number);
        }
        number++;
    }

    // Exercício 11

    int cont = 0;
    float metade, number;

    while (cont < 10) {
        printf("Digite 1 numero: \n");
        scanf("%f", &number);
        metade = number / 2;
        printf("%f\n", metade);
        cont++;
    }

    // Exercício 12

    int contador = 0, number, resultado;

    while (contador < 10) {
        printf("Digite 1 numero\n");
        scanf("%d", &b);
        resultado = number * number;
        printf("%d\n", resultado);
        contador++;
    }

    // Exercício 13

    int contador = 0;
    float number, result;

    while (contador < 15) {
        printf("Digite 1 numero: \n");
        scanf("%f", &number);
        result = sqrt(number);
        printf("%f\n", result);
        contador++;
    }

    // Exercício 14

    int cont = 0;
    float numero, logaritimo;

    while (cont < 8) {
        printf("Digite 1 numero:\n");
        scanf("%f", &numero);
        logaritimo = log10(numero);
        printf("%f\n", logaritimo);
        cont++;
    }

    // Exercício 15

    int number = 1, soma = 0;

    while (number <= 100) {
        printf("%d\n", number);
        soma += number;
        number++;
    }
    printf("%d\n", soma);

    // Exercício 16

    int numero = 1, sum = 0, quadrado;

    while (numero <= 100) {
        printf("%d,", numero);
        quadrado = numero * numero;
        sum += quadrado;
        numero++;
    }
    printf("\n%d", sum);

    // Exercício 17

    int number = 1;
    float sum = 0, meio;
    while (number <= 100) {
        printf("%d,", number);
        meio = number / 2.0;
        sum += meio;
        number++;
    }
    printf("\n%f", sum);

    // Exercício 18

    int number = 1, sum = 0, cubo;
    while (number <= 100) {
        printf("%d,", number);
        cubo = number * number * number;
        sum += cubo;
        number++;
    }
    printf("\n%d", sum);

    // Exercício 19
 
    int num = 1, sum = 0;
    float media;

    while (num <= 100) {
        printf("%d,", num);
        sum += num;
        num++;
    }
    media = sum / 100.0;
    printf("\n%f", media);

    // Exercício 20

    int numero, maior, menor, contador = 0;

    while (contador < 10) {
        printf("Digite um numero: \n");
        scanf("%d", &numero);
        if (numero > maior) maior = numero;
        if (numero < menor) menor = numero;
        contador++;
    }
    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);

    // Exercício 21

    int number, maior, antemaior, cont = 0;

    maio = number;
    antemaior = number;

    while (cont_ < 10) {
        printf("Digite um numero: \n");
        scanf("%d", &number);

        if (number > maio) {
            antemaior = maior;
            maior = number;
        } else if (number > antemaior && number < maior) {
            antemaior = number;
        }
        cont++;
    }
    printf("Maior numero: %d\n", maior);
    printf("Segundo maior numero: %d\n", antemaior);

    // Exercício 22

    int inferior, superior, intervalo, soma = 0;

    printf("Digite o limite inferior: \n");
    scanf("%d", &inferior);
    printf("Digite o limite superior: \n");
    scanf("%d", &superior);

    intervalo = inferior + 1;

    while (intervalo < superior) {
        if (intervalo % 2 == 0) {
            printf("%d ", intervalo);
            soma += intervalo;
        }
        intervalo++;
    }

    printf("\n%d\n", soma);

    // Exercício 23

    int numero, contador = 1;
    printf("Digite um numero: \n");
    scanf("%d", &numero);

    while (contador <= numero) {
        if (contador % 3 == 0 && contador % 5 == 0) {
            printf("%d,", contador);
        }
        contador++;
    }

    // Exercício 24

    int numero, contador = 0, pares = 0, impares = 0;

    while (contador < 6) {
    printf("Digite um numero\n");
        scanf("%d", &numero);
        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
        contador++;
    }
    printf("\nTotal de pares: %d\n", pares);
    printf("Total de impares: %d\n", impares);

    // Exercício 25

    int numero, contador = 0, maiorq = 0;

    while (ntcoador < 15) {
        printf("Digite um numero\n");
        scanf("%d", &numero);
        if (numero > 30) {
            maiorq++;
        }
        contador++;
    }

    printf("\nmaiores que 30: %d\n", maiorq);

    // Exercício 26

    int numero, cont = 0, somaP = 0, total = 0;

    while (cont < 20) {
        printf("Digite um numero\n");
        scanf("%d", &numero);
        if (numero >= 0) {
            somaP += numero;
        } else {
            total++;
        }
        cont++;
    }
    printf("\nSoma positivos: %d\n", somaP);
    printf("Quantidade negativos: %d\n", total);

    return 0;
}