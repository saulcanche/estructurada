/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 20  de junio 2023
Descripcion:
38. E.P. que permita comprobar con malloc, si hay suficiente memoria
disponible (si el puntero es válido, es decir diferente de NULL); para
un arreglo de 10 números reales largos (double); si la hay, entonces
leer y luego, imprimir la dirección de memoria y los elementos de dicho
arreglo; si no, indicar un error en la asignación de memoria.
*/
#include <stdio.h>
#include <string.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "es_ES");
