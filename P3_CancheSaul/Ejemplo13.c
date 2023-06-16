/* 
Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 7 de junio 2023
Descripcion: 
Programa que redondea calificaciones y imprime un mensaje dependiendo de la calificacion:
*/ 
#include <stdio.h>
int main(){
    int cal;
    printf("¿Cual es la calificacion? \n"); scanf("%d", &cal);
    if (cal>=90) cal=90;
        else
            if(cal>=80) cal=80;
            else
                if (cal>=70) cal=70;
                else
                    if(cal>=60) cal=60;
                    else cal=50;
                    
switch (cal)
{
case 100: printf("Excelente");
    break;
case 90: printf("Muy bueno");
    break;
case 80: printf("Bueno");
    break;
case 70: printf("Regular");
    break;
case 60: printf("Malo");
    break;
case 50: printf("Reprovado");
    break;
default: printf("Calificacion no valida");
    break;
}
}