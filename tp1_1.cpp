#include<stdio.h>

int main()
{
    int variable;
    variable = 20;
    int * puntero = &variable;
    sizeof(variable);

    printf("Esto es variable: %d",variable);
    printf("\n1)- Esto es direccion de memoria almacenada por el puntero: %d",puntero);
    printf("\n2)- Esto es direccion de memoria de variale: %d",&variable);
    printf("\n3)- Esto es direccion de memoria de puntero: %d",&puntero);
    printf("\n4)- Esto el tamanio de memoria usado por la variale: %d",sizeof(variable));
    printf("\n5)- Esto es contenido del puntero: %d",*puntero);
    printf("\n6)- Esto es direccion de memoria almacenada por el puntero: %d",puntero);
}

