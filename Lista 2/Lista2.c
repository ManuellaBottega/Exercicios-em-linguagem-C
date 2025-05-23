#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*
Lista 2
Autor: Manuella Bottega
Data: 26/03/24
*/

int main()
{

    /* Exercicio 1 */
  
    printf("A\nB\nC\n");
    printf("A\tB\tC\n");
    printf("A\nB\rC\n");
    printf("AB\b\bC\n");
    printf(".\n.1\n..2\n...3\n");
    printf("Comandos DOS residem no C:\\DOS\n");
    printf("\"Fique alerta!\", gritou o veterano.\n");
  
    /* Exercicio 2 */    
  
    printf ("Este e o capitulo %d\n ", 3);
    printf ("%d + %d = %d\n ", 3, 4, 3+4);
    printf ("%d = %i\n", 3, 3);
  
    /* Exercicio 3 */
   
    printf ("O valor %f e um numero em ponto flutuante", 3.3);
   
    /* Exercicio 4 */    
    
    printf ("%f + %f = %f\n", 3.3, 4.4, 3.3 + 4.4);
    printf ("%e + %e = %e", 8.2e+002,3.36e+005,8.2e+002+3.36e+005);
    printf ("%d %o %x", 10, 8, 15);
    
    /* Exercicio 5 */
    
    printf ("%2d alunos\n", 350);
    printf ("%4d alunos\n", 350);
    printf ("%5d alunos\n", 350);
    printf ("%f %f\n", 535.45, 73745.66);
    printf ("%16f %16f\n", 535.45, 73745.66);
    printf (" %3.1f \n", 3456.78);
    printf (" %10.3f \n", 3456.78);
    printf ("%6.2f %8.4f\n", 12.3456, 12.3456);
    
    /* Exercício 6*/
    
    int idade;
    idade = 30;

    printf (" mínima idade é : %d", idade);
    
    int x;
    float y;
    x = 3;
    y = 3 * 4.5;

    printf (" %d * 4.5 = %f", x, y);
    
    bool a;
    char b;
    unsigned char c;
    short int x;
    unsigned short x1;
    int z;
    unsigned int z1;
    long z2;
    unsigned long z3;
    float r;
    double r1;
    a = 1;
    b = 'i';
    c = 'I';
    x = 32767;
    x1 = 65535;
    z = 2147483647;
    z1 = 4294967295;
    z2 = 2147483647;
    z3 = 4294967295;
    r = 2147483647;
    r1 = 1.7e+308;
    
    printf ("bool -> %d ", a);
    printf ("\n\nchar -> %c - %d", b,b);
    printf ("\n\nunsigned char -> %c - %d ", c,c);
    printf ("\n\nshort -> %d ", x);
    printf ("\n\nunsigned short -> %d ", x1);
    printf ("\n\nint -> %d ", z);
    printf ("\n\nunsigned int -> %u ", z1);
    printf ("\n\nlong -> %d ", z2);
    printf ("\n\nunsigned long -> %u ", z3);
    printf ("\n\nfloat -> %f ", r);
    printf ("\n\ndouble -> %e ", r1);
    getch();
   
    return 0;
}