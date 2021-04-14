#include <stdio.h>
#include <stdlib.h>

float suma(float a,float b)
{
    float resultado;
    resultado=a+b;
    return resultado;
}


float resta(float a, float b)
{
    float resultado;
    resultado=a-b;
    return resultado;
}


float division(float a, float b)
{
    float resultado;
    resultado=a/b;
    return resultado;
}

float multiplicacion(float a, float b)
{
    float resultado;
    resultado=a*b;
    return resultado;
}

double factorial(double a)
{
    double resultado=1;
    int i;
    if(a==0){
        return 1;
    }
    else{
        for(i=2; i<=a; i++){
            resultado *= i;
        }
    return resultado;
        }
}
float validacionEntero(float a)
{
    float restaFloat;
    restaFloat=a-(int) a;

    return restaFloat;

}
