/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 20  de junio 2023
Descripcion:
37. Dado un vector de 10 elementos enteros {1, 0, 3, 4, -7, 2, 8, 9, 5,
4}, E.P. que utilice apuntadores para acceder a cada elemento del
arreglo, así como determinar e imprimir su sumatoria y su producto.
Además, deberá imprimir la dirección de memoria y los elementos del
vector.
*/
#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "es_ES");
    int vector[] = {1, 0, 3, 4, -7, 2, 8, 9, 5, 4};
    int *ptr = vector; // Puntero al primer elemento del vector

    int sumatoria = 0;
    int producto = 1;

    printf("Elementos del vector:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", *ptr); // Imprimir el elemento al que apunta el puntero
        sumatoria += *ptr; // Sumar el elemento al valor de la sumatoria
        producto *= *ptr; // Multiplicar el elemento al valor del producto
        ptr++; // Mover el puntero al siguiente elemento
    }
    printf("\n");

    printf("Direcciones de memoria:\n");
    ptr = vector; // Reiniciar el puntero al primer elemento del vector
    for (int i = 0; i < 10; i++) {
        printf("%p\n", (void*)ptr); // Imprimir la dirección de memoria a la que apunta el puntero
        ptr++; // Mover el puntero al siguiente elemento
    }

    printf("Sumatoria: %d\n", sumatoria);
    printf("Producto: %d\n", producto);

    return 0;
}