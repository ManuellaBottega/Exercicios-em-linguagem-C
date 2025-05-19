#include <stdio.h>
#include <stdlib.h>

/*
Lista 1
Autor: Manuella Bottega
Data: 24/03/24
*/

int main()
{
    //Elabore um programa que escreva as mensagens “Início do programa” e “Fim” na tela, uma em cada linha, usando apenas um comando printf().

    printf("Inicio do programa\n");
    printf("Fim\n");

    //Escreva um programa que leia um número inteiro e depois o imprima.

    int numero;

    printf("digite numero:\n");
    scanf("%d", &numero);

    printf("%d", numero);

    //Escreva um programa que leia um número inteiro e depois imprima a mensagem “Valor lido:”, seguido do valor inteiro. Use apenas um comando printf().

    int numero;

    printf("digite numero:\n");
    scanf("%d", &nun);

    printf("Valor lido: %d", nun);

    //Faça um programa que leia um número inteiro e depois o imprima usando o operador “%f”. Veja o que aconteceu.

    int numero;

    printf("digite numero:\n");
    scanf("%d", &numero);

    printf("%f", numero);

    //Faça um programa que leia um valor do tipo float e depois o imprima usando o operador “%d”. Veja o que aconteceu.

    float numero;

    printf("digite numero:\n");
    scanf("%f", &numero);

    printf("%d", numero);

    //Faça um programa que leia um valor do tipo double e depois o imprima na forma de notação científica.

    double numero;

    printf("digite numero:\n");
    scanf("%f", &numero);

    printf("%e", numero);

    //Elabore um programa que leia um caractere e depois o imprima como um valor inteiro.

    char caractere;

    printf("digite um caractere:\n");
    scanf(" %c", &caractere);

    printf("%d", caractere);

    //Faça um programa que leia dois números inteiros e depois os imprima na ordem inversa em que eles foram lidos.

    int numero1, numero2;

    printf("digite 2 numeros:\n");
    scanf("%d", &numero1);
    scanf("%d", &numero2);

    printf("%d", numero2);
    printf("%d", numero1);

   //Faça um programa que leia dois valores do tipo float. Use um único comando de leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que eles foram lidos.

    float numero1, numero2;

    printf("digite 2 numeros:\n");
    scanf("%f %f", &numero1, &numero2);

    printf("%2.f %2.f", numero2, numero1);

    //Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano (inteiros). Em seguida, imprima os valores lidos separados por uma barra (\).

    int dia, mes, ano;

    printf("digite a data:\n");
    scanf("%d", &dia);
    scanf("%d", &mes);
    scanf("%d", &ano);

    printf("%d/%d/%d", dia, mes, ano);

    //Elabore um programa que contenha uma constante qualquer do tipo float. Use o comando #define. Imprima essa constante.

    float a = 10.0;

    #define FLUTUANTE 11.0f
    printf("novo valor de a: %f", a);

    //Elabore um programa que contenha uma constante qualquer do tipo int. Use o comando const. Imprima essa constante.

    const int a=3;

    printf("%d", a);

    //Faça um programa que leia um caractere do tipo char e depois o imprima entre aspas duplas. Assim, se o caractere lido for a letra A, deverá ser impresso “A”.

    char a;

    printf("\"%c\"", a);

    //Faça um programa que leia três caracteres do tipo char e depois os imprima um em cada linha. Use um único comando printf() para isso.

    char a, b, c;
    
    printf("digite 3 letras");
    scanf("%c%c%c", &a, &b, &c);

    printf("%c/n%c/n%c", a, b, c);

    //Escreva um programa que leia três variáveis: char, int e float. Em seguida, imprima-as de três maneiras diferentes: separadas por espaços, por uma tabulação horizontal e uma em cada linha. Use um único comando printf() para cada operação de escrita das três variáveis.

    char x;
    int y;
    float z;

    scanf("%c%d%f", &y, &p, &o);

    printf("%c %d %f", y, p, o);
    printf("%c\%d\%f", y, p, o);
    printf("%c\n%d\n%f", y, p, o);

    return 0;
}