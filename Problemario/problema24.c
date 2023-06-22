/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 20  de junio 2023
Descripcion:
24. E.P. que lea dos vectores de N elementos y que genere e imprima
un tercer vector con la suma de cada uno de los elementos de los dos
anteriores, así como un cuarto vector con el producto de dichos
elementos. 
*/
#include <stdio.h>
#include <string.h>
#include <locale.h>
void sumVectores(int vector1[], int vector2[], int vectorSum[], int numElementos);
void prodVectores(int vector1[], int vector2[], int vectorProd[], int numElementos);
void leerVectorNumeros(int numElementos, int numeros[]);
void imprimirVectorNumeros(int numElementos, int numeros[]);
int main(){
    setlocale(LC_ALL, "es_ES");
    /* Entradas*/
    int numElementos;
    printf("Ingrese la cantidad de numeros que le gustaria leer: "); scanf("%i", &numElementos);
    int numeros1[numElementos];
    int numeros2[numElementos];
    int numerosProd[numElementos];
    int numerosSum[numElementos];
    leerVectorNumeros(numElementos, numeros1);
    leerVectorNumeros(numElementos, numeros2);
    /* Proceso */
    sumVectores(numeros1, numeros2, numerosSum, numElementos);
    prodVectores(numeros1, numeros2, numerosSum, numElementos);
   /* Salidas*/
    printf("Usted ingreso el vector 1: ");
    imprimirVectorNumeros(numElementos, numeros1);    
    printf("\nUsted ingreso el vector 2: ");
    imprimirVectorNumeros(numElementos, numeros2);    
    printf("\nLos productos de los vectores son: ");
    imprimirVectorNumeros(numElementos, numerosProd);    
    printf("\nLas sumas de los vectores son: ");
    imprimirVectorNumeros(numElementos, numerosSum);
}
void leerVectorNumeros(int numElementos, int numeros[]){
    for (int i = 0; i < numElementos; i++)
    {
        printf("Ingrese el numero %i :", i+1);
        scanf("%i", &numeros[i]);
    }
}
void sumVectores(int vector1[], int vector2[], int vectorSum[], int numElementos){
    for(int i = 0; i < numElementos; i++){
        vectorSum[i] = vector1[i] + vector2[i];
    }
}
void prodVectores(int vector1[], int vector2[], int vectorProd[], int numElementos){
    for(int i = 0; i < numElementos; i++){
        vectorProd[i] = vector1[i] * vector2[i];
    }
}
void imprimirVectorNumeros(int numElementos, int numeros[]){
    for (int i = 0; i < numElementos; i++){
        printf("%i, ", numeros[i]);
    }
}