/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 20  de junio 2023
Descripcion:
31. E.P que lea una matriz de 5 X 5 elementos y que calcule e imprima
la suma de sus elementos que se encuentran en la diagonal principal, así como el producto de sus elementos que se encuentran en la
diagonal invertida.
*/
#include <stdio.h>
#include <locale.h>
#define N 5

void leerMatriz(int matriz[][N], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        printf("Ingrese los elementos de la fila %d:\n", i + 1);
        for (j = 0; j < n; j++) {
            printf("Elemento %d: ", j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

int sumaDiagonal(int matriz[][N], int n) {
    int i, suma = 0;
    for (i = 0; i < n; i++) {
        suma += matriz[i][i];
    }
    return suma;
}

int productoDiagonalInvertida(int matriz[][N], int n) {
    int i, producto = 1;
    for (i = 0; i < n; i++) {
        producto *= matriz[i][n - i - 1];
    }
    return producto;
}

int main() {
    setlocale(LC_ALL, "es_ES");
    int matriz[N][N];
    leerMatriz(matriz, N);
    printf("La suma de los elementos en la diagonal principal es: %d\n", sumaDiagonal(matriz, N));
    printf("El producto de los elementos en la diagonal invertida es: %d\n", productoDiagonalInvertida(matriz, N));
    return 0;
}
