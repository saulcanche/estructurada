/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 22 de junio 2023
Descripcion: 
5. E.P. que lea una matríz de n x m elementos que contenga números reales, 
determine su matriz transpuesta e imprima ambas, una al lado de la otra 
(si son cuadradas y mismo tamaño) o una matriz abajo de la otra (en cualquier otro caso). 
De tal forma, la traspuesta de una matriz de orden m x n es una matriz de orden n x m, 
que se obtiene intercambiando filas por columnas; es decir, el elemento A(i,j) se coloca en B(j,i).
*/
#include <stdio.h>
#include <locale.h>
void readMatriz(int n, int m, float matriz[n][m]) {
    printf("Ingrese los elementos de la matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }
}

void transpuestaMatriz(int n, int m, float matriz[n][m], float transpuesta[m][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }
}

void printMatriz(int n, int m, float matriz[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
}
int main(){
    setlocale(LC_ALL, "es_ES"); // local español
    int n, m;
    printf("Ingrese el número de filas: ");
    scanf("%d", &n);
    printf("Ingrese el número de columnas: ");
    scanf("%d", &m);

    float matriz[n][m];
    float traspuesta[m][n];

    readMatriz(n, m, matriz);
    transpuestaMatriz(n, m, matriz, traspuesta);

    printf("\nMatriz original:\n");
    printMatriz(n, m, matriz);

    printf("\nMatriz transpuesta:\n");
    printMatriz(m, n, traspuesta);

    return 0;
}