/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 22 de junio 2023
Descripcion: 
7. E.P. que permita leer una matriz de 3 x 3 elementos que contenga números enteros e indique 
si se trata de un cuadrado mágico. 
Dicho cuadrado mágico es cuando la sumatoria de los elementos es 15 por renglones, columnas y diagonales (principal e invertida).
*/
#include <stdio.h>
#include <stdbool.h>

void leerMatriz(int n, int m, int matriz[n][m]) {
    printf("Ingrese los elementos de la matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

bool esCuadradoMagico(int n, int m, int matriz[n][m]) {
    int sumaDiagonalPrincipal = 0;
    int sumaDiagonalInvertida = 0;
    for (int i = 0; i < n; i++) {
        int sumaFila = 0;
        int sumaColumna = 0;
        for (int j = 0; j < m; j++) {
            sumaFila += matriz[i][j];
            sumaColumna += matriz[j][i];
        }
        if (sumaFila != 15 || sumaColumna != 15) {
            return false;
        }
        sumaDiagonalPrincipal += matriz[i][i];
        sumaDiagonalInvertida += matriz[i][n-i-1];
    }
    if (sumaDiagonalPrincipal != 15 || sumaDiagonalInvertida != 15) {
        return false;
    }
    return true;
}

int main() {
    int n = 3;
    int m = 3;
    int matriz[n][m];
    
    leerMatriz(n, m, matriz);
    
    if (esCuadradoMagico(n, m, matriz)) {
        printf("La matriz es un cuadrado mágico.\n");
    } else {
        printf("La matriz no es un cuadrado mágico.\n");
    }
    
    return 0;
}