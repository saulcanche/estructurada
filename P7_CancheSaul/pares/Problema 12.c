/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 22 de junio 2023
Descripcion: 
12. Pedir n palabras al usuario y posteriormente ordenarlas alfabeticamente.
Utilizar metodo de ordenamiento (Burbuja, insercion, seleccion)*/

#include<stdio.h>
#include<conio.h> //permite getch.
#include<string.h> // permite strcmp y strcpy.

int main(){
    char nombre[10][20];
    char aux[20];//tiene que ser de igual o mayor tama�o que la segunda componente
    //de nombre porque aqu� copiaremos esa cadena.
    int i,j,k;
    int l=0;
    /*Entrada*/
    printf("Para terminar escriba * \n");
    do
        {
            printf("Introduce un nombre: ");
            gets(nombre[l]);//lee cadenas y las almacena.
            l++;
        }
    while (strcmp(nombre[l-1],"*")!=0);//permite comparar cadenas.
    /*Proceso*/
    // ORDENAR CADENAS
    for(i=0; i<l-1; i++)
    {
        k=i;
        strcpy(aux, nombre[i]);
        for(j=i+1; j<l; j++)
        {
            if(strcmp(nombre[j], aux)<0)
            {
                k=j;
                strcpy(aux, nombre[j]);
               //permite hacer una copia auxiliar de la cadena nombre[j];
            }
        }
        strcpy(nombre[k],nombre[i]);
        strcpy(nombre[i],aux);
    }
    /* Salidaas*/
    for(i=0; i<l; i++)
    {
        printf("%s",nombre[i]);
        printf("\n");
    }

  return 0;
}
