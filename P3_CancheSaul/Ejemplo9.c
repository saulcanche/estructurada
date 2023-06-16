/* 
Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 7 de junio 2023
Descripcion: 
Programa para calcular el promedio de un alumno en sus 3 parciales  

*/ 
#include <stdio.h>

int GetCalificacion(int numAlu){
    int cali;
    printf("Digite las calificaciones del alumno del %i parcial:\n", numAlu);
    scanf("%d", &cali);
    return cali;
}
int main(){
    int cal1, cal2, cal3; float promedio;
    cal1 = GetCalificacion(1);
    cal2 = GetCalificacion(2);
    cal3 = GetCalificacion(3);
    promedio = (cal1+cal2+cal3)/3.; //el punto es para obtener un float
    if (promedio > 95)
        promedio = 100;
    printf("el promedio del alumno es %.2f", promedio);
    return 0;
}
