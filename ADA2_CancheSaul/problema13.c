/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 7 de junio 2023
Descripcion:
13. Una cadena de 10 tiendas determina para cada una, al final del
mes los montos de sus ventas y costos. E.P. que determine e imprima
cuántas tiendas obtuvieron una utilidad mayor a los $ 30,000,000.- al
final del año, así como la tienda que obtuvo la mayor utilidad. Utilizar
Do-While.*/
#include <stdio.h>
#include <locale.h>
const int NUM_TTIENDAS = 10;
const int MESES = 12;
int main(){
    setlocale(LC_ALL, "es_ES");
    int cont_30000k = 0; float utilidad, utilidadMayor, ventaMes, costoMes, utilidadTotal;
    int i, j, tiendaMayorUtil; i=1; tiendaMayorUtil = 1;
    do
    {
        j = 0;
        utilidadTotal = 0;
        do
        {
        /*Entradas */
        printf("ingrese la venta de la tienda %i en el mes %i \n", i, ++j);
        scanf("%f", &ventaMes);
        printf("ingrese el costo de la tienda %i en el mes %i \n", i, j);
        scanf("%f", &costoMes);
        utilidad = ventaMes - costoMes;
        printf("la utilidad del mes %i de la tienda %i fue de %.2f \n", j, i, utilidad);
        utilidadTotal += utilidad;
        } while (j < MESES);
        printf("utilidad total de la tienda %i: %.2f \n", i, utilidadTotal);
        /* Proceso*/
        if (utilidadTotal>utilidadMayor){
            utilidadMayor = utilidadTotal; //utilidad total se vuelve la mayor utilidad
            tiendaMayorUtil = i; // Guardamos el numero de tienda con mayor utilidad;
        }
        if (utilidadTotal>300000000){
            cont_30000k++; //aumentar contador de t iendas con utiliad mayor a 30 000k
        }
        i++;
    } while (i <= NUM_TTIENDAS);
    /* Salidas*/
    printf("la tienda con mayor utilidad fue %i, con una utilidad de %.2f \n", tiendaMayorUtil, utilidadMayor);
    printf("El numero de tiendas con utilidad mayor a 30,000,000 fueron: %i", cont_30000k);
}