/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 22 de junio 2023
Descripcion: 
Dos matrices A y B se pueden multiplicar si el número de columnas de A es igual al número de filas de B. 
En otras palabras, que los vectores fila de A, 
contengan el mismo número de elementos que los vectores columna de B. De tal forma, 
la multiplicación de matrices se hace multiplicando cada fila de A por cada una de las columnas de B. 
Por lo tanto, E.P. que lea las matrices A y B y si es posible, 
determinar e imprimir dichas matrices A y B, así como la matriz P, (resultado de su multiplicación); 
cada arreglo a un lado del otro.
*/

#include <stdio.h>
#include <locale.h>
void leerVectorNumeros(int numElementos, int numeros[]);
int main(){
    setlocale(LC_ALL, "es_ES"); // local español

}
void leerVectorNumeros(int numElementos, int numeros[]){
    for (int i = 0; i < numElementos; i++)
    {
        printf("Ingrese el numero %i :", i+1);
        scanf("%i", &numeros[i]);
    }
    return 0;
}