/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 7 de junio 2023
Descripcion:
Programa Sumar números pares y multiplicar los impares,
mientras que la sumatoria sea menor o igual a 50 o el productosea menor igual a 150
*/
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "es_ES");
    int num, suma, prod;
    suma = 0;
    prod = 1;
    while (suma <= 50 || prod <= 150)
    { /* ENTRADAS */
        printf("dame un numero entero \n");
        /* PROCESO */
        scanf("%i", &num);
        if (num %2 == 0){
            suma += num;
        } else{
            prod *= num;
        }
    } 
    /* Salida*/
    printf("la suma es: %i\n", suma);
    printf("El producto es: %i", prod);
    return 0;
}

