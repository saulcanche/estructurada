/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 20  de junio 2023
Descripcion:
22. E.P. que lea un vector de N elementos y que determine el
elemento menor y mayor del arreglo, así como su posición.
*/
#include <stdio.h>
#include <locale.h>
int leerVectorNumeros(int numElementos, int numeros[]);
int minVector(int vector[], int numElementos);
int maxVector(int vector[], int numElementos);
int main(){
    setlocale(LC_ALL, "es_ES");
    /* Entradas*/
    int numElementos;
    printf("Ingrese la cantidad de numeros que le gustaria leer: "); scanf("%i", &numElementos);
    int numeros[numElementos];
    leerVectorNumeros(numElementos, numeros);
    /*Salidas*/
    printf("El valor minimo ingresado es: %i y el maximo es: %i ", minVector(numeros, numElementos), maxVector(numeros, numElementos));
}
/* Proceso*/
int leerVectorNumeros(int numElementos, int numeros[]){
    for (int i = 0; i < numElementos; i++)
    {
        printf("Ingrese el numero %i :", i+1);
        scanf("%i", &numeros[i]);
    }
    return 0;
}
int minVector(int vector[], int numElementos){
    int min=vector[0];
    for (int i = 0; i < numElementos; i++){
        if (vector[i] < min)
        {
            min = vector[i];
        }
    }
    return min;
}
int maxVector(int vector[], int numElementos){    
    int max = vector[0];
    for (int i = 0; i < numElementos; i++){
        if (vector[i] > max)
        {
            max = vector[i];
        }
    }
    return max;
}