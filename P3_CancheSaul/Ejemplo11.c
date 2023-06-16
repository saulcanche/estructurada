/* 
Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 7 de junio 2023
Descripcion: 
Ejemplo de como funciona la division entre diferentes tipos de datos  

*/ 
#include <stdio.h>
int main(){ 
    int dia;
    printf("Escribe el número de día: \n");
    //lectura de datos
    scanf("%d", &dia); 
    switch (dia) //proceso
    //salida
    {
    case 1: 
        printf("El dia %d es Lunes", dia);
        break;
    case 2: 
        printf("El dia %d es Martes", dia);
        break;
    case 3:
        printf("El dia %d es Miercoles", dia);
        break;
    case 4:        
        printf("El dia %d es Jueves", dia);
        break;
    case 5:
        printf("El dia %d es Viernes", dia);
        break;
    case 6:
        printf("El dia %d es Sabado", dia);
        break;
    case 7:
        printf("El dia %d es Domingo", dia);
        break;
    default:
        printf("%d no es un dia valido, por favor ingresa un dia valido.", dia);
        break;
    }
    return 0;
}
