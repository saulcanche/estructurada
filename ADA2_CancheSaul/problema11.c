/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 7 de junio 2023
Descripcion:
11. E.P. que lea el nombre, el sueldo y la antigüedad de los 20
empleados de la tlapalería “Vaqueiros” y, que determine e imprima el
nombre de los empleados con salario mayor a $ 5,000.- y que tengan
entre 5 y 15 años de antigüedad. Utilizar While-Do.
Utilizar While-Do.
*/
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "es_ES");
    const int NUMERO_TRABAJADORES = 3;
    int i, sueldo, antiguedad; char nombre[11];
    i=0;
    while (i<NUMERO_TRABAJADORES) //20 empleados
    {
        /* Entradas */
        printf("ingrese su nombre: \n");
        scanf("%s", &nombre); //leemos nombre
        printf("Ingresa tu sueldo: \n");
        scanf("%i", &sueldo); //sueldo
        do
        {
            printf("Ingrese su antiguedad en la empresa: \n");
            scanf("%i", &antiguedad); //antiguedad
            if (antiguedad<0)
            {
                printf("La antiguedad ingresada no es valida \n");
            }
            
        } while (antiguedad <0); //verificar que la antiguedad ingresada no sea negativo
        
       
        /*Proceso*/
        if (sueldo > 5000 && antiguedad >= 5 && antiguedad <= 15){ //usamos 2 and para verificar las condiciones
            /*Salidas*/
            printf("El empleado cumple con los criterios: \n");
            printf("Nombre: %s |\t Salario: %i |\t Antiguedad: %i \n", nombre, sueldo, antiguedad);
        }
        i++; //aumentamos contador
    }
    
}
