/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 7 de junio 2023
Descripcion:
Leer un número entero, determinar e imprimir
cuántos dígitos contiene10. E.P. que lea 25 números, que determine e imprima cuantos son
cero y cuántos son positivos, así como que imprima aquéllos números
que sean negativos. Utilizar While-Do.
*/
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "es_ES");
    int num, num1, c;
    c = 0;
    /* Entradas*/
    printf("Dame un número entero: ");
    scanf("%i", &num);
    num1 = num;
    /* Proceso */
    do
    {
        num /= 10;
        c++;
    } while (num >= 1);
    /* Salida*/
    printf("El numero tiene %i Digitos", c);
    return 0;
}
