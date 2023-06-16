/* 
Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 7 de junio 2023
Descripcion: 
5. E.P. que lea tres números diferentes y que determine e imprima el
mayor. Utilizar If.E.P. 

*/ 
#include <stdio.h>
#include <locale.h>
/* funcion para leer un numero*/
float ObtenerNumero(int A){ //Toma un numero de entrada
    float number;
    printf("Ingrese su %i numero: ", A); //Imprime la oracion usando el numero de entrada para llevar el orden
    scanf("%f", &number);
    return number; //devuelve el numero ingresado por el usuario
}

int main(){
    setlocale(LC_ALL, "es_ES");
    float num1, num2, num3, numMayor; //declaracion variables
    /* Entradas(usamos la funcion Obtener numero)*/
    num1 = ObtenerNumero(1);
    num2 = ObtenerNumero(2);
    num3 = ObtenerNumero(3);
    /*Proceso*/
    numMayor = num1; //asumimos que el numero mayor es el primero
    if (num2 > numMayor){ //comparamos el numero 2 con mayor
        numMayor=num2;
    }
    if (num3 > numMayor){ //comparamos numero 3 con mayor
        numMayor=num3;
    }
    /*Salidas*/
    printf("el numero mayor es %.2f", numMayor); //imprimimos numero mayor
    return 0;
}