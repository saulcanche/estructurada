/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 20  de junio 2023
Descripcion:
39. E.P. que reserve memoria con malloc para un arreglo de 5
elementos de tipo entero largo (long), rellenarlo con datos que digite el
usuario, luego utilizar realloc para ampliar dicho arreglo a 10
elementos e imprimir, la dirección de memoria y los elementos del
arreglo resultante.
*/
#include <stdio.h>
#include <string.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "es_ES");
