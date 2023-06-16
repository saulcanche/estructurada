/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 14 de junio 2023
Descripcion:
Ejemplo 18: programa que invoca a la función:
a)sumar dos enteros o b) multiplicar dos
enteros y añadimos la opcion salir al menu. Con funciones procedimentales*/
#include <stdio.h>
#include <locale.h>
void suma();
void producto(){
    int n1, n2, prod;
    /* Entradas */
    printf("Dame el primer número entero "); scanf("%i", &n1);
    printf("Dame el segundo número entero "); scanf("%i", &n2); 
    /* Proceso*/
    prod = n1 * n2;
    /* Salidas*/
    printf("La multiplicación es: %i\n", prod);
    return 0;
}
int main(){
    setlocale(LC_CTYPE, "Spanish");
    int opc;
    printf("¿Qué deseas hacer?\n");
    printf("1. Suma de dos numeros\n");
    printf("2. Producto de dos numeros\n");
    printf("3. Salir\n");
    /* Entradas*/
    scanf("%i", &opc);
    /* Proceso */
    if (opc == 1)
    {
        suma();
        main();
    } else if (opc==2)
    {
        producto();
        main();
    } else if (opc==3)
    {   return 0;
        
    } else{
        printf("ingrese una opcion valida \n");
        main();
    } 
    return 0;
}
void suma(){
    int n1, n2, suma;
    /* Entrada*/
    printf("Dame el primer número entero "); scanf("%i", &n1);
    printf("Dame el segundo número entero "); scanf("%i", &n2);
    /* Proceso*/
    suma = n1 + n2;
    /* Salida*/
    printf("La suma es: %i\n", suma);
    return 0;
}
