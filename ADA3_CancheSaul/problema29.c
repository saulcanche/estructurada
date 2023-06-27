/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 20  de junio 2023
Descripcion:
29. E.P. que lea una matriz de 5 X 5 elementos y que genere e
imprima, un vector de 5 elementos que contenga la sumatoria de cada
fila de la matriz.
*/
#include <stdio.h>
#include <locale.h>
int m;
void leerMatriz(int matriz[][m], int n, int m) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Ingrese el elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
}
void sumatoria(int matriz[][5], int n, int m) {
    int vector[5] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            vector[i] += matriz[i][j];
        }
    }
    printf("El vector de sumatorias es: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vector[i]);
    }
}
int main(){
    setlocale(LC_ALL, "es_ES");
    int n, m;
    printf("Ingrese el número de filas y columnas de la matriz: ");
    scanf("%d %d", &n, &m);
    int matriz[n][m];
    leerMatriz(matriz, n, m);
    sumatoria(matriz, n, m);
    return 0;
}



