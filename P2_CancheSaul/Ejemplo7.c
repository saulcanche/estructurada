/* 
Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 7 de junio 2023
Descripcion: 
Ejemplo que muestra el uso de algunos operadores en c 
*/ 
#include <stdio.h>
int main(){
    // Entrada
    int a = 7, b;
    //proceso
    b = ++a+3;
    b = b+a+++5;
    //Salida
    printf("%d, %d", a,b);
    return 0;
}