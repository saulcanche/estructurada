/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 20  de junio 2023
Descripcion:
38. E.P. que permita comprobar con malloc, si hay suficiente memoria
disponible (si el puntero es válido, es decir diferente de NULL); para
un arreglo de 10 números reales largos (double); si la hay, entonces
leer y luego, imprimir la dirección de memoria y los elementos de dicho
arreglo; si no, indicar un error en la asignación de memoria.
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
    setlocale(LC_ALL, "es_ES");
    double *arreglo = (double*)malloc(10 * sizeof(double));

    if (arreglo == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    printf("Dirección de memoria del arreglo: %p\n", (void*)arreglo);

    printf("Ingrese los 10 números reales largos:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%lf", &arreglo[i]);
    }

    printf("Elementos del arreglo:\n");
    for (int i = 0; i < 10; i++) {
        printf("%lf ", arreglo[i]);
    }
    printf("\n");

    free(arreglo);

    return 0;
    }
