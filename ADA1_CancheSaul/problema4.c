/* 
Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 7 de junio 2023
Descripcion: 
E.P. que lea tres números enteros y si el primero es positivo,
calcular e imprimir el producto de los otros dos; de lo contrario, calcular
la suma. Utilizar If.
*/ 
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "es_ES");
    float num1, num2, num3, result; //declaracion de variables
    /* Entradas*/
    printf("Ingresa un numero: ");
    scanf("%f", &num1);    
    printf("Ingresa un segundo numero: ");
    scanf("%f", &num2);
    printf("Ingresa un tercer numero: ");
    scanf("%f", &num3);
    /* Proceso*/
    if (num1 > 0){ //si numero es mañor que cero multiplica los dos numeros siguientes
        result = num2 * num3; 
    } else { //caso contrario, suma los numeros siguientes
        result = num2 + num3;
    }
    /*Salida*/
    printf("el resultado es %f", result);
    return 0;
}
