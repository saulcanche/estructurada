/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 7 de junio 2023
Descripcion:
E.P. que lea 10 números (N) y que determine e imprima los que
sean mayores a 100. Utilizar While-Do.*/
#include <stdio.h>
#include <string.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "es_ES");
    int i, n, numMayor100; float num;
    i=0; numMayor100=0;
    do
    {
        printf("ingrese el numero de numeros que desea ingresar: \n");
        scanf("%i", &n);
        if (n<0)
        {
            printf("No es posible ingresar un numero negativo de numeros\n");
        }
        
    } while (n<0);
    
    while (i<=n)
    { /* Entradas*/
        printf("Ingresa un numero \n");
        scanf("%f", &num);
        /* Proceso*/
        i++;
        if(num>100){
            printf("%.2f es mayor a 100\n", num);
            numMayor100 ++;}
    }
    /*Salidas*/
    printf("el total de numeros mayores a 100 ingresados es %i", numMayor100);
    
}

