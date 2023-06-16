/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 7 de junio 2023
Descripcion:
E.P. que lea las utilidades anuales de una cadena de 10 tiendas y
que determine e imprima cuantas tiendas tuvieron utilidades mayor a 
los $ 20,000,000.-, así como la tienda que obtuvo la mayor 
utilidad. Utilizar While-Do.*/
#include <stdio.h>
#include <string.h>
#include <locale.h>
int main(){
    const int NUM_TIENDAS = 10;
    setlocale(LC_ALL, "es_ES");
    int i=0;
    float utilidad = 0;
    float mayor_utilidad = 0;
    int cont20000k = 0;
    int tienda_mayor_util = 1;
    while (i < NUM_TIENDAS)
    {
        printf("ingresa cual fue la utilidad anual de la tienda %i \n", ++i);
        scanf("%f", &utilidad);
        if(utilidad>200000000){
            cont20000k ++;
        }
        if(utilidad>mayor_utilidad){
            mayor_utilidad = utilidad;
            tienda_mayor_util = i;
        }
    }
    printf("Las tiendas con utilidades mayores a 200,000,000 fueron: %i \n", cont20000k);
    printf("las tienda con mayor utilidad fue %i, con una utilidad de %.1f", tienda_mayor_util, mayor_utilidad);


}
