#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Lista 11
Autor: Manuella Bottega
Data: 17/06/25
*/

int main()
{
    //Exercicio 1

    char texto[100];
    int i;

    printf("Digite uma frase ou palavra: ");
    fgets(texto, sizeof(texto), stdin);

    texto[strcspn(texto, "\n")] = '\0';

    int tamanho = strlen(texto);

    printf("O que foi digitado ao contrario: ");

    for (i = tamanho - 1; i >= 0; i--) {
        printf("%c", texto[i]);
    }

    //Exercicio 2

    char texto[100];
    int i, tamanho;
    char temp;

    printf("Digite uma frase ou palavra: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0';

    tamanho = strlen(texto);

    for (i = 0; i < tamanho / 2; i++) {
        temp = texto[i];
        texto[i] = texto[tamanho - 1 - i];
        texto[tamanho - 1 - i] = temp;
    }

    printf("String invertida: %s\n", texto);

    //Exercicio 3

    char texto[100];
    char novo_caractere;
    int i, vogais = 0;

    printf("Digite uma palavra ou frase: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0';

    printf("Digite um caractere para substituir as vogais: ");
    scanf(" %c", &novo_caractere);

    for (i = 0; texto[i] != '\0'; i++) {
        char c = texto[i];

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {

            texto[i] = novo_caractere;
            vogais++;
        }
    }

    printf("Resultado: %s\n", texto);
    printf("Numero de vogais substituidas: %d\n", vogais);

    //Exercicio 4

    char texto[100];
    int i, tamanho, e_palindromo = 1;

    printf("Digite uma palavra: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0';

    tamanho = strlen(texto);

    for (i = 0; i < tamanho / 2; i++) {
        if (texto[i] != texto[tamanho - 1 - i]) {
            e_palindromo = 0;
            break;
        }
    }

    if (e_palindromo) {
        printf("e um palindromo\n");
    } else {
        printf("Nao e um palindromo\n");
    }

    //Exercicio 5

    char str1[100], str2[100];

    printf("Digite a frase ou palavra principal: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Digite a frase ou palavra que deseja procurar: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    if (strstr(str1, str2) != NULL) {
        printf("A segunda string esta contida na primeira\n");
    } else {
        printf("A segunda string nao esta contida na primeira\n");
    }

    //Exercicio 6

    char str1[200], str2[100];
    int contador = 0;
    char *ptr;

    printf("Digite a frase principal: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Digite a palavra que deseja contar: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    ptr = str1;

    while ((ptr = strstr(ptr, str2)) != NULL) {
        contador++;
        ptr += strlen(str2);
    }

    printf("A segunda string aparece %d vezes na primeira\n", contador);

    //Exercicio 7


    char texto[100];
    int i;

    printf("Digite uma frase ou  palavra: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0';

    for (i = 0; texto[i] != '\0'; i++) {
        if (texto[i] >= 'a' && texto[i] <= 'z') {
            texto[i] = texto[i] - 32;
        }
    }

    printf("em maiusculas: %s\n", texto);

    //Exercicio 8

    char texto[100];
    int i;

    printf("Digite uma frase ou palavra: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0';

    for (i = 0; texto[i] != '\0'; i++) {
        if (texto[i] >= 'A' && texto[i] <= 'Z') {
            texto[i] = texto[i] + 32;
        }
    }

    printf("em minusculas: %s\n", texto);

    //Exercicio 9

    char nome[100];
    float valor_total, desconto, valor_final;

    printf("Digite o nome da mercadoria: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite o valor da mercadoria: R$ ");
    scanf("%f", &valor_total);

    desconto = valor_total * 0.10;
    valor_final = valor_total - desconto;

    printf("\n--- RESUMO ---\n");
    printf("Mercadoria: %s\n", nome);
    printf("Valor total: R$ %.2f\n", valor_total);
    printf("Desconto (10%%): R$ %.2f\n", desconto);
    printf("Valor a pagar a vista: R$ %.2f\n", valor_final);

    //Exercicio 10

    char S[100];
    int i, j;

    printf("Digite uma palavra ou frase: ");
    fgets(S, sizeof(S), stdin);
    S[strcspn(S, "\n")] = '\0';

    printf("Digite um numero inteiro (i): ");
    scanf("%d", &i);
    printf("Digite um numero inteiro (j): ");
    scanf("%d", &j);

    printf("Segmento da frase de i ate j: ");
    for (int k = i; k <= j && S[k] != '\0'; k++) {
        printf("%c", S[k]);
    }

    printf("\n");

    //EXercicio 11

    char texto[200];
    int i;

    printf("Digite a frase ou palavra a ser criptografada: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0';

    for (i = 0; texto[i] != '\0'; i++) {
        char c = texto[i];

        if (c >= 'a' && c <= 'z') {
            c = ((c - 'a' + 3) % 26) + 'a';
        }
        else if (c >= 'A' && c <= 'Z') {
            c = ((c - 'A' + 3) % 26) + 'A';
        }

        texto[i] = c;
    }

    printf("codificada: %s\n", texto);

    //Exercicio 12
    
    char str1[100], str2[100];

    printf("Digite a primeira frase ou palavra: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Digite a segunda frase ou palavra: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    if (strcmp(str1, str2) < 0) {
        printf("Ordem alfabetica:\n%s\n%s\n", str1, str2);
    } else {
        printf("Ordem alfabetica:\n%s\n%s\n", str2, str1);
    }

    return 0;
}