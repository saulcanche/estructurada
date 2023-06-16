/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 7 de junio 2023
Descripcion:
10. E.P. que lea 25 números, que determine e imprima cuantos son
cero y cuántos son positivos, así como que imprima aquéllos números
que sean negativos. Utilizar While-Do.
*/
#include <stdio.h>
#include <string.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "es_ES");
    int n, positivos, negativos; float num;
    n=0; positivos=0; negativos=0;
    while (n<25) //ejecutar mientras que n sea menor a 25
    {
        /* Entradas*/
        printf("Ingrese su numero %i: ", ++n); //aumentamos en 1 el contador antes de que print lea la variable
        scanf("%f",&num);
        /* Proceso*/
        if(num>0)
            positivos++; //aumentamos contador de positivos
        else 
            negativos++; //aumentamos contador de negativos
    }
    /* Salidas*/
    printf("el total de numeros positivos es %i, y el de negativos es %i", positivos, negativos);   

}
