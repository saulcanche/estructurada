/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 7 de junio 2023
Descripcion:
imprimir las letras del alfabeto en mayúsculas
*/
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "es_ES");
    char letra;
    // Entrada, proceso y salida;
    printf("Estas son las letras del alfabeto: \n");
    for(letra='A';letra<='Z';letra ++)
        printf("%c\t", letra);
    return 0;
}