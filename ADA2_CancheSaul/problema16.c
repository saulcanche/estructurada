/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 7 de junio 2023
Descripcion:
Los estudiantes de Ingeniería de software aplicaron un examen de
admisión con 100 preguntas. E.P. que lea el nombre y el número de
respuestas correctas para cada una de las N personas que lo
presentaron y, que determine e imprima para cada uno, su nombre y
su calificación basados en la siguiente tabla: Utilizar Do-While. 
Respuestas Correctas         Calificacion Obtenida
30>R <=50                       50
50>R <=60                       60 
60>R <=65                       70
65>R <=75                       80
75>R <=90                       90
R > 90                          100
 */
#include <string.h>
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "es_ES");
    float cali=0; int numAlumns, i, respuestas;
    char name[14];
    /* Entradas*/

    printf("Ingrese el numero de alumnos: "); scanf("%i", &numAlumns);
    i=1;
    do
    {   
        do
        {
            printf("ingrese el numero de respuestas correctas del alumno %i: \n", i); scanf("%i", &respuestas);
            if (respuestas<0 || respuestas>100)
            {
                printf("El numero de respuestas ingresado no esta en el rango esperado\n(0-100)\n");
            }
            
        } while (respuestas<0 || respuestas>100);
        
        printf("ingrese el nombre del alumno %i: \n", i); scanf("%s", &name);
        /* Proceso */
        if (respuestas > 30 && respuestas <= 50) {
        cali = 50;
        } else if (respuestas > 50 && respuestas <=60) {
        cali = 60;
        } else if (respuestas >60 && respuestas <=65) {
        cali = 70;
        } else if (respuestas >65 && respuestas <=75) {
        cali = 80;
        } else if (respuestas >75 && respuestas <=90) {
        cali = 90;
        } else if (respuestas >90) {
        cali = 100;
        } else {
            printf("El numero ingresado esta fuera del rango esperado");
            cali = 0;
        }
        /* Salidas*/
        printf("nombre \t calificación\n");
        printf("%s\t%.2f\n", name, cali);
        i++;
    } while (i<=numAlumns);
    
    return 0;
}