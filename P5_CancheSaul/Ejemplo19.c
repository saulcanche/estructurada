/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 14 de junio 2023
Descripcion:
Determina: programa que invoca ciertas funciones para a) hipotenusa de un triángulo rectángulo,
b) el área y c) el tercer ángulo de un triángulo */
#include <stdio.h>
#include <locale.h>
#include <math.h>
void hipotenusa(){
    int co, ca;
    float h;
    /* Entradas */
    printf("Escribe la longitud del cateto adyacente al angulo: "); scanf("%i", &ca);
    printf("Escribe la longitud del cateto opuesto al angulo: "); scanf("%i", &co);
    /* Proceso*/
    h = sqrt(co*co + ca*ca);
    /* Salidas*/
    printf("la hipotenusa del triangulo mide: %f", h);
}
void area(){
    int base, alt; float a;
    /* Entradas*/
    printf("Ingrese la base"); scanf("%i", &base);
    printf("Ingrese la altura"); scanf("%i", &alt);
    /* Proceso*/
    a = base * alt /2.0;
    /* Salidas*/
    printf("El area del triangulo es: %f", a);
}
void angulo(){
    float a1, a2, a3;
    /* entrada*/
    printf("Ingrese el valor del angulo 1"); scanf("%f", &a1);
    printf("Ingrese el valor del angulo 2"); scanf("%f", &a2);
    /* Proceso*/
    a3 = 180 - (a1+a2);
    /* Salidas*/
    printf("El tercer angulo mide: %f", a3);
}

int main(){
    setlocale(LC_ALL, "es_ES");
    char opc;
    printf("A) Hipotenusa de un triangulo rectangulo\n");
    printf("B Área de un triángulo\n)");
    printf("C) Tercer angulo de un triángulo \n");
    printf("E) Salir");
    /* Entrada*/
    printf("Escoja una opción\n"); scanf("%c", &opc);
    switch (opc)
    /* Proceso y salida*/
    {
    case 'A':
        hipotenusa();
        main();
        break;
    case 'B':
        hipotenusa();
        main();
        break;
    case 'C':
        area();
        main();
        break;
    case 'E':
        return 0;
        break;
    default:
        printf("usted ingreso una opción invalida\n");
        main();
        break;
    }
}
