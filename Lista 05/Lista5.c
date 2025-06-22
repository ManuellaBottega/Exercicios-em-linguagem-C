#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*
    Lista 5
    Autor: Manuella Bottega
    Data: 14/04/25
    */

    // Exercício 1 – Média

    int a, b, c, numero;
    float g, p, h, r;

    printf("Digite 3 numeros:\n");
    scanf("%d %d %d", &a, &b, &c);

    printf("Escolha o tipo de media: 1-Geometrica 2-Ponderada 3-Harmonica 4-Aritmetica: \n");
    scanf("%d", &numero);

    switch (numero) {
        case 1:
            g = cbrt(a * b * c);
            printf("A media e: %f\n", g);
            break;
        case 2:
            p = (a + 2 * b + 3 * c) / 6;
            printf("A media e: %f\n", p);
            break;
        case 3:
            h = 1 / ((1.0 / a) + (1.0 / b) + (1.0 / c));
            printf("A media e: %f\n", h);
            break;
        case 4:
            r = (a + b + c) / 3.0;
            printf("A media e: %f\n", r);
            break;
    }

    // Exercício 2 

    int num;
    printf("Digite um numero de 1 a 7: \n");
    scanf("%d", &num);

    switch (num) {
        case 1: printf("Segunda\n"); break;
        case 2: printf("Terca\n"); break;
        case 3: printf("Quarta\n"); break;
        case 4: printf("Quinta\n"); break;
        case 5: printf("Sexta\n"); break;
        case 6: printf("Sabado\n"); break;
        case 7: printf("Domingo\n"); break;
    }

    // Exercício 3 

    int operacao, x, y, resultado;
    printf("Escolha um tipo de operacao: 1-soma, 2-subtracao, 3-multiplicacao, 4-divisao: \n");
    scanf("%d", &operacao);

    printf("Escolha 2 numeros: \n");
    scanf("%d %d", &x, &y);

    switch (operacao) {
        case 1:
            resultado = x + y;
            printf("O resultado e %d\n", resultado);
            break;
        case 2:
            resultado = x - y;
            printf("O resultado e %d\n", resultado);
            break;
        case 3:
            resultado = x * y;
            printf("O resultado e %d\n", resultado);
            break;
        case 4:
            resultado = x / y;
            printf("O resultado e %d\n", resultado);
            break;
    }

    // Exercício 4

    int estado, preco;
    float imposto, novo;

    printf("Digite o valor do produto:\n");
    scanf("%d", &preco);

    printf("Digite o estado para envio: 1-MG, 2-SP, 3-RJ, 4-MS: \n");
    scanf("%d", &estado);

    switch (estado) {
        case 1:
            imposto = 0.07 * preco;
            novo = imposto + preco;
            printf("O valor acrescido do imposto e: %f\n", novo);
            break;
        case 2:
            imposto = 0.12 * preco;
            novo = imposto + preco;
            printf("O valor acrescido do imposto e: %f\n", novo);
            break;
        case 3:
            imposto = 0.15 * preco;
            novo = imposto + preco;
            printf("O valor acrescido do imposto e: %f\n", novo);
            break;
        case 4:
            imposto = 0.08 * preco;
            novo = imposto + preco;
            printf("O valor acrescido do imposto e: %f\n", novo);
            break;
        default:
            printf("Erro!!\n");
    }

    // Exercício 5
   
    int number;
    printf("Digite um numero de 1 a 12: \n");
    scanf("%d", &number);

    switch (number) {
        case 1:  printf("Janeiro\n");    break;
        case 2:  printf("Fevereiro\n");  break;
        case 3:  printf("Marco\n");      break;
        case 4:  printf("Abril\n");      break;
        case 5:  printf("Maio\n");       break;
        case 6:  printf("Junho\n");      break;
        case 7:  printf("Julho\n");      break;
        case 8:  printf("Agosto\n");     break;
        case 9:  printf("Setembro\n");   break;
        case 10: printf("Outubro\n");    break;
        case 11: printf("Novembro\n");   break;
        case 12: printf("Dezembro\n");   break;
    }

    return 0;
}
