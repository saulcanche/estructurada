/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 22 de junio 2023
Descripcion: 
2. E.P. que lea un vector de 30 elementos que sean enteros y, 
genere e imprima un vector con los elementos negativos y 
otro vector con los elementos positivos. 
*/
#include <stdio.h>
#include <locale.h>
#define NUM_ELEMENTOS 4
void leerVectorNumeros(int numElementos, int numeros[]);
void contarPostivosNegativos(int numeros[], int numElementos, int *positivos, int *negativos);
void vectorPositivos(int numElementos, int numeros[], int resultado[]);
void vectorNegativos(int numElementos, int numeros[], int resultado[]);
void printVector(int vector[], int numElementos);

int main(){
    setlocale(LC_ALL, "es_ES"); // local español
    int positivos = 0; int negativos = 0;
    int numeros[NUM_ELEMENTOS];
    leerVectorNumeros(NUM_ELEMENTOS, numeros);
    /* Proceso*/
    contarPostivosNegativos(numeros, NUM_ELEMENTOS, &positivos, &negativos);
    int numerosPositivos[positivos];
    int numerosNegativos[negativos];
    vectorPositivos(NUM_ELEMENTOS, numeros, numerosPositivos);
    vectorNegativos(NUM_ELEMENTOS, numeros, numerosNegativos);
    printf("\nusted introdujo los siguientes numeros positivos: \n");
    printVector(numerosPositivos, positivos);
    printf("\nusted introdujo los siguientes numeros negativos: \n");
    printVector(numerosNegativos, negativos);
    
}
void leerVectorNumeros(int numElementos, int numeros[]){
    for (int i = 0; i < numElementos; i++)
    {
        printf("Ingrese el numero %i :", i+1);
        scanf("%i", &numeros[i]);
    }
}

void vectorPositivos(int numElementos, int numeros[], int resultado[]){
    int positivos = 0;
    for (int i = 0; i < numElementos; i++)
    {
        if (numeros[i] > 0)
        {
            resultado[positivos] = numeros[i];
            positivos++;
        }
    }
}

void vectorNegativos(int numElementos, int numeros[], int resultado[]){
    int negativos = 0;
    for (int i = 0; i < numElementos; i++)
    {
        if (numeros[i] < 0)
        {
            resultado[negativos] = numeros[i];
            negativos++;
        }
    }
}

void contarPostivosNegativos(int numeros[], int numElementos, int *positivos, int *negativos){
    for (int i = 0; i < numElementos; i++){
        if (numeros[i] > 0){
            (*positivos)++;
        }else
        {
            (*negativos)++;
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
