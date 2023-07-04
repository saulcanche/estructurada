/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 20  de junio 2023
Descripcion:
40. E.P. que cree un archivo de texto (.txt) llamado "PE_Verano”, para
almacenar los datos de cinco alumnos de Programación Estructurada, que contenga el siguiente menú de opciones:
a. Crear dicho archivo .txt (matricula, nombres, apellidos, Unidad1,
Unidad2, Unidad3, Unidad4, ProyectoFinal), así como calcular y
guardar el Promedio de cada estudiante). 
b. Agregar los datos de cinco alumnos adicionales. 
c. Leer el archivo .txt y visualizar la información de los diez alumnos,
en formato de reporte. 
d. Salir
*/
#include <stdio.h>
#include <string.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "es_ES");
