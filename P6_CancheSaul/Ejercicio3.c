/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 22 de junio 2023
Descripcion: 
3. La MODA de un vector, es aquél elemento del arreglo que se repite con mayor frecuencia. 
De tal forma, en caso de existir más de un número que se repite con igual frecuencia máxima, 
entonces no existe la moda. 
E.P. que lea un vector de 10 elementos que sean enteros y determine la moda del arreglo. 
Si no la hay, deberá imprimir no existe la moda. Se recomienda ordenar los elementos del arreglo.
*/
#include <stdio.h>
#include <locale.h>
#define NUM_ELEMENTOS 10
void leerVectorNumeros(int numElementos, int numeros[]);
void ordenarVector(int numElementos, int numeros[]);
int calcularModa(int numElementos, int numeros[]);
int main(){
    setlocale(LC_ALL, "es_ES"); // local español
    int numeros[NUM_ELEMENTOS];
    leerVectorNumeros(NUM_ELEMENTOS, numeros);
    ordenarVector(NUM_ELEMENTOS, numeros);
    int moda = calcularModa(NUM_ELEMENTOS, numeros);
    if (moda == -1) {
        printf("No existe la moda\n");
    } else {
        printf("La moda es: %d\n", moda);
    }
    return 0;
}

void leerVectorNumeros(int numElementos, int numeros[]){
    for (int i = 0; i < numElementos; i++)
    {
        printf("Ingrese el numero %i :", i+1);
        scanf("%i", &numeros[i]);
    }
}

void ordenarVector(int numElementos, int numeros[]) {
    for (int i = 0; i < numElementos - 1; i++) {
        for (int j = i + 1; j < numElementos; j++) {
            if (numeros[i] > numeros[j]) {
                int temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }
}

int calcularModa(int numElementos, int numeros[]) {
    int maxCount = 0;
    int moda = -1;
    int count = 1;
    for (int i = 1; i < numElementos; i++) {
        if (numeros[i] == numeros[i-1]) {
            count++;
        } else {
            if (count > maxCount) {
                maxCount = count;
                moda = numeros[i-1];
            } else if (count == maxCount) {
                moda = -1;
            }
            count = 1;
        }
    }
    if (count > maxCount) {
        maxCount = count;
        moda = numeros[numElementos-1];
    } else if (count == maxCount) {
        moda = -1;
    }
    return moda;
}