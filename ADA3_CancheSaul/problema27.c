/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 20  de junio 2023
Descripcion:
27. E.P. que lea una matriz de 4 X 3 elementos y que calcule e
imprima, la suma y el producto, de sus elementos.
*/
#include <stdio.h>

const int N = 4;
const int M = 3;

void leerMatriz(int matriz[N][M]) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("Ingrese el elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

int sumarMatriz(int matriz[N][M]) {
    int i, j, suma = 0;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            suma += matriz[i][j];
        }
    }
    return suma;
}

int multiplicarMatriz(int matriz[N][M]) {
    int i, j, producto = 1;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            producto *= matriz[i][j];
        }
    }
    return producto;
}

int main() {
    int matriz[N][M], suma, producto;

    leerMatriz(matriz);

    suma = sumarMatriz(matriz);
    printf("La suma de los elementos de la matriz es: %d\n", suma);

    producto = multiplicarMatriz(matriz);
    printf("El producto de los elementos de la matriz es: %d\n", producto);

    return 0;
}