/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 22 de junio 2023
Descripcion: 
1. E.P. que lea un vector de 20 elementos que sean enteros y 
determine e imprima la suma de los elementos pares y el producto de los elementos impares.
*/
#include <stdio.h>
#include <locale.h>
#define NUM_ELEMENTOS 20

void leerVectorNumeros(int numElementos, int numeros[]);
void contarParesImpares(int numeros[], int numElementos, int *pares, int *impares);
void vectorImpares(int numElementos, int numeros[], int resultado[]);
void vectorPares(int numElementos, int numeros[], int resultado[]);
void printVector(int vector[], int numElementos);
int sumVector(int vector[], int numElementos);
int prodVector(int vector[], int numElementos);
int main(){
    setlocale(LC_ALL, "es_ES"); // local español
    /* Entradas*/
    int pares = 0, impares = 0;
    int numeros[NUM_ELEMENTOS];
    leerVectorNumeros(NUM_ELEMENTOS, numeros);
    /* Proceso*/
    contarParesImpares(numeros, NUM_ELEMENTOS, &pares, &impares);
    int numerosPares[pares];
    int numerosImpares[impares];
    vectorImpares(NUM_ELEMENTOS, numeros, numerosImpares);
    vectorPares(NUM_ELEMENTOS, numeros, numerosPares);
    /* Salida*/
    printf("usted introdujo los siguientes numeros pares: \n");
    printVector(numerosPares, pares);
    printf("\nla suma de los numeros pares es, %i \n", sumVector(numerosPares, pares));
    printf("usted introdujo los siguientes numeros impares \n");
    printVector(numerosImpares, impares);
    printf("\nel producto de impares es: %i \n", prodVector(numerosImpares, impares));
}

void leerVectorNumeros(int numElementos, int numeros[]){
    for (int i = 0; i < numElementos; i++)
    {
        printf("Ingrese el numero %i :", i+1);
        scanf("%i", &numeros[i]);
    }
}

void vectorPares(int numElementos, int numeros[], int resultado[]){
    int pares = 0;
    for (int i = 0; i < numElementos; i++)
    {
        if (numeros[i]%2 == 0)
        {
            resultado[pares] = numeros[i];
            pares++;
        }
    }
}

void vectorImpares(int numElementos, int numeros[], int resultado[]){
    int impares = 0;
    for (int i = 0; i < numElementos; i++)
    {
        if (numeros[i]%2 != 0)
        {
            resultado[impares] = numeros[i];
            impares++;
        }
    }
}

void contarParesImpares(int numeros[], int numElementos, int *pares, int *impares){
    for (int i = 0; i < numElementos; i++){
        if (numeros[i]%2 == 0){
            (*pares)++;
        }else
        {
            (*impares)++;
        }
    }
}
void printVector(int vector[], int numElementos) {
    printf("<");
    for (int i = 0; i < numElementos; i++) {
        printf("%d", vector[i]);
        if (i != numElementos - 1) {
            printf(", ");
        }
    }
    printf(">");
}
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