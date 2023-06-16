/* 
Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 7 de junio 2023
Descripcion: 
Programa que cobra a las personas dependindo si son estudiantes o no, los estudiantes tienen descuento  

*/
 #include <stdio.h>
 //entradas
 #define I 100
 #define M 150
 int main(){
    int tipo;
    printf("si la persona es alumno de la universidad oprima (1):\n");
    printf("si no es alumno oprima(2): \n");
    scanf("%d", &tipo); //entradas 
    if (tipo == 1) //proceso
    //salidas
        printf("el pago del alumno debe ser de $%.2f", (I + M) * 0.50); //Alumnos tienen 50% de descuento
    else
        printf("el pago si no es alumno debe ser de: $%d", I+M);
    return 0;
 }