/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 7 de junio 2023
Descripcion: 
2. E.P. que determine e imprima la calificación final de un alumno del
curso “Programación Estructurada”. Se deben leer y validar las
calificaciones (proporcionadas en escala 0-100). De tal forma, el
desglose de dicha evaluación tiene los siguientes porcentajes: 40%,
exámenes, 30%, tareas, 20%, proyecto final y 10%, participación en
clase.*/
#include <stdio.h>
#include <locale.h>
int main(){
/* Entradas */
    setlocale(LC_ALL, "es_ES");
    float exam, tareas, proyecto, participacion, calificacion; //declaracion de variables
    printf("Ingrese la calificacion obtenida en examenes: ");
    scanf("%f", &exam); //lectura de valor de examen
    printf("Ingrese la calificacion obtenida en tareas: ");
    scanf("%f", &tareas); //lectura de valor tareas
    printf("Ingrese la calificacion obtenida en el proyecto: ");
    scanf("%f", &proyecto); //lectura proyecto
    printf("Ingrese la calificacion obtenida por participacion: ");
    scanf("%f", &participacion); //lectura participacion
/* Proceso*/
    calificacion = exam * .40 + tareas * .30 + proyecto * .20 + participacion * .10; //calculo calificacion
/*Salida */
    printf("su calificacion es de %.2f", calificacion) ; //impresion calificacion
    return 0;
}
