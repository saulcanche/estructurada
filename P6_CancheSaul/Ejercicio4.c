/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 22 de junio 2023
Descripcion: 
4. E.P. que lea cuatro vectores de n elementos: 
un vector que contenga nombres de personas, un segundo con el peso, un tercero con la estatura y 
un cuarto vector con la edad de dichas personas. 
Se desea imprimir la información de aquellas personas que cuenten con edad mayor a la edad promedio de grupo; 
también determinar  el peso, la estatura y edad promedio de dichas personas, así como generar 
el siguiente reporte (dicho reporte determinará el promedio del peso, estatura y edad, 
de aquellás personas que aparecen en el listado):

                                                              REPORTE DE PERSONAL 

NOMBRE                                       PESO             ESTATURA             EDAD
________________________________________________________________________________
XXXXXXXXXXXXxxxxxxx                 99.99              99.99                    99
XXXXXXXXXXXXXXXXXX                99.99              99.99                    99

XXXXXXXXXXXXXXXXXX                 99.99              99.99                    99

________________________________________________________________________________               

PROMEDIOS                                     99.99              99.99                    99


*/
#include <stdio.h>
#include <locale.h>
void leerVectorInt(int numElementos, int enteros[], char tipo[15]);
void leerVectorFloat(int numElementos, float floats[], char tipo[15]);
void leerVectorNames(int numElementos, int tamanoMaximo, char strings[][tamanoMaximo]);
float sumVector(float vector[], int numElementos);
int sumVectorInt(int vector[], int numElementos);
void printTabla(int numElementos, char nombres[][30], float estatura[], float peso[], int edad[], float estaturaPromedio, float pesoPromedio, float edadPromedio);
void vectorMayoresPromedio(int numElementos, int numeros[], int promedio, int resultado[]);
void contarMayoresPromedio(int numElementos, float numeros[], float promedio, int *numMayoresPromedio);
int main(){
    setlocale(LC_ALL, "es_ES"); // local español
    int numElementos;
    printf("Ingrese la cantidad de personas que le gustaria leer: "); scanf("%i", &numElementos);
    char nombres[numElementos][30];
    float estatura[numElementos];
    float peso[numElementos];
    int edad[numElementos];
    leerVectorNames(numElementos, 30, nombres);
    leerVectorFloat(numElementos, estatura, "estatura");
    leerVectorFloat(numElementos, peso, "peso");
    leerVectorInt(numElementos, edad, "edad");
    float estaturaPromedio = sumVector(estatura, numElementos)/numElementos;
    float pesoPromedio = sumVector(peso, numElementos)/numElementos;
    float edadPromedio = (float)sumVectorInt(edad,numElementos)/numElementos;
    printf("\t\t\t\tDATOS DE TODOS LAS PERSONAS\t\t\t\t \n");
    printTabla(numElementos,nombres,estatura,peso,edad, estaturaPromedio,pesoPromedio, edadPromedio);
    int mayores;
    contarMayoresPromedio(numElementos,estatura,estaturaPromedio,&mayores);
    char nombresMayores[mayores][30];
    float estaturasMayores[mayores];
    float pesoMayores[mayores];
    int edadesMayores[mayores];
    float estaturaPromedioMayores = sumVector(estaturasMayores,mayores)/mayores;
    float pesoPromedioMayores = sumVector(pesoMayores,mayores)/mayores;
    float edadPromedioMayores = sumVectorInt(edadesMayores,mayores)/mayores;
    printf("\t\t\t\tDATOS PERSONAS CON EDAD MAYOR AL PROMEDIO\t\t\t\t \n");
    printTabla(mayores,nombresMayores, estaturasMayores,pesoMayores,edadesMayores,estaturaPromedioMayores,pesoPromedioMayores,edadPromedioMayores);
}

void leerVectorInt(int numElementos,int enteros[],
char tipo[15]) {
    for (int i = 0; i < numElementos; i++) {
    printf("Ingrese la/el %s %d: ",tipo,i+1);
    scanf("%d",&enteros[i]);
    }
}

void leerVectorFloat(int numElementos,float floats[],
char tipo[15]) {
    for (int i = 0; i < numElementos; i++) {
        printf("Ingrese la/el %s %d: ",tipo,i+1);
        scanf("%f",&floats[i]);
        }
}
void leerVectorNames(int numElementos,int tamanoMaximo,
char strings[][tamanoMaximo]) {
    for (int i = 0; i < numElementos; i++) {
        printf("Ingrese el nombre %d: ",i+1);
        scanf("%s",strings[i]);
    }
}
float sumVector(float vector[],int numElementos){
    float sum = 0;
    for(int i = 0; i < numElementos; i++){
        sum += vector[i];
        }
    return sum;
}
int sumVectorInt(int vector[],int numElementos){
    int sum = 0;
    for(int i = 0; i < numElementos; i++){
        sum += vector[i];
        }
    return sum;
}
void vectorMayoresPromedio(int numElementos,int numeros[],int promedio,int resultado[]){
    int numMayoresPromedio = 0;
    for (int i = 0; i < numElementos; i++){
        if (numeros[i] > promedio){
            resultado[numMayoresPromedio] = numeros[i];
            numMayoresPromedio++;
        }
    }
}
void contarMayoresPromedio(int numElementos,float numeros[],float promedio,int *numMayoresPromedio){
    *numMayoresPromedio = 0;
    for (int i = 0; i < numElementos; i++){
        if (numeros[i] > promedio){
            (*numMayoresPromedio)++;
        }
    }
}
void printTabla(int numElementos,char nombres[][30],float estatura[],float peso[],int edad[],float estaturaPromedio,float pesoPromedio,float edadPromedio){
printf("Nombre\t\tEstatura\tPeso\tEdad\n");
    for (int i = 0; i < numElementos; i++){
        printf("%s\t\t%.2f\t%.2f\t%d\n",nombres[i],estatura[i],peso[i],edad[i]);
    }
    printf("Promedio\t%.2f\t%.2f\t%.2f\n",estaturaPromedio,pesoPromedio,edadPromedio);
}