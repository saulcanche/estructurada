/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 20  de junio 2023
Descripcion:
E.P. que utilice dos estructuras una llamada promedio que tendrá
los siguientes miembros: Unidad1, Unidad2, Unidad3, Unidad4 y
ProyectoFinal y otra estructura llamada alumno, que tendrá los
siguientes miembros: matricula, nombre, edad, sexo y nombre de
equipo; se debe anidar dicha estructura promedio, en la estructura
alumno, así como leer los datos para los 30 alumnos de Programación
Estructurada; se pide determinar e imprimir los datos (matricula,
nombre y NombreEquipo) y el promedio individual, de aquellas
alumnas que sean mujeres y cuyo promedio, sea mayor al promedio
de grupo. Además, debe imprimir los resultados con el siguiente
formato de reporte, indicando el promedio de dichas alumnas.
*/
#include <stdio.h>
#include <string.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "es_ES");
