/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 22 de junio 2023
Descripcion: 
6. E.P. que lea una matriz A de n x m elementos, así como un vector X de n elementos que 
contengan números reales. Calcular el producto de matriz por vector columna: 
el producto de la matriz A por el vector X, es un vector Z donde el elemento 1 está dado por
 la sumatoria de los productos del elemento 1 del vector X por cada uno de los elementos de la
  fila 1 de la matriz A, lo propio para el 2, 3, 4, ......n. 
  Imprimir la matriz A, el vector X y el vector Z, cada arreglo a un lado del otro.
*/
#include <stdio.h>
#include <locale.h>

void leerMatriz(int n, int m, float matriz[n][m]) {
    printf("Ingrese los elementos de la matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }
}

void leerVectorFloat(int numElementos,float floats[], char tipo[15]) {
    for (int i = 0; i < numElementos; i++) {
        printf("Ingrese la/el %s %d: ",tipo,i+1);
        scanf("%f",&floats[i]);
    }
}

void productoMatrizVector(int n, int m, float matriz[n][m], float vectorX[n], float vectorZ[n]) {
    for (int i = 0; i < n; i++) {
        vectorZ[i] = 0;
        for (int j = 0; j < m; j++) {
            vectorZ[i] += matriz[i][j] * vectorX[j];
        }
    }
}

void imprimirMatriz(int n, int m, float matriz[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
}

void imprimirVector(int n, float vector[n]) {
    for (int i = 0; i < n; i++) {
        printf("%.2f ", vector[i]);
    }
    printf("\n");
}

int main(){
    setlocale(LC_ALL, "es_ES"); // local español
    int n, m;
    printf("Ingrese el número de filas de la matriz: ");
    scanf("%d", &n);
    printf("Ingrese el número de columnas de la matriz: ");
    scanf("%d", &m);
    
    float matrizA[n][m];
    leerMatriz(n, m, matrizA);
    
    float vectorX[m];
    leerVectorFloat(m, vectorX, "elemento del vector X");
    
    float vectorZ[n];
    productoMatrizVector(n, m, matrizA, vectorX, vectorZ);
    
    printf("Matriz A:\n");
    imprimirMatriz(n, m, matrizA);
    
    printf("Vector X:\n");
    imprimirVector(m, vectorX);
    
    printf("Vector Z:\n");
    imprimirVector(n, vectorZ);
    
    return 0;
}