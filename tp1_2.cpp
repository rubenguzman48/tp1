#include<stdio.h>

int cuadrado(int a);
void Cuad(int a);
void direc(int b);
void invert(int a, int b);
void ordenar(int a, int b);

int main()
{
    int a, c, b;
    a = 4;
    b=20;

    c = cuadrado(a);
   
    printf("a)- Cuadrado de %d es: %d",a ,c);

    Cuad(a);
    direc(b);
    invert(a, b);
    ordenar(a, b);

    return 0;
}
int cuadrado(int a)
{
    return (a*a);
}

void Cuad(int a)
{
    int resul;
    resul = a*a;
    printf("\nb)- (Funcion void)Cuadrado de %d es: %d",a ,resul);
}
void direc(int b)
{
    printf("\nc)- Esto es direccion de memoria de b: %d",&b);
    printf("\nEsto es b: %d", b);
}

void invert(int a, int b)
{
    int aux;
    aux = a;
    a = b;
    b = aux;
    printf("\nd)- Esto es a cambiado: %d", a);
    printf("\nEsto es b cambiado: %d", b);
}

void ordenar(int a, int b)
{
    int mayor, menor, aux;
    if(a>b)
    {
        int aux;
        aux = a;
        a = b;
        b = aux;
        printf("\ne)- Esto es a: %d", a);
        printf("\nEsto es b: %d", b);

    }else
    {
        printf("\ne)-Esto es a: %d", a);
        printf("\nEsto es b: %d", b);
    }
}