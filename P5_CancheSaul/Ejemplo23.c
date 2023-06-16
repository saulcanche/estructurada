/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 14 de junio 2023
Descripcion:
E.P. que lea 10 números (N) y que determine e imprima los que
sean mayores a 100. Utilizar While-Do.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
//prototipos de funcion
void hipotenusa(float a, float b, float* h);
void leer(float*a, float*b);

int main(){
    setlocale(LC_ALL, "es_ES"); //declaramos el idioma español
    float a, b, h; //declaracion de variables
    /* Entradas */
    leer(&a,&b); // llamamos la funcion para leer lados
    /* Proceso */
    hipotenusa(a,b, &h); // llamamos funcion para calcular la hipotenusa y guardarlo en h
    /*Salida*/
    printf("la hipotenusa es %f\n", h); //imprimir hipotenusa
    return 0;
}
/* Proceso*/
void hipotenusa(float a, float b, float*h){
    *h=sqrt(pow(a,2)+pow(b,2)); //calculo de hipotenua
    return;
}
/* Entradas*/
void leer(float*a, float* b){
    printf("Dame valor a: "); scanf("%f", a);
    printf("Dame valor b: "); scanf("%f", b);
    return;
}
