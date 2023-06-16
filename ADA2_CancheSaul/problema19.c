/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 7 de junio 2023
Descripcion:
19. Un restaurante ofrece hamburguesas sencillas, dobles y triples, las
cuales tienen un costo de $60.00, $80.00 y $100.00, respectivamente.
La empresa acepta tarjetas de crédito con un cargo adicional de 3%sobre la compra. Los clientes pueden hacer su pedido con cualquier
cantidad de hamburguesas de los tipos que deseen comer. E.P. para
determinar cuánto debe pagar cada uno de los N clientes que llegan al
establecimiento. También, al final del día, se requiere imprimir el
monto total de las ventas, así como el total de las comisiones
cobradas, por tarjeta de crédito. Utilizar For.*/
#include <locale.h>
#include <stdio.h>
int main() {
	setlocale(LC_ALL, "es_ES");
	const float SENSILLA = 60.00; const float DOBLE = 80.00; const float TRIPLE = 100.00; //declaramos nuestras constantes de precio
	int tipo, N, tipoPago, i, numClientes; float total, comision, totalComision; //Definimos las variables
    do
    {
        printf("Ingresa el numero de clientes \n"); scanf("%i", &numClientes);
        if (numClientes<0){
            printf("Ingreso un numero de clientes negativo y no es posible \n");
        }
    } while (numClientes<0);
    
    for (i = 0; i < numClientes; i++)
    {
         /* Entradas */
        total = 0;
        comision = 0;
        printf("Introduce el número de hamburguesas: "); scanf("%d", &N);
        printf("Introduce el tipo de hamburguesa \n1) para sencilla\n2) para doble \n3) para triple \nOpcion: "); scanf("%d", &tipo);
        // Calcular el costo total basado en el tipo de hamburguesa
        switch(tipo) {
            case 1:
                total = N * SENSILLA; //numero de hamburgesas por el precio de sensilla
                break;
            case 2:
                total = N * DOBLE; //numero de hamburgesas por el precio de doble
                break;
            case 3:
                total = N * TRIPLE; //numero de hamburgesas por el precio de triple
                break;
            default:
                printf("%i no es una opcion valida, por favor ingresa una opcion valida\n", tipo);
        }
        
        printf("El costo de su pedido es de: $%.2f\n", total);
        printf("Escoja su opcion de pago\n1)Pago con tarjeta\n2)Pago en efectivo\nEl pago con tarjeta tiene una comision del 3 porciento\nopcion: ");
        scanf("%i", &tipoPago);
        switch (tipoPago)
        {
        case 1:
            // Añadir el cargo del 3% por el uso de tarjeta de crédito
            comision = total * 0.03;
            total += comision;
            totalComision += comision;
            break;
        default:
            break;
        }
        printf("El costo total final de su pedido es de $%.2f\n", total);

    }
    printf("las comisiones obtenidas durante el dia son $%.2f\n", totalComision); 
    return 0;
}
	


