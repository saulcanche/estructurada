/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 20  de junio 2023
Descripcion:
34. E.P. que lea dos matrices de M X N elementos, verificar que sea
cuadrada y determinar e imprimir, si la diagonal principal de la primera, es igual a la diagonal principal de la segunda.
*/
#include <stdio.h>
#include <locale.h>
#define M 3
#define N 3

void leerMatriz(int matriz[][N], int m, int n) {
    int i, j;
    for (i = 0; i < m; i++) {
        printf("Ingrese los elementos de la fila %d:\n", i + 1);
        for (j = 0; j < n; j++) {
            printf("Elemento %d: ", j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

int esCuadrada(int m, int n) {
    return m == n;
}

int diagonalesIguales(int matriz1[][N], int matriz2[][N], int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (matriz1[i][i] != matriz2[i][i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    setlocale(LC_ALL, "es_ES");
    int matriz1[M][N], matriz2[M][N];
    printf("Ingrese los elementos de la primera matriz:\n");
    leerMatriz(matriz1, M, N);
    printf("Ingrese los elementos de la segunda matriz:\n");
    leerMatriz(matriz2, M, N);
    if (!esCuadrada(M, N)) {
        printf("Las matrices no son cuadradas.\n");
        return 0;
    }
    if (diagonalesIguales(matriz1, matriz2, N)) {
        printf("La diagonal principal de la primera matriz es igual a la diagonal principal de la segunda.\n");
    } else {
        printf("La diagonal principal de la primera matriz no es igual a la diagonal principal de la segunda.\n");
    }
    return 0;
}