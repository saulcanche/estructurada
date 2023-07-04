/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 20  de junio 2023
Descripcion:
39. E.P. que reserve memoria con malloc para un arreglo de 5
elementos de tipo entero largo (long), rellenarlo con datos que digite el
usuario, luego utilizar realloc para ampliar dicho arreglo a 10
elementos e imprimir, la dirección de memoria y los elementos del
arreglo resultante.
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
    setlocale(LC_ALL, "es_ES");
    long *arreglo = (long*)malloc(5 * sizeof(long));

    if (arreglo == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    printf("Dirección de memoria del arreglo original: %p\n", (void*)arreglo);

    printf("Ingrese los 5 números enteros largos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%ld", &arreglo[i]);
    }

    printf("Elementos del arreglo original:\n");
    for (int i = 0; i < 5; i++) {
        printf("%ld ", arreglo[i]);
    }
    printf("\n");

    arreglo = (long*)realloc(arreglo, 10 * sizeof(long));

    if (arreglo == NULL) {
        printf("Error: No se pudo ampliar el arreglo.\n");
        return 1;
    }

    printf("Dirección de memoria del arreglo ampliado: %p\n", (void*)arreglo);

    printf("Ingrese los 5 números enteros largos adicionales:\n");
    for (int i = 5; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%ld", &arreglo[i]);
    }

    printf("Elementos del arreglo ampliado:\n");
    for (int i = 0; i < 10; i++) {
        printf("%ld ", arreglo[i]);
    }
    printf("\n");

    free(arreglo);

    return 0;
}
