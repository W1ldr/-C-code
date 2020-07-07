/*
Wildr007
menu with loop and int return...
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

    if (opc > 6) //altere a condição dependendo da ultima opção...
        goto c;

    if (opc != 0)
        return opc;
}
