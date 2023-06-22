/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 20  de junio 2023
Descripcion:
23. E.P. que lea un vector de N elementos, el cual se sabe tiene
elementos negativos, positivos y nulos; de tal forma, generar e
imprimir, tres vectores adicionales que contengan cada uno de los
tipos (negativos, positivos, nulos). Cabe señalar, que cada vector debe
ser de tamaño diferenciado, dependiendo de los tipos de elementos
encontrados en el vector original.
*/
#include <stdio.h>
#include <locale.h>
void leerVectorNumeros(int numElementos, int numeros[]);
void imprimirVectorNumeros(int numElementos, int numeros[]);
void vectorPostivos(int numElementos, int numeros[], int resultado[]);
void vectorNegativos(int numElementos, int numeros[], int resultado[]);
void vectorNulos(int numElementos, int numeros[], int resultado[]);
int main(){
    setlocale(LC_ALL, "es_ES");
    /* Entradas*/
    int numElementos;
    printf("Ingrese la cantidad de numeros que le gustaria leer: "); scanf("%i", &numElementos);
    int numeros[numElementos];
    int numerosPostivos[numElementos];
    int numerosNegativos[numElementos];
    int numerosNulos[numElementos];
    leerVectorNumeros(numElementos, numeros);
    
    /*Proceso*/
    vectorPostivos(numElementos, numeros, numerosPostivos);
    vectorNegativos(numElementos, numeros, numerosNegativos);
    vectorNulos(numElementos, numeros, numerosNulos);
    
    /*Salidas*/
    printf("el vector de numeros negativos es el siguiente: \n");
    imprimirVectorNumeros(numElementos, numerosNegativos);
    printf("el vector de numeros positivos es el siguiente: \n");
    imprimirVectorNumeros(numElementos, numerosPostivos);
    printf("el vector de numeros nulos es el siguiente: \n");
    imprimirVectorNumeros(numElementos, numerosNulos);
}
/* Proceso*/
void leerVectorNumeros(int numElementos, int numeros[]){
    for (int i = 0; i < numElementos; i++)
    {
        printf("Ingrese el numero %i :", i+1);
        scanf("%i", &numeros[i]);
    }
}
void imprimirVectorNumeros(int numElementos, int numeros[]){
    for (int i = 0; i < numElementos; i++){
        printf("%i, ", numeros[i]);
    }
}
void vectorPostivos(int numElementos, int numeros[], int resultado[]){
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
void vectorNulos(int numElementos, int numeros[], int resultado[]){
    int nulos = 0;
    for (int i = 0; i < numElementos; i++)
    {
        if (numeros[i] == 0)
        {
            resultado[nulos] = numeros[i];
            nulos++;
        }
        
    }
}