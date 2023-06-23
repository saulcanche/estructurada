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

void leerMatriz(int n, int m, int matriz[n][m]) {
    printf("Ingrese los elementos de la matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(int n, int m, int matriz[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void multiplicarMatrices(int n, int m, int p, int matrizA[n][m], int matrizB[m][p], int matrizP[n][p]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            matrizP[i][j] = 0;
            for (int k = 0; k < m; k++) {
                matrizP[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
}

int main() {
    int nA, mA;
    printf("Ingrese el número de filas de la matriz A: ");
    scanf("%d", &nA);
    printf("Ingrese el número de columnas de la matriz A: ");
    scanf("%d", &mA);
    
    int nB, mB;
    printf("Ingrese el número de filas de la matriz B: ");
    scanf("%d", &nB);
    printf("Ingrese el número de columnas de la matriz B: ");
    scanf("%d", &mB);
    
    if (mA != nB) {
        printf("No se pueden multiplicar las matrices.\n");
        return 0;
    }
    
    int matrizA[nA][mA];
    leerMatriz(nA, mA, matrizA);
    
    int matrizB[nB][mB];
    leerMatriz(nB, mB, matrizB);
    
    int matrizP[nA][mB];
    multiplicarMatrices(nA, mA, mB, matrizA, matrizB, matrizP);
    
    printf("Matriz A:\n");
    imprimirMatriz(nA, mA, matrizA);
    
    printf("Matriz B:\n");
    imprimirMatriz(nB, mB, matrizB);
    
    printf("Matriz P:\n");
    imprimirMatriz(nA, mB, matrizP);
    
    return 0;
}