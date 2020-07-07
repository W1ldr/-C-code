/*
  Programa: Um menu para personalizar 
  Autor: Wilder Ribeiro *wildr
  Descricao: Um menu com loop que retorna um int 
  Data: 7, jun, 2020

*/
#include <stdio.h>
#include <stdlib.h>

int menu();

int main()
{
    menu();
    /*testint num = menu();
    printf("%i\n", num);*/
    return 0;
}

int menu()
{
    int opc = 0, aux = 0;
c:
    do
    {
        printf("[1]-Opção...\n[2]-Opção...\n[3]-Opção...\n"); //add as opçoes...
        printf("[6]-Sair\n");
        scanf("%i", &opc);
    } while (aux == opc);
    // verificar caso seja inserido um numero maior que o [] sair.
    if (opc > 6) //altere a condição dependendo da ultima opção...
        goto c;

    return opc;
}
