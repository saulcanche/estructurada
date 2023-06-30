/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 30  de junio 2023
Descripcion: cleamos la estructura deportista y el corredor uno despues preguntamos al usuario por los datos 
del corredor 1 y los guardamos en la estructura corredor 1
*/
#include <stdio.h>
#include <locale.h>
struct deportista
{
    char nombre[20];
    int edad;
    char sexo[10];
    char club[20];
} corredor1;

int main(){
   setlocale(LC_ALL, "es_ES");
   printf("Digite su nombre: ");
   gets(corredor1.nombre);
   printf("Digite su edad: ");
   scanf("%i", &corredor1.edad);
   fflush(stdin);
   printf("Digite su sexo: ");
   gets(corredor1.sexo);
   printf("Digite su club: ");
   gets(corredor1.club);
}

