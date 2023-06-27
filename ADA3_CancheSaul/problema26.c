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

// modifique para los n y m deseados
#define N 3
#define M 3

void leerMatriz(float matriz[N][M])
{
    int i, j;

    printf("Ingresa los elementos de la matriz:\n");

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < M; j++)
        {
            printf("Ingresa el elemento a[%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
}

void generarMatrizNegativos(float matriz[N][M], float negativos[N*M][2], int *k)
{
    int i, j;

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < M; j++)
        {
            if(matriz[i][j] < 0)
            {
                negativos[*k][0] = matriz[i][j];
                negativos[*k][1] = (float)i*M + j;
                (*k)++;
            }
        }
    }
}

void imprimirMatriz(float matriz[N][M])
{
    int i, j;

    printf("\nLa matriz ingresada es:\n");

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < M; j++)
        {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }
}

void imprimirMatrizNegativos(float negativos[N*M][2], int k)
{
    int i;

    printf("\nLa matriz de números reales negativos de la primera matriz y la ubicación del número negativo en la primera matriz es:\n");

    for(i = 0; i < k; i++)
    {
        printf("%.2f\t(%d,%d)\n", negativos[i][0], (int)negativos[i][1]/M, (int)negativos[i][1]%M);
    }
}

int main()
{
    float matriz[N][M];
    float negativos[N*M][2];
    int k = 0;

    leerMatriz(matriz);
    generarMatrizNegativos(matriz, negativos, &k);
    imprimirMatriz(matriz);
    imprimirMatrizNegativos(negativos, k);

    return 0;
}