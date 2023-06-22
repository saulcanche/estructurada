/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 20  de junio 2023
Descripcion:
E.P. que lea un vector de N elementos, el cual se sabe tiene un
elemento negativo y otro positivo y, que determine e imprima su
posición.
*/
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "es_ES");
    int n, positivos, negativos;
    /* Entradas */
    printf("Ingrese la cantidad de numeros que deasea ingresar:  "); scanf("%i", &n);
    int numeros[n], posPositivos[n], posNegativos[n];
    positivos = 0; negativos = 0;
    for(int i = 0; i < n; i++){
        printf("Ingrese el numero %i:", i+1);
        scanf("%d", &numeros[i]);
    }
    /* Proceso */
    for (int i = 0; i < n; i++) {
        if (numeros[i] > 0)
        {
            posPositivos[positivos] = i;
            positivos++;
        }else if (numeros[i] < 0)
        {
            posNegativos[negativos] = i;
            negativos++;
        }
    }
    /* Salida*/
    printf("Ingresaste un total de %i numeros positivos y un total de %i numeros negativos \n", positivos, negativos);
    printf("Los numeros positivos se encuentran en las posiciones: ");
    for (int i = 0; i < positivos; i++)
    {
        printf("%i, ", posPositivos[i]);
    }
    printf("Los numeros negativos se encuentran en las posiciones: ");
    for (int i = 0; i < negativos; i++)
    {
        printf("%i, ", posNegativos[i]);
    }
    return 0;
}