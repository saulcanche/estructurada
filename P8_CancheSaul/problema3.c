/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 30  de junio 2023
Descripcion:
*/
/*3. Realizar un programa en C que lea un arreglo de estructuras los datos
de N empleados de la empresa y que imprima los datos del empleado con
mayor y menor salario.*/

#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
struct empleado{
	char nombre[20];
	char sexo[20];
	float salario;	
}empleados[100];

int main(){
    setlocale(LC_ALL, "es_ES");
	int i,n,pmay,pmen;
	float mayor = 0.0, menor = 9999999;
	printf("Digite el numero de empleados de la empresa: ");
	scanf("%i",&n);
    /*Entradas*/
	for(i=0;i<n;i++){
		fflush(stdin);
		printf("%i. Digite su nombre: ",i+1);
		gets(empleados[i].nombre);
		fflush(stdin);
		printf("%i. Digite su sexo: ",i+1);
		gets(empleados[i].sexo);
		printf("%i. Digite su salario: ",i+1);
		scanf("%f",&empleados[i].salario);
		printf("\n");
	}
    /* Proceso*/
	//Comprobando el mayor y menor Salario
	for(i=0;i<n;i++){
		if(empleados[i].salario > mayor){ 
			mayor = empleados[i].salario;
			pmay = i;
		}
		else if(empleados[i].salario < menor){
			menor = empleados[i].salario;
			pmen = i;
		}
	}
	
    /* Salidas*/
	printf("\nEl empleado con el mayor salario es: \n");
	printf("\nNombre: %s",empleados[pmay].nombre);
	printf("\nSexo: %s",empleados[pmay].sexo);
	printf("\nSalario: %.2f",empleados[pmay].salario);
	
	printf("\n\nEl empleado con el menor salario es: \n");
	printf("\nNombre: %s",empleados[pmen].nombre);
	printf("\nSexo: %s",empleados[pmen].sexo);
	printf("\nSalario: %.2f\n",empleados[pmen].salario);
	
	system("pause");
	return 0;
}
