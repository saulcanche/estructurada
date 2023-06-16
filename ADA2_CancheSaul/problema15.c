/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 7 de junio 2023
Descripcion:
<E.P. que lea el nombre y la calificación del primer parcial de l@s N
alumn@s de Programación Estructurada y que cuente e imprima
cuantos alumnos aprobaron y el nombre de quienes reprobaron dicho
parcial. Utilizar Do-While*/
#include <stdio.h>
#include <locale.h>
const int MIN_APROBATORIO=70; //constante con el minimo aprobatorio para la escuela
int main(){
    setlocale(LC_ALL, "es_ES");
    int numAlumns, i, alumAprobados, alumReprobados; float cali; char name[10];
    numAlumns=0; i = 0;
    do{
        printf("ingresa el numero de alumnos: \n"); scanf("%i", &numAlumns);
        if (numAlumns<0)
        {
            printf("El numero de alumnos ingresado no es correcto.\nNo es posible tener un numero negativo de alumnos\n");
        }
        
    } while (numAlumns<0); //verificar que el numero de alumnos no sea negativo
    do
    { 
        printf("ingrese el nombre del alumno %i\n", ++i); scanf("%s", &name);
        printf("ingresa la calificacion de %s en el primer parcial\n", name); scanf("%f", &cali);
        if(cali>MIN_APROBATORIO){
            printf("El alumno: %s aprobo con una calificacion de %.2f\n", name, cali);
            alumAprobados++;
        } else{
            printf("El alumno: %s reprobo con una calificacion de %.2f\n", name, cali);
            alumReprobados++;
        }
    } while (i<numAlumns);
    printf("el total de alumnos aprobados es %i \n", alumAprobados);
    printf("el total de alumnos aprobados es %i \n", alumReprobados);
    return 0;
}
