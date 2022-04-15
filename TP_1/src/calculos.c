#include <stdio.h>
#include <stdlib.h>



float descuentoDebito(float precio)
{
    float desc;
    desc = precio * 0.90;
    return desc;

}
float interesCredito(float precio)
{
    float interes;
    interes = precio * 1.25;
    return interes;
}
float arsToBtc(float precio)
{
    float precioBtc;
    float precioConvertido;
    precioBtc = 4606954.55;
    precioConvertido = precio/precioBtc;
    return precioConvertido;
}
float precioPorKm(float precio, float km)
{
    float precioPorKm = km/precio; //MEJORAR VALIDACION
    return precioPorKm;
}
float diferenciaPrecio(float pAerolineas, float pLatam)
{
    float dif;
    if(pAerolineas >= pLatam)
    {
        dif = pAerolineas - pLatam;
    }
    else
    {
        dif = pLatam - pAerolineas;
    }

    return dif;

}
