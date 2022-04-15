#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"

int main()
{
	setbuf(stdout, NULL);

    char seguir='s';
    int opcion;
    float kilometros;
    int primerNumero=0;
    int segundoNumero=0;
    int flagCalculos=0;
    float precioAerolineas;
    float precioLatam;
    float descDebitoAa;
    float intCreditoAa;
    float arsAbtcAa;
    float precioXkmAa;
    float descDebitoLatam;
    float intCreditoLatam;
    float arsAbtcLatam;
    float precioXkmLatam;
    float diferencia;

    while(seguir=='s')
    {
        system("cls");
        printf("         --TITULO--\n\n\n");

        if(primerNumero==0)
        {
            printf("1. Ingresar Kilometros: ( km=x) \n");
        }
        else
        {
            printf("1. Ingresar Kilometros: (km= %.2f)\n", kilometros);
        }

        if(segundoNumero==0)
        {
            printf("2. Ingresar Precio de Vuelos: (Aerolineas=y, Latam=z) \n");
            printf("  - Precio vuelo Aerolineas: \n");
            printf("  - Precio vuelo Latam: \n");

        }
        else
        {
            printf("2. Ingresar Precio de Vuelos: (Aerolineas=%.2f, Latam=%.2f) \n", precioAerolineas, precioLatam);
            printf("  - Precio vuelo Aerolineas:  %.2f\n", precioAerolineas);
            printf("  - Precio vuelo Latam:  %.2f\n", precioLatam);

        }



        printf("3. Calcular todos los costos: \n");
        printf("  a) Tarjeta de débito (descuento 10%%)\n");
        printf("  b) Tarjeta de crédito (interés 25%%) \n");
        printf("  c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos) \n");
        printf("  d) Mostrar precio por km (precio unitario) \n");
        printf("  e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas) \n");

        printf("4. Informar Resultados  \n");
        printf("5. Carga forzada de datos  \n");

        printf("6. Salir \n\n\n");

        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            printf("Ingresar Kilometros: ");
            scanf("%f", &kilometros);
            primerNumero=1;
            break;
        case 2:
            printf("Ingrese precio de vuelo de Aerolineas: ");
            scanf("%f", &precioAerolineas);
            printf("Ingrese precio de vuelo de Latam: ");
            scanf("%f", &precioLatam);
            segundoNumero=1;
            break;
        case 3:
            if(primerNumero == 0 || segundoNumero ==0)
            {
                printf("ERROR. Hay datos sin ingresar");
                break;
            }
            else
            {

                descDebitoAa = descuentoDebito(precioAerolineas);
                intCreditoAa = interesCredito(precioAerolineas);
                arsAbtcAa = arsToBtc(precioAerolineas);
                precioXkmAa= precioPorKm(precioAerolineas, kilometros);
                descDebitoLatam = descuentoDebito(precioLatam);
                intCreditoLatam = interesCredito(precioLatam);
                arsAbtcLatam = arsToBtc(precioLatam);
                precioXkmLatam= precioPorKm(precioLatam, kilometros);
                diferencia = diferenciaPrecio(precioAerolineas, precioLatam);
                flagCalculos=1;

                printf("Costos calculados satisfactoriamente\n");

            }
            break;
        case 4:
            if(primerNumero ==1 && segundoNumero ==1 && flagCalculos == 1)
            {
                system("cls");
                printf("Kms Ingresados: %.2f km\n\n", kilometros);
                printf("Precio Aerolineas: %.2f\n", precioAerolineas);
                printf("a) Precio con tarjeta de debito: $%.2f\n", descDebitoAa);
                printf("b) Precio con tarjeta de credito: $%.2f\n", intCreditoAa);
                printf("c) Precio pagando con bitcoin: $%.2f\n", arsAbtcAa);
                printf("d) Precio unitario: $%.2f\n\n", precioXkmAa);
                printf("Precio Latam: %.2f\n", precioLatam);
                printf("a) Precio con tarjeta de debito: $%.2f\n", descDebitoLatam);
                printf("b) Precio con tarjeta de credito: $%.10f\n", intCreditoLatam);
                printf("c) Precio pagando con bitcoin: $%.10f\n", arsAbtcLatam);
                printf("d) Precio unitario: $%.2f\n\n", precioXkmLatam);
                printf("La diferencia de precio es: $ %.2f\n", diferencia);

            }
            else if(flagCalculos==0 && primerNumero==1 && segundoNumero==1){
                printf("Debe calcular los costos previamente \n.");
            }
            else{
                printf("Ingrese datos\n");
            }
            break;
        case 5:
                kilometros=7090;
                precioAerolineas=162965;
                precioLatam=159339;
                descDebitoAa = descuentoDebito(precioAerolineas);
                intCreditoAa = interesCredito(precioAerolineas);
                arsAbtcAa = arsToBtc(precioAerolineas);
                precioXkmAa= precioPorKm(precioAerolineas, kilometros);
                descDebitoLatam = descuentoDebito(precioLatam);
                intCreditoLatam = interesCredito(precioLatam);
                arsAbtcLatam = arsToBtc(precioLatam);
                precioXkmLatam= precioPorKm(precioLatam, kilometros);
                diferencia = diferenciaPrecio(precioAerolineas, precioLatam);

                system("cls");
                printf("Kms Ingresados: %.2f km\n\n", kilometros);
                printf("Precio Aerolineas: %.2f\n", precioAerolineas);
                printf("a) Precio con tarjeta de debito: $%.2f\n", descDebitoAa);
                printf("b) Precio con tarjeta de credito: $%.2f\n", intCreditoAa);
                printf("c) Precio pagando con bitcoin: $%.10f\n", arsAbtcAa);
                printf("d) Precio unitario: $%.2f\n\n", precioXkmAa);
                printf("Precio Latam: %.2f\n", precioLatam);
                printf("a) Precio con tarjeta de debito: $%.2f\n", descDebitoLatam);
                printf("b) Precio con tarjeta de credito: $%.2f\n", intCreditoLatam);
                printf("c) Precio pagando con bitcoin: $%.10f\n", arsAbtcLatam);
                printf("d) Precio unitario: $%.2f\n\n", precioXkmLatam);
                printf("La diferencia de precio es: $ %.2f\n", diferencia);

            break;
        case 6:
            seguir='n';
            break;
        default:
            printf("Opcion no valida\n");
            system("pause");
            break;
        }

        system("pause");

    }
    return 0;
}
