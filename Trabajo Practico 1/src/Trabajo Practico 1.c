
#include <stdio.h>
#include <stdlib.h>
#include "aritmeticas.h"


int main()
{
	setbuf(stdout, NULL);

    char seguir='s';
    int opcion;
    float nro1;
    float nro2;
    int primerNumero=0;
    int segundoNumero=0;
    float opSuma;
    float opResta;
    float opDivision;
    float opMultiplicacion;
    double opFactorialA;
    double opFactorialB;



    while(seguir=='s')
    {
        system("cls");

        printf("                -CALCULADORA-\n\n\n");
        if(primerNumero==0)
        {
            printf("    1- Ingresar primer operando         ####  A      ####\n");
        }
        else
        {
            printf("    1- Ingresar primer operando         ####  A=%.2f ####\n", nro1);
        }
        if(segundoNumero==0)
        {
            printf("    2- Ingresar segundo operando         ####  B      ####\n");
        }
        else
        {
            printf("    2- Ingresar segundo operando         ####  B=%.2f ####\n", nro2);
        }
        printf("    3- Calcular las siguientes operaciones: \n");
        printf("    - Suma: A+B\n");
        printf("    - Resta: A-B\n");
        printf("    - Division: A/B\n");
        printf("    - Multiplicacion: A*B\n");
        printf("    - Factorial: A! y B!\n");
        printf("    4- Informar resultados \n");
        printf("    5- SALIR\n\n\n");
        printf("INGRESE UNA OPCION: ");
        scanf("%d", &opcion);
        switch(opcion)
        {

        case 1:
            printf("Ingrese el primer operando: ");
            scanf("%f", &nro1);
            primerNumero=1;
            break;

        case 2:
            printf("Ingrese el segundo operando: ");
            scanf("%f", &nro2);
            segundoNumero=1;
            break;

        case 3:
            if(primerNumero==0 || segundoNumero==0)
            {
                printf("ERROR. Por favor ingrese datos A y B \n");
                system("pause");
                break;
            }
            else
            {
            opSuma=suma(nro1,nro2);
            opResta=resta(nro1,nro2);
            opDivision=division(nro1,nro2);
            opMultiplicacion=multiplicacion(nro1,nro2);
            opFactorialA=factorial(nro1);
            opFactorialB=factorial(nro2);
            printf("Datos calculados con A=%.2f y B=%.2f\n", nro1, nro2);
            }
            system("pause");
            break;

        case 4:
            if(primerNumero==0 || segundoNumero==0)
            {
                printf("ERROR. Por favor ingrese datos A y B \n");
                system("pause");
                break;
            }
            else
            {

                printf("Resultados:\n");
                printf("El resultado de A+B es: %.2f\n", opSuma);
                printf("El resultado de A-B es: %.2f\n", opResta);
                if(nro2==0)
                {
                    printf("El resultado de A/B es: ERROR. No se puede divividir por 0\n");
                }
                else
                {
                    printf("El resultado de A/B es: %.2f\n", opDivision);
                }
                printf("El resultado de A*B es: %.2f\n", opMultiplicacion);


                if(nro1<0)
                {
                    printf("El factorial de A es: ERROR. No se puede calcular el factorial de numeros negativos.\n");
                }
                else if(validacionEntero(nro1) != 0)
                {
                    printf("El factorial de A es: ERROR. No se puede calcular el factorial de numeros enteros.\n");
                }
                else
                {
                    printf("El factorial de A es: %.0lf\n", opFactorialA);
                }

                if(nro2<0)
                {
                    printf("El factorial de B es: ERROR. No se puede calcular el factorial de numeros negativos.\n");
                }
                else if(validacionEntero(nro2) != 0)
                {
                    printf("El factorial de B es: ERROR. No se puede calcular el factorial de numeros enteros.\n");
                }
                else
                {
                    printf("El factorial de B es: %.0lf\n", opFactorialB);
                }

                system("pause");
                break;
            }

        case 5:
        {
            seguir='n';
            break;
        }
        default:
            printf("OPCION NO VALIDA\n");
            system("pause");
            break;
        }

    }


}
