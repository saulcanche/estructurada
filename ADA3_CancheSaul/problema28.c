/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 20  de junio 2023
Descripcion:
28. E.P. que lea una matriz de M X N elementos y que cuente e
imprima, cuantos elementos son pares y cuantos son impares.
*/
#include <stdio.h>
#include <locale.h>
#define M 3
#define N 3

void leerMatriz(int matriz[M][N])
{
    int i, j;

    printf("Ingresa los elementos de la matriz:\n");

    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf("Ingresa el elemento a[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void contarParesImpares(int matriz[M][N], int *pares, int *impares)
{
    int i, j;

    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++)
        {
            if(matriz[i][j] % 2 == 0)
            {
                (*pares)++;
            }
            else
            {
                (*impares)++;
            }
        }
    }
}

void imprimirMatriz(int matriz[M][N])
{
    int i, j;

    printf("\nLa matriz ingresada es:\n");

    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    setlocale(LC_ALL, "es_ES");
    int matriz[M][N];
    int pares = 0;
    int impares = 0;

    leerMatriz(matriz);
    contarParesImpares(matriz, &pares, &impares);
    imprimirMatriz(matriz);

    printf("\nLa matriz tiene %d elementos pares y %d elementos impares.\n", pares, impares);

    return 0;
}