/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 20  de junio 2023
Descripcion:
21. E.P. que lea un vector de N elementos y que calcule e imprima su
sumatoria y el producto de sus elementos.
*/
#include <stdio.h>
#include <locale.h>
int sumVector(int vector[], int numElementos);
int prodVector(int vector[], int numElementos);
int leerVectorNumeros(int numElementos, int numeros[]);
int main(){
    setlocale(LC_ALL, "es_ES");
    /* Entradas*/
    int numElementos;
    printf("Ingrese la cantidad de numeros que le gustaria leer: "); scanf("%i", &numElementos);
    int numeros[numElementos];
    leerVectorNumeros(numElementos, numeros);
    /* Salida*/
    printf("La suma de los elementos es %i, y el producto es %i", sumVector(numeros, numElementos), prodVector(numeros, numElementos));
}
/* Proceso*/
int leerVectorNumeros(int numElementos, int numeros[]){
    for (int i = 0; i < numElementos; i++)
    {
        printf("Ingrese el numero %i :", i+1);
        scanf("%i", &numeros[i]);
    }
    return 0;
};
int sumVector(int vector[], int numElementos){
    int sum = 0;
    for(int i = 0; i < numElementos; i++){
        sum += vector[i];
    }
    return sum;
}
int prodVector(int vector[], int numElementos){
    int prod = 1;
    for(int i = 0; i < numElementos ; i++){
        prod *= vector[i];
    }
    return prod;
}