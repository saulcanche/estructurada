/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 7 de junio 2023
Descripcion: 
18. Se llevará a cabo en la Universidad el concurso Srita. Simpatía.
Existen dos candidatas: Hortencia y Anacreta. E.P. que lea el voto de
los N alumn@s y que determine e imprima el nombre de la ganadora.
Considerar la posibilidad de votos nulos y empate en el concurso.
Utilizar For y funciones con paso de parámetro*/
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "es_ES");
    int i, votosAna, votosHortencia, votosNulos, numAlumns, voto;
    char ganadora[20] = "";
    votosAna = 0;
    votosHortencia = 0;
    votosNulos = 0; 
    /* Entradas */
    do{
        printf("Ingrese el numero de almunos: ");
        scanf("%i", &numAlumns);
        if(numAlumns<0){
            printf("El numero de alumnos que ingreso es negativo \n");
        }
    }while(numAlumns < 0);
    for(i = 0; i < numAlumns; i++){
        printf("Por quien desea botar \n1) Anacreta\n2) Hortencia\nSi desea anular su voto precione cualquier otro numero entero: ");
        scanf("%i", &voto);
        /* Proceso*/
        if(voto == 1){
            votosAna ++;
        }else if(voto == 2){
            votosHortencia++;
        }else{
            votosNulos++;
        }
    }
    if(votosAna > votosHortencia){
        strcpy(ganadora, "Anacreta");
    }else if(votosAna < votosHortencia){
        strcpy(ganadora, "Hortencia");
    }else{
        strcpy(ganadora, "empate");
    }
    printf("hubo un total de votos de %i\nAna tuvo un total de %i\nHortencia recibio un total de %i\n El resultado fue: %s", votosAna+votosHortencia+votosNulos, votosAna, votosHortencia, ganadora);
}