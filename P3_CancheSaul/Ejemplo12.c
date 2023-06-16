/* 
Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 7 de junio 2023
Descripcion: 
Ejemplo de el uso de switch case en un menu con opciones para obtener distintas areas de figuras
*/
#include <stdio.h>
#define PI 3.14159
int main(){
    char opcion; int x, y; float area;
    printf("Este programa calcula las siguientes areas en cm2: \n");
    printf("Elige una opcion: \n");
    printf("A) Area de un triangulo\n"); 
    printf("B) Area de un circulo\n"); 
    printf("C) Area de un cuadrado\n"); 
    scanf("%c", &opcion);
    switch (opcion)
    {
        case 'A': case 'a': 
            printf("Digite la base y la altura: \n"); 
            scanf("%d%d", &x, &y);
            area = (x*y)/2.;
            break;
        case 'B': case 'b': 
            printf("¿Cual es el radio del circulo: \n"); 
            scanf("%d", &x);
            area = PI * x * x;
            break;
        case 'C': case 'c':  
            printf("¿Cuanto mide un lado del cuadrado?"); 
            scanf("%d", &x);
            area = x * x;
            break;
        default:
            printf("No existe esa opcion, vuelve a intentar: ");
            break;
    }
    printf("El area es: %.2f cm2\n", area);
    return 0;
}