/* 
Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 7 de junio 2023
Descripcion: 
Ejemplo de algunas funcione de entrada y salida.
*/ 
#include <stdio.h>
int main(){
    // Entradas 
    char sonidos = '\a';
    char bs = '\b';
    //NO hay proceso 

    //salidas
    printf("%c %c", sonidos, sonidos);
    printf("ZZ");
    printf("%c %c", bs, bs);
    return 0;
}