/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 20  de junio 2023
Descripcion:
26. E.P. que lea una matriz de N X M elementos y que genere e
imprima, una matriz de N2 X 2 elementos, que contenga los elementos
negativos de la primera matriz, así como su posición.
*/
#include <stdio.h>
#include <string.h>
#include <locale.h>
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
int main(){
    setlocale(LC_ALL, "es_ES");
}