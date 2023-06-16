/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 14 de junio 2023
Descripcion:
Determina: programa que invoca ciertas funciones para a) hipotenusa de un triángulo rectángulo,
b) el área y c) el tercer ángulo de un triángulo estas funciones son de paso por parametro de valor*/
#include <stdio.h>
#include <locale.h>
#include <math.h>
/* Procesos*/
float hipotenusa(int co, int ca){
    float h;
    h = sqrt(co*co + ca*ca);
    return h;
}
float area(float base, float alt){
    float a;
    a = base * alt /2.0;
    return a;
}
float angulo(float a1, float a2){
    float a3;
    a3 = 180 - (a1+a2);
    return a3;
}

int main(){
    setlocale(LC_ALL, "es_ES");
    char opc;
    int co, ca;
    float h;
    float a1, a2, a3;
    int base, alt; float a; 
    printf("A) Hipotenusa de un triangulo rectangulo\n");
    printf("B Área de un triángulo\n)");
    printf("C) Tercer angulo de un triángulo \n");
    printf("E) Salir");
    /* Entradas*/
    printf("Escoja una opción\n"); scanf("%c", &opc);
    switch (opc)
    {
    case 'A': 
    /* Entradas*/
        printf("Escribe la longitud del cateto adyacente al angulo: \n"); scanf("%i", &ca);
        printf("Escribe la longitud del cateto opuesto al angulo: \n"); scanf("%i", &co);
        /* Proceso*/
        h = hipotenusa(ca, co);
        /* Salida*/
        printf("la hipotenusa del triangulo mide: %f", h);
        main();
        break;
    case 'B':
    /* Entradas*/
        printf("Ingrese la base \n"); scanf("%i", &base);
        printf("Ingrese la altura \n"); scanf("%i", &alt);
        /* Proceso*/
        a = area(base, alt);
        /* Salidas*/
        printf("El area del triangulo es: %f \n", a);
        main();
        break;
    case 'C':
    /* Entradas*/
        printf("Ingrese el valor del angulo 1 \n"); scanf("%f", &a1);
        printf("Ingrese el valor del angulo 2 \n"); scanf("%f", &a2);
        /* Proceso */
        a3 = angulo(a1, a2);
        /* Salida*/
        printf("El tercer angulo mide: %f \n", a3);
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
