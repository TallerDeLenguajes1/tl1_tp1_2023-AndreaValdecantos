#include <stdio.h>

int cuadradoDeUnNumero(int numero);
void cuadradoNumeroVoid(int numero);
void direccionContenidoVariable(int numero);
void invertir(int a, int b);
void orden(int a, int b);

int main()
{
     int numero = 3;
     int a = 70;
     int b = 50;

     printf("Cuadrado del numero con la primera funcion: %d\n", cuadradoDeUnNumero(numero));
     cuadradoNumeroVoid(numero);
     direccionContenidoVariable(numero);
     invertir(a, b);
     orden(a, b);

     return 0;
}

int cuadradoDeUnNumero(int numero){
     int cuadrado;
     cuadrado = numero * numero;
     return cuadrado;
}

void cuadradoNumeroVoid(int numero){
     int cuadrado;
     cuadrado = numero * numero;
     printf("Cuadrado del numero con la funcion void: %d\n", cuadrado);
}

void direccionContenidoVariable(int numero){
     printf("Contenido de la variable: %d\n", numero);
     printf("Direccion de la variable: %p\n", &numero);
}

void invertir(int a, int b){
     int aux;
     aux = a;
     a = b;
     b = aux;

     printf("Valor de a: %d\nValor de b: %d\n", a, b);
}

void orden(int a, int b){
     int aux = a;
     if (a > b){
          a = b;
          b = aux;
     }
     printf("Valor mas chico: %d\nValor mas grande: %d\n", a, b);
}