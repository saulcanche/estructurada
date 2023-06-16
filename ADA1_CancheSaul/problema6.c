/* 
Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 7 de junio 2023
Descripcion: 
E.D.F. que lea la base y la altura de tres triángulos rectángulos
diferentes y que calcule e imprima, cual es el área del triángulo mayor.
Utilizar if
*/ 
#include <stdio.h>
#include <locale.h>
/* Funcion para pedir un numero al usuario*/
float ObtenerNumero(char Tipo[20]){ //La funcion recibe un string y lo usa en una sentencia
    float number;
    printf("Ingrese su %s:", Tipo); //muestra en pantalla que el usuario ingrese una cosa
    scanf("%f", &number); //lectura numero
    return number; //devuelve numero
}
/* FUNCION PARA OBTENER EL AREA DE UN RECTANGULO
    usa la funcion leer numero para leer los datos y luego devuelve el area*/
float ObtenerArea(){
    float base, altura;
    base = ObtenerNumero("Base"); //llamamos obtener numero con Base
    altura = ObtenerNumero("Altura"); //llamamos obtener numero con altura
    return 0.5 * base * altura; //calculamos area y la devolvemos
}

int main(){
    setlocale(LC_ALL, "es_ES");
    float area1, area2, area3, areaMayor;
    int triangulo;
    /* Entradas*/
    printf("ingrese los datos del triagulo 1: \n");
    area1 = ObtenerArea(); //llamo funcion obtener area
    printf("ingrese los datos del triangulo 2: \n");
    area2 = ObtenerArea(); //llamo funcion obtener area
    printf("ingrese los datos del triangulo 3: \n");
    area3 = ObtenerArea(); //llamo funcion obtener area
    /* Proceso*/
    areaMayor = area1; //asumimos que el area 1 es el mayor
    triangulo = 1; //asumimos que el triangulo 1 es el mayor
    if (area2 > areaMayor){ //comparamos area 2 con mayor
        areaMayor=area2; //si es verdad area2 es el nuevo mayor
        triangulo = 2; //num triagnulo mayor
    }
    if (area3 > areaMayor){ //comparamos area 2 con mayor
        areaMayor=area3; //si es verdad area 3 es el nuevo mayor
        triangulo = 3; //num triangulo mayor
    }
    /* Salidas*/
    printf("el triangulo con el mayor area es mayor es %i con un area de: %.2f", triangulo, areaMayor);
    return 0;
} 