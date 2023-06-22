/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 22 de junio 2023
Descripcion: 
4. E.P. que lea cuatro vectores de n elementos: 
un vector que contenga nombres de personas, un segundo con el peso, un tercero con la estatura y 
un cuarto vector con la edad de dichas personas. 
Se desea imprimir la información de aquellas personas que cuenten con edad mayor a la edad promedio de grupo; 
también determinar  el peso, la estatura y edad promedio de dichas personas, así como generar 
el siguiente reporte (dicho reporte determinará el promedio del peso, estatura y edad, 
de aquellás personas que aparecen en el listado):

                                                              REPORTE DE PERSONAL 

NOMBRE                                       PESO             ESTATURA             EDAD
________________________________________________________________________________
XXXXXXXXXXXXxxxxxxx                 99.99              99.99                    99
XXXXXXXXXXXXXXXXXX                99.99              99.99                    99

XXXXXXXXXXXXXXXXXX                 99.99              99.99                    99

________________________________________________________________________________               

PROMEDIOS                                     99.99              99.99                    99


*/
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "es_ES"); // local español
}