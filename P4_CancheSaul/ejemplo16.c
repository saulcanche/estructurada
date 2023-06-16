/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 7 de junio 2023
Descripcion:
Sumar números pares y multiplicar los impares,
hasta que la sumatoria sea mayor a 50 y 
el producto mayor que 150*/
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "es_ES");
    int num, suma = 0, prod = 1;
    do
    {
        /* Entradas */
        printf("Dame un número entero \n");
        scanf("%i", &num);
        /* Procesos*/
        if(num%2 ==0){
            suma += num;
        } else{
            prod *= num; 
        }
    } while (suma <= 50 && prod <=150);
    /* SAlidas*/
    printf("la suma es: %i\n", suma);
    printf("El producto es %i", prod);
    return 0;
}