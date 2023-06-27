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
int sumMatriz(int n, int m, int matriz[n][m]){
    int sum = 0;
    for (int i = 0; i < n ; i++){
        for (int j = 0; j < m ; j++) {
            sum += matriz[i][j];
        }
    }
    return sum;
}
int prodMatriz(int n, int m, int matriz[n][m]){
    int prod = 1;
    for (int i = 0; i < n ; i++){
        for (int j = 0; j < n ; j++){
            prod *= matriz[i][j];
        }
    }
    return prod;
}
int main(){
    setlocale(LC_ALL, "es_ES");
    /* Entradas*/
    const int n = 4;
    const int m = 3;
    int numeros[n][m];
    leerMatriz(n, m, numeros);
    /* Proceso*/
    int producto = prodMatriz(n, m, numeros);
    int suma = sumMatriz(n, m, numeros);
    /* Salidas*/
    printf("usted ingreso la siguiente matriz: ");
    imprimirMatriz(n,m, numeros);
    printf("\n la suma de todos los elementos es, %i", suma);
    printf("\n el producto de todos los elementos es: %i", producto);
}