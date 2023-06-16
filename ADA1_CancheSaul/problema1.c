/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 7 de junio 2023
Descripcion:
1. E.P. que lea un número real con varios dígitos decimales y que lo
imprima varias veces en pantalla, en líneas diferentes, con distintas
formatos de salida, en dígitos decimales. Ejemplo: 4., 4.0, 4.01, 4.013,
4.0137.*/
#include <stdio.h>
#include <string.h>
#include <locale.h>

float valor;
int main(){
    setlocale(LC_ALL, "es_ES");
    printf("Ingrese un numero \n"); 
    /*Entrada */
    scanf("%f", &valor); 
    /* Proceso y salida*/
    printf("usted ingreso %.0f \n", valor); // Por cada 
    printf("usted ingreso %.1f\n", valor); //numero despues del punto
    printf("usted ingreso %.2f\n", valor); //es el numero de desimales
    printf("usted ingreso %.3f\n", valor); // de precision
    printf("usted ingreso %.4f\n", valor);
    printf("usted ingreso %.5f\n", valor);
    printf("usted ingreso %f\n", valor);
   }
