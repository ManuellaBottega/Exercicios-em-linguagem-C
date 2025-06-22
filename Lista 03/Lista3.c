#include <stdio.h>
#include <stdlib.h>

/*
Lista 3
Autor: Manuella Bottega
Data: 31/03/25
*/

int main()
{

    //Em épocas de pouco dinheiro, os comerciantes estão procurando aumentar suas vendas oferecendo desconto. Faça um Algoritmo que possa entrar com o valor de um produto e imprima o novo valor tendo em vista que o desconto foi de 9%. Além disso, imprima o valor do desconto.

    float produto, desconto;

    printf("digite o valor do produto: \n");
    scanf("%f", &produto);

    desconto = produto * 9.0 / 100;
    produto = produto - desconto;

    printf("o valor do produto com desconto e: %.2f\n", produto);
    printf("o valor do desconto foi: %.2f\n", desconto);

    //Criar um Algoritmo que efetue o cálculo do salário líquido de um professor. Os dados fornecidos serão: valor da hora aula, número de aulas dadas no mês e percentual de desconto do INSS.

    float bruto, liquido, inss, duracao, aula;

    printf("digite o numero de aulas: \n");
    scanf("%f", &aula);
    printf("digite o valor da hora aula: \n");
    scanf("%f", &duracao);
    printf("digite o desconto do INSS: \n");
    scanf("%f", &inss);

    bruto = aula * 4 * duracao;
    liquido = bruto - (bruto * inss / 100);

    printf("o valor do salario liquido e: %2.f\n", liquido);
    printf("o valor do salario bruto e: %2.f\n", bruto);

    //Escreva um Algoritmo que leia uma temperatura em gruas centígrados e apresente a temperatura convertida em graus Fahrenheit.

    float celcius, fahrenheit;

    printf("digite a temperatura em graus celcius: \n");
    scanf("%f", &celcius);

    fahrenheit = (9 * celcius + 160) / 5;

    printf("valor em fahrenheit: %f\n", fahrenheit);

    //Criar um Algoritmo para calcular e apresentar o valor do volume de uma lata de óleo
    
    float raio, altura, volume;

    printf("digite o raio: \n");
    scanf("%f", &raio);
    printf("digite a altura: \n");
    scanf("%f", &altura);

    volume = 3.14159 * raio * raio * altura;

    printf("volume da lata de oleo: %2.f\n", volume);

    //Criar um Algoritmo que leia o numerador e o denominador de uma fração e transforme esses valores em um número racional.

    float numerador, denominador, numero;

    printf("digite o numerador: \n");
    scanf("%f", &numerador);
    printf("digite o denominador: \n");
    scanf("%f", &denominador);

    numero = numerador / denominador;

    printf("o numero racional gerado e: %2.f\n", numero);

    //Todo restaurante, embora por lei não possa obrigar o cliente a pagar, cobra 10% de comissão para o garçom. Crie um Algoritmo que leia o valor gasto com despesas realizadas em um restaurante e imprima o valor da gorjeta e o valor total com a gorjeta.

    float produto, gorjeta;

    printf("digite o valor do produto: \n");
    scanf("%f", &produto);

    gorjeta = produto * 10.0 / 100;
    produto = produto + gorjeta;

    printf("o valor do produto com a gorjeta: %2.f\n", produto);
    printf("o valor da gorjeta foi: %2.f\n", gorjeta);

    //Criar um Algoritmo que leia um valor de hora (hora:minutos) e informe (calcule) o total de minutos se passaram desde o início do dia (0:00h).

    int horas, minutos, totalMinutos;

    printf("digite a hora: \n");
    scanf("%d", &horas);
    printf("digite os minutos: \n");
    scanf("%d", &minutos);

    totalMinutos = minutos +  (horas * 60);

    printf("total de minutos passados desde o inicio do dia: %d\n", totalMinutos);

    //Criar um Algoritmo que leia um valor de hora (hora:minutos) e informe (calcule) o total de segundos se passaram desde o início do dia (0:00h).

    int horas, minutos, segundos;

    printf("digite a hora: \n");
    scanf("%d", &horas);
    printf("digite os minutos: \n");
    scanf("%d", &minutos);

    segundos = (minutos * 60) + (horas *  3600);

    printf("total de segundos passados desde o inicio do dia: %d\n", segundos);

    //Criar um Algoritmo que leia o valor de um depósito e o valor da taxa de juros. Calcular e imprimir o valor do rendimento e o valor total depois do rendimento (rendimento mensal e anual).

    float deposito, mensal, anual, juros, totalMensal, totalAnual;

    printf("digite o deposito: \n");
    scanf("%f", &deposito);
    printf("digite a taxa de juros: \n");
    scanf("%f", &juros);

    mensal = (deposito * juros / 100);
    anual = (deposito * juros / 100 * 12);

    printf("rendimento mensal: %f\n", mensal);
    printf("rendimento anual: %f\n", anual);

    totalMensal = mensal + deposito;
    totalAnual = anual + deposito;

    printf("valor total apos um mes de rendimento: %2.f\n", totalMensal);
    printf("valor total apos um ano de rendimento: %2.f\n", totalAnual);

    //Para várias situações, a base de cálculo é o salário-mínimo. Fazer um Algoritmo que leia o valor do salário-mínimo e o valor do salário de uma pessoa. Calcular e imprimir quantos salários-mínimos essa pessoa ganha.
    
    float salarioMinimo, salario, quantidade;

    printf("Digite o valor do salário-mínimo: \n");
    scanf("%f", &salarioMinimo);

    printf("Digite o valor do salário da pessoa: \n");
    scanf("%f", &salario);

    quantidade = salario / salarioMinimo;

    printf("A pessoa ganha %.2f salários mínimos.\n", quantidade);

    //Criar um Algoritmo que efetue o cálculo da quantidade de litros de combustível gastos em uma viagem, sabendo-se que o carro faz 12 km com um litro. Deverão ser fornecidos o tempo gasto na viagem e a velocidade média. O Algoritmo deverá apresentar os valores da Distância percorrida e a quantidade de Litros utilizados na viagem.
    
    float distancia, velocidade, tempo, litros;

    printf("digite a velocidade do carro: \n");
    scanf("%f", &velocidade);
    printf("digite o tempo gasto em horas: \n");
    scanf("%f", &tempo);

    distancia = tempo * velocidade;
    litros = distancia / 12;

    printf("distancia percorrida: %2.f\n", distancia);
    printf("litros de combustivel gastos: %2.f\n", litros);
    
    /* Em meados dos anos 2000 houve racionamento de energia e antes disto, quase ninguém falava em quilowatts; mas, agora, todos incorporaram essa palavra em seu
vocabulário. Sabendo-se que 100 quilowatts de energia custa um sétimo do salário-mínimo, fazer um Algoritmo que receba o valor do salário-mínimo e a quantidade de 
quilowatts gasta por uma residência e calcule (imprima).
- o valor em reais de cada quilowatt;
- o valor em reais a ser pago;
- o novo valor a ser pago por essa residência com um desconto de 10%. */
    
    
    float salario, gasto, quilowatt, valor, desconto;

    printf("digite quanto vale o salario minimo: \n");
    scanf("%f", &salario);
    printf("digite quantos quilowatts a residencia gasta: \n");
    scanf("%f", &gasto);

    quilowatt = salario / 700;
    printf("um quilowatt custa: %2.f\n", quilowatt);
   
    valor = quilowatt * gasto;
    printf("o valor a ser pago pela residencia: %2.f\n", valor);
    
    desconto = valor * 0.9;
    printf("o valor a ser pago pela residencia com 10 per cento de desconto:%f\n",cdesconto);
    
    return 0;
}