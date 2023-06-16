/* 
Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 7 de junio 2023
Descripcion: 
3. E.P. que determine e imprima el volumen de la tierra. Considerar
que es un esferoide V= 4/3 = PI * a² * b. Dónde: a = radio ecuatorial =
6378.137 kms, b = radio polar = 6356.752 kms.
*/ 
#include <stdio.h>
#include <locale.h>
int main(){
/*Entradas*/
const float PI = 3.14159; //Contante PI
setlocale(LC_ALL, "es_ES");
float A = 6378.137; //radio ecuatorial
float B= 6356.752; //radio polar
/* proceso */
float V = (4/3) * PI * A * A * B; //uso de formula calcular volumen tierra
/* Salida*/
printf("el volumen de la tierra es %.5f", V);
return 0; 
}