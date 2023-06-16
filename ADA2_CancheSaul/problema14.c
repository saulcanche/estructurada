/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 7 de junio 2023
Descripcion:
14. E.P. que lea las calificaciones de la prueba de diagnóstico de l@s
N alumn@s del curso de Programación Estructurada, determine e
imprima el promedio de grupo y cuántos tuvieron calificación mayor a
dicho promedio de grupo. Utilizar Do-While. */
#include <stdio.h>
#include <string.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "es_ES");
    int i, AlumsMayorPromedio, numAlumns; float cali, promedio, sumCali;
    i = 0;
    AlumsMayorPromedio = 0; sumCali=0.0;
    do
    {
        printf("ingresa el numero de alumnos: \n"); scanf("%i", &numAlumns);
        if (numAlumns<0)
        {
            printf("El numero de alumnos ingresado no es correcto.\nNo es posible tener un numero negativo de alumnos\n");
        }
        
    } while (numAlumns<0);
        
    do{ /* Entradas*/
        i++;
        do{
            printf("Ingrese la calificacion del alumno %i: \n", i); scanf("%f", &cali);
            if (cali<=0 || cali>=100)
            {
                printf("la calificacion ingresada no es valida\nLas calificaciones estan en escala 100\n (0-100)\n");
            }
            
        } while (cali<=0 || cali>=100);
        /* Proceso */
        sumCali += cali;
    } while (i < numAlumns);
    promedio = sumCali/numAlumns;
    i = 0;
    do{
        i++;
         do{
            printf("Ingrese la calificacion del alumno %i: \n", i); scanf("%f", &cali);
            if (cali<=0 || cali>=100)
            {
                printf("la calificacion ingresada no es valida\nLas calificaciones estan en escala 100\n (0-100)\n");
            }
            
        } while (cali<=0 || cali>=100);
        if(cali > promedio){
            AlumsMayorPromedio++;
        }
    } while (i < numAlumns);
    /* SAlidas*/
    printf("El promedio del grupo fue de %.2f\n", promedio);
    printf("El numero de alumnos con calificacion mayor al promedio fue de %i", AlumsMayorPromedio);
    return 0;
}