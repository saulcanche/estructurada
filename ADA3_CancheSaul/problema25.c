/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 20  de junio 2023
Descripcion:
25. E.P. que lea una matriz de 5 X 5 elementos y que determine e
imprima, cuantos elementos negativos contiene y los cambie por
ceros. Al final, deberá imprimir la nueva matriz.
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
    const int n = 5;
    const int m = 5;
    int matriz[n][m];
    leerMatriz(n, m, matriz);
    int contadorNegativos = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matriz[i][j] < 0) {
                contadorNegativos++;
                matriz[i][j] = 0;
            }
        }
    }
    printf("La matriz contiene %d elementos negativos.\n", contadorNegativos);
    printf("La nueva matriz es:\n");
    imprimirMatriz(n, m, matriz);
}