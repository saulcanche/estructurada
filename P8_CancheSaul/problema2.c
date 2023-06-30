/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 30  de junio 2023
Descripcion:
*/
/*2. Hacer una estructura llamada alumno, en la cual se tendran los
siguientes miembros: Nombre, edad, promedio, pedir datos al usuario 
para 3 alumnos, comprobar cual de los 3 tiene el mejor promedio y
posteriormente imprimir los datos del alumno*/
#include <stdio.h>
#include <locale.h>
struct alumno{
	char nombre[20];
	int edad;
	float promedio;
}alumnos[3];

int main(){
    setlocale(LC_ALL, "es_ES");
    	int i,pos;
	float mejorNota = 0.0;
    /* Entrada*/
	for(i=0;i<3;i++){
		fflush(stdin);
		printf("%i. Digite su nombre: ",i+1);
		gets(alumnos[i].nombre);
		printf("%i. Digite su edad: ",i+1);
		scanf("%i",&alumnos[i].edad);
		printf("Digite su promedio: ",i+1);
		scanf("%f",&alumnos[i].promedio);
		printf("\n");
	}
	
    /*Proceso*/
	for(i=0;i<3;i++){
		if(alumnos[i].promedio > mejorNota){
			mejorNota = alumnos[i].promedio;
			pos = i;
		}
	}
    /* SAlida*/
	//Imprimimos los datos del mejor promedio
	printf("\nEl alumno con la mejor nota es: \n");
	printf("\nNombre: %s",alumnos[pos].nombre);
	printf("\nEdad: %i",alumnos[pos].edad);
	printf("\nPromedio: %.2f\n\n",alumnos[pos].promedio);
	
	system("pause");
	return 0;
}