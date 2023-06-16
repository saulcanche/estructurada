/* 
Author: Saul Canche Marcial 
Copilador: C online copiler. https://www.onlinegdb.com/online_c_compiler
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 7 de junio 2023
Descripcion: 
E.P. que lea el peso en gramos (máximo 5,000) y 
determine e imprima el menor número de pesas que hay que poner en una balanza 
(con pesos: 1 gr, 2 gr, 5 gr, 50 gr, 100 gr, 200 gr, 500 gr y 1000 gr), 
para equilibrar un determinado peso en gramos, introducido por teclado. 
Utilizar Switch.
*/ 
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "es_ES");
    int peso, numPesas;
    /* Entradas*/
    printf("Ingresa el peso en gramos(maximo 5000)"); 
    scanf("%d", &peso);

    if (peso > 5000) {
        printf("El peso maximo es 5000 \n");
        return 0;
    }

    printf("pesas usadas: ");
    /* Proceso*/
    while (peso > 0) { //uso ciclo while para repetir siempre que el peso sea mayor a 0
        switch (peso) {
            case 1000 ... 4999:
                printf("1000 ");
                peso -= 1000;
                break;
            case 500 ... 999:
                printf("500 ");
                peso -= 500;
                break;
            case 200 ... 499:
                printf("200 ");
                peso -= 200;
                break;
            case 100 ... 199:
                printf("100 ");
                peso -= 100;
                break;
            case 50 ... 99:
                printf("50 ");
                peso -= 50;
                break;
            case 5 ... 49:
                printf("5 ");
                peso -= 5;
                break;
            case 2 ... 4:
                printf("2 ");
                peso -= 2;
                break;
            case 1:
                printf("1 ");
                peso -= 1;
                break;
        }
        numPesas++;//aumentamos el numero de pesas en cada ciclo.
    }
    /* Salidas */
    printf("\n");
    printf("El numero minimo de pesas son: %i", numPesas);
    return 0;
}