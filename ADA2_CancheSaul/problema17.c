/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 7 de junio 2023
Descripcion:
17. Una Compañía efectúa cálculos para su reporte anual de utilidades
y añadirá un pequeño incentivo de antigüedad para sus empleados, que consiste en un porcentaje de su sueldo, de acuerdo a la siguiente
tabla:
Antigüedad          Porcentaje          
De 1 a 3 años           1 %
De 4 a 6 años           2 %
De 7 a 9 años           4 %
De 10 a 15 años         5 %
Más de 15 años 10%
E.P. que lea el nombre, la antigüedad y sueldo de cada uno de los 50
empleados y, que calcule e imprima el nombre y la cantidad que le
corresponde a cada uno. Además, determinar e imprimir el monto total
que debe pagar la empresa, por los incentivos otorgados. Utilizar For.
 */
#include <stdio.h>
#include <string.h>
#include <locale.h>
const int NUM_TRABAJADORES = 2; //constante del numero de trabajadores en la empresa
int main(){
    setlocale(LC_ALL, "es_ES");
    char name[15]; int antiguedad, i; float sueldo, incentivoAntiguedad, totalIncentivos;
    for (i = 0; i < NUM_TRABAJADORES; i++)
    {
        /* Entradas */
        printf("Ingrese el nombre del trabajador #%i: \n", i+1); scanf("%s", &name);
        do
        {
            printf("Ingresa el sueldo de %s \n", name); scanf("%f", &sueldo);
            if (sueldo < 0)
            {
                printf("No es posible que el empleado tenga un sueldo negativo \n");
            }
            
        } while (sueldo < 0);
        do
        {
            printf("Ingresa la antiguedad de %s \n", name); scanf("%i", &antiguedad);
            if (antiguedad<0 || antiguedad > 100)
            {
                printf("No es posible que el empleado tenga una antiguedad negativa o mayor a 100 \n");
            }
             
        } while (antiguedad<0 || antiguedad > 100);
        //Evaluacion de cuanto le corresponde de incentivo
                        /*De 1 a 3 años           1 %
                        De 4 a 6 años           2 %
                        De 7 a 9 años           4 %
                        De 10 a 15 años         5 %
                        Más de 15 años 10% */ 
        /* Proceso*/
        if (antiguedad>=1 && antiguedad <=3)
        {
            incentivoAntiguedad = sueldo*0.01;
        }else if (antiguedad>=4 && antiguedad <=6)
        {
            incentivoAntiguedad = sueldo*0.02;
        }else if (antiguedad>=7 && antiguedad <=9)
        {
            incentivoAntiguedad = sueldo*0.04;
        }else if (antiguedad>=10 && antiguedad <=15)
        {
            incentivoAntiguedad = sueldo*0.05;
        }else //apartir de 15 años
        {
            incentivoAntiguedad = sueldo*0.1;
        }
        totalIncentivos += incentivoAntiguedad;

        /* Salidas*/
        printf("id\tnombre\tsueldo\tincentivo\n");
        printf("%i\t%s\t%.2f\t%.2f\n", i+1, name, sueldo, incentivoAntiguedad);
    }
    printf("El pago total en incentivos fue de %.2f", totalIncentivos);
}
