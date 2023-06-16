/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 7 de junio 2023
Descripcion:
17. Una Compañía efectúa cálculos para su reporte anual de utilidades
y añadirá un pequeño incentivo de antigüedad para sus empleados, que consiste en un porcentaje de su sueldo, de acuerdo a la siguiente
tabla:
Antigüedad          Porcentaje          
De 1 a 3 años           1 %
De 4 a 6 años           2 %
De 7 a 9 años           4 %
De 10 a 15 años         5 %
Más de 15 años 10%
E.P. que lea el nombre, la antigüedad y sueldo de cada uno de los 50
empleados y, que calcule e imprima el nombre y la cantidad que le
corresponde a cada uno. Además, determinar e imprimir el monto total
que debe pagar la empresa, por los incentivos otorgados. Utilizar For.
 */
#include <stdio.h>
#include <string.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "es_ES");
