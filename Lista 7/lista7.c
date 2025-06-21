#include <studio.h>
#include <stdlib.h>
#include <string.h>

/*
Lista 7
Autor: Manuella Bottega
Data: 12/05/2025
*/

int main()
{

   //Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.

   int contador = 0, soma = 0;

   do {
    contador += 2;
    soma += contador;
   } while (contador < 100);

   printf("a soma dos 50 primeiros numeros pares e igual a: %d", soma);

    //Faca um programa que mostre uma contagem regressiva na tela, iniciando em 10 e terminando em 0. Mostre uma mensagem “FIM!” após a contagem.

    int numero = 11, contador = 0;

    printf("contagem regressiva:\n");

    do {
        numero --;
        printf("%d\n", numero);
        contador ++;
    } while (contador < 10);

    printf("FIM!");

    //Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores desse número, com exceção dele próprio.

   int numero, divisor = 0, soma = 0;

   printf("digite um numero inteiro: ");
   scanf("%d", &numero);

   do {
        divisor++;
        if (numero % divisor == 0)
            soma += divisor;
   } while (divisor < numero - 1);

   printf("a soma dos divisores do numero digitado e: %d", soma);

    //Escreva um programa que leia um número inteiro positivo N e em seguida imprima N linhas do chamado triângulo de Floyd.

    int N, contador = 0, horizontal = 1;

    printf("digite um numero inteiro positivo: ");
    scanf("%d", &N);

    if(N>0){

        printf("o triangulo de Floyd do numero digitado e:\n");

    do {
        int vertical = 1;

        do {
            contador ++;
            printf("%d ", contador);
            vertical ++;
        } while (vertical <= horizontal);

        printf("\n");
        horizontal ++;

    } while(horizontal <= N);
        }

    else{
        printf("esse numero nao e positivo");
    }

    //Faça um programa que leia um conjunto de pedidos e calcule o total da compra. O pedido possui os seguintes campos: número, data (dia, mês e ano), preço unitário e quantidade. A entrada de pedidos é encerrada quando o usuário informa zero como número do pedido.

    int numero, dia, mes, ano, quantidade;
    float preco, total=0, pedido=0;

    do {
        printf("\ndigite o numero do pedido ou 0 para encerrar: ");
        scanf("%d", &numero);

        if(numero == 0){
            break;
        }

        printf("digite a data do pedido: ");
        scanf("%d %d %d", &dia, &mes,&ano);

        printf("digite preco unitario do pedido: ");
        scanf("%f", &preco);

        printf("digite a quantidade do pedido: ");
        scanf("%d", &quantidade);

        pedido = preco * quantidade;
        total += pedido;

        printf("\nitem %d: preco %2.f; data: %d/%d/%d; quantidade: %d; valor total: %2.f\n", numero, preco, dia, mes, ano, quantidade, pedido);

        } while (1);

        printf("\n\ntotal da compra: %2.f", total);

        //Elabore um programa que receba a idade, peso, sexo e o estado civil de várias pessoas e imprima a quantidade de pessoas casadas, solteiras, separadas e viúvas. Apresente a média de idade e de peso. O algoritmo finaliza quando for informado o valor zero para idade.

        int idade, sexo, estadoCivil, casadas, solteiras = 0, viuvas = 0, separadas = 0, pessoas = 0;
        float peso, mediaPeso = 0, mediaIdade = 0, somaPeso = 0, somaIdade = 0;

        do {
            printf("Digite a idade ou 0 para encerrar: ");
            scanf("%d", &idade);

            if (idade == 0){

                mediaPeso = somaPeso/pessoas;
                mediaIdade = somaIdade/pessoas;

                break;
            }

            else {
                somaIdade += idade;

                printf("Digite o peso: ");
                scanf("%f", &peso);

                somaPeso += peso;

                printf("Digite o sexo (1 - Masculino, 2 - Feminino, 3 - Nao informar): ");
                scanf("%d", &sexo);

                printf("Digite o estado civil (1 - Solteiro, 2 - Casado, 3 - Separado, 4 - Viuvo): ");
                scanf("%d", &estadoCivil);

                if (estadoCivil == 1) {
                    solteiras += 1;
                    }
                if (estadoCivil == 2) {
                    casadas += 1;
                    }
                if (estadoCivil == 3) {
                    separadas += 1;
                    }
                if (estadoCivil == 4) {
                    viuvas += 1;
                    }
            }
        pessoas ++;
        } while (1);

        printf("\nA quantidade de pessoas casadas e: %d\n", casadas);
        printf("A quantidade de pessoas solteiras e: %d\n", solteiras);
        printf("A quantidade de pessoas separadas e: %d\n", separadas);
        printf("A quantidade de pessoas viuvas e: %d\n", viuvas);

        printf("A media do peso das pessoas e: %2.f\n", mediaPeso);

        printf("A media da idade das pessoas e: %2.f\n", mediaIdade);

        //Construa um programa que possibilite calcular a área total de uma residência (sala, cozinha, banheiro, quartos etc.). O programa deve solicitar a entrada do nome, a largura e o comprimento de um determinado cômodo até que o nome do cômodo seja “FIM”. O programa deve apresentar o valor total acumulado da área residencial.

        float comprimento, largura, area = 0, areaTotal = 0;
        char comodos[30];

        do {
            printf("\nDigite o nome do comodo ou FIM para encerar: ");
            fgets(comodos, sizeof(comodos), stdin);

            comodos[strcspn(comodos, "\n")] = '\0';

            if (strcmp(comodos, "FIM") == 0) {
                break;
            }
            else {
                printf("Digite o comprimento do comodo: ");
                scanf("%f", &comprimento);
                while (getchar() != '\n');

                printf("Digite a largura do comodo: ");
                scanf("%f", &largura);
                while (getchar() != '\n');

                area = comprimento * largura;
                areaTotal += area;
            }
        } while (1);

        printf("A area residencial total e: %2.f", areaTotal);

    return 0;
}
