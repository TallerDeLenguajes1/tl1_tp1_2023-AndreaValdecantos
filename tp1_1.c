#include <stdio.h>

int main(){

     printf("Hola mundo\n\n");

     int numero = 10;
     int *punteroAnumero = &numero;

     /*dirección de memoria almacenada por el puntero*/
     printf("Direccion de memoria almacenada por el puntero: %p\n", punteroAnumero);
     /*dirección de memoria de la variable*/
     printf("Direccion de memoria de la variable: %p\n", &numero);
     /*dirección de memoria del puntero*/
     printf("Direccion de memoria del puntero: %p\n", &punteroAnumero);
     /*tamaño de memoria utilizado por la variable usando sizeof*/
     printf("Tamano de memoria utilizado por la variable: %d\n", sizeof(numero));
     /*contenido del puntero*/
     printf("Contenido del puntero: %d\n", *punteroAnumero);


     return 0;
}