/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 14 de junio 2023
Descripcion:
E.P. que lea 10 números (N) y que determine e imprima los que
sean mayores a 100. Utilizar While-Do.*/
#include <stdio.h>
#include <string.h>
#include <locale.h>
void f(int* );
int main(){
    setlocale(LC_ALL, "es_ES"); // local español
    int x = 47;
    printf("X = %i \n", x);
    printf("Direccion de x= %x\n", &x);
    f(&x);
    printf("x = %i\n", x); 
    return 0;
}
void f(int* r){
    printf("r=%i\n", r);
    *r = 5;
    printf("r=%i\n", *r);
}
