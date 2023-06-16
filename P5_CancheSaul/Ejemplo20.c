/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 14 de junio 2023
Descripcion:
Ejemplo 18: programa que invoca a la función:
a)sumar dos enteros o b) multiplicar dos
enteros y añadimos la opcion salir al menu. Con funciones 
con paso a parametros por valor*/
#include <stdio.h>
#include <locale.h>
/* Procesos*/
int suma(int n1, int n2){
    int s;
    s = n1 + n2;
    return s;
}
int producto(int n1, int n2){
    int p;
    p = n1 * n2;
    return (p);
}
int main(){
    setlocale(LC_ALL, "es_ES");
    int opc, n1, n2, s, p;
    printf("¿Qué deseas hacer?\n");
    printf("1. Suma de dos numeros\n");
    printf("2. Producto de dos numeros\n");
    printf("3. Salir\n");
    /* Entradas y salidas*/
    scanf("%i", &opc);
    if (opc == 1)
    {
        printf("Dame el primer número entero "); scanf("%i", &n1);
        printf("Dame el segundo número entero "); scanf("%i", &n2);
        s = suma(n1, n2);
        printf("la suma es: %i\n", s);
        main();
    } else if (opc==2)
    {
        printf("Dame el primer número entero "); scanf("%i", &n1);
        printf("Dame el segundo número entero "); scanf("%i", &n2);
        p = producto(n1, n2);
        printf("El producto es: %i \n", p);
        main();
    } else if (opc==3)
    {   return 0;
        
    } else{
        printf("ingrese una opcion valida \n");
        main();
    } 
    return 0;

}